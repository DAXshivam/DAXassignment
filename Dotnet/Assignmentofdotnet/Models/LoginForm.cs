using System;
using System.Collections.Generic;
using System.ComponentModel.DataAnnotations;
using System.Linq;
using System.Threading.Tasks;
namespace Assignmentofdotnet.Models
{
    public class LoginForm
    {
        [Key]
        public int Id { get; set; }
        public string LoginName { get; set; }
        public string Password { get; set; }
        public string PhoneNumber { get; set; }
        public string Email { get; set; }

    }
}
