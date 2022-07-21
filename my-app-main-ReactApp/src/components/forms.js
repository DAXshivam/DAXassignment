import React from 'react'
import axios from 'axios';
import Form from 'react-bootstrap/Form';
import Button from 'react-bootstrap/Button';
const baseURLpost = 'https://qghcujpqbvrdfszremfe.supabase.co/rest/v1/blogs';

function clicksubmit(e){
   
    

        e.preventDefault();
  
          const inputData = new FormData(e.target)
  
          const formDataObj = Object.fromEntries(inputData.entries())
  
          const formData = {
  
                  "title": formDataObj.title,
  
                  "description": formDataObj.description,
  
                  "author": formDataObj.author,
  
                  "reading_time": parseInt(formDataObj.time)
  
          }
  
          axios.post(baseURLpost,formDataObj,
  
              {
  
              headers: {
  
                  'Authorization': 'Bearer eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJpc3MiOiJzdXBhYmFzZSIsInJlZiI6InFnaGN1anBxYnZyZGZzenJlbWZlIiwicm9sZSI6ImFub24iLCJpYXQiOjE2NTgxMjk3NzcsImV4cCI6MTk3MzcwNTc3N30.LvOp9lASnuJAAwvg2VxFmnrVXuqZOM0KVngw8EKHQcM',
  
                  'apikey': 'eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJpc3MiOiJzdXBhYmFzZSIsInJlZiI6InFnaGN1anBxYnZyZGZzenJlbWZlIiwicm9sZSI6ImFub24iLCJpYXQiOjE2NTgxMjk3NzcsImV4cCI6MTk3MzcwNTc3N30.LvOp9lASnuJAAwvg2VxFmnrVXuqZOM0KVngw8EKHQcM'
  
                  },
  
                     
  
              }).then(data=>console.log(data)).catch(error=>console.log(error))
  
          
}
const forms = () => {

    return(
//     <div className='container my-6'>
//     <form onSubmit={clicksubmit}>
//   <div className="form-group">
//     <label for="exampleFormControlInput1">Title</label>
//     <input type="text" name= "title"className="form-control" id="Title" placeholder="Enter Title"/>
//   </div>
//   <div className="form-group">
//   <div className="mb-3">
//   <label for="exampleFormControlTextarea1" className="form-label">Description</label>
//   <textarea className="form-control" name='description' id="descr" rows="3"></textarea>
// </div>
//   </div>
//   <div className="form-group">
//     <label for="exampleFormControlInput1">Author</label>
//     <input type="text" name= 'author'className="form-control" id="author" placeholder="Enter Author"/>
//   </div>
//   <div className="form-group">
//     <label for="exampleFormControlInput1">Time</label>
//     <input type="text" name="time" className="form-control" id="time" placeholder="Enter Reading Time"/>
//   </div>
//   <button type="submit"  className="btn btn-primary my-4">Submit</button>
  
// </form>

// </div>
<Form onSubmit={clicksubmit} className='container'>

<Form.Control size="sm" type="text" placeholder="title" name='title' />

  <br />

<Form.Control type="text" placeholder="description" name='description' />

  <br />

<Form.Control size="sm" type="text" placeholder="Author"  name='author'/>

  <br />

<Form.Control size="sm" type="text" placeholder="time" name='reading_time' />

  <br />

<Button  type='submit' variant="light">Submit</Button>

</Form>       
    )
}
export default forms