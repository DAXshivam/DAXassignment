import './App.css';
import Blogs from './components/Blogs';
import Forms from './components/forms';


function App() {
  return (
    <div className="App">
      <h1>List of blogs</h1>
      
      <Forms />
      <Blogs />
    </div>
  );
}

export default App;
