#include <packet.h>

class Task
{
  public:
    Task();
    Task(bool (*task)(Packet, int));
    bool execute(Packet packet, int index);

  private:
    bool (*m_task)(Packet, int);

};