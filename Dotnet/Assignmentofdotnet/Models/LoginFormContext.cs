using Microsoft.EntityFrameworkCore;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace Assignmentofdotnet.Models
{
    public class LoginFormContext : DbContext
    {
        public LoginFormContext(DbContextOptions<LoginFormContext> options): base(options)
        {

        }
        public DbSet<LoginForm> LoginForm { get; set; }
    }
}
