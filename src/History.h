///
///  Copyright (C) 2009 Andrej Vodopivec <andrejv@users.sourceforge.net>
///
///  This program is free software; you can redistribute it and/or modify
///  it under the terms of the GNU General Public License as published by
///  the Free Software Foundation; either version 2 of the License, or
///  (at your option) any later version.
///
///  This program is distributed in the hope that it will be useful,
///  but WITHOUT ANY WARRANTY; without even the implied warranty of
///  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
///  GNU General Public License for more details.
///
///
///  You should have received a copy of the GNU General Public License
///  along with this program; if not, write to the Free Software
///  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
///

#include <wx/wx.h>

#ifndef HISTORY_H
#define HISYORY_H

enum {
  history_ctrl_id,
  history_regex_id
};

class History : public wxPanel
{
public:
  History(wxWindow* parent, int id);
  ~History();
  void AddToHistory(wxString cmd);
  void OnRegExEvent(wxCommandEvent &ev);
  void UpdateDisplay();
private:
  wxListBox *m_history;
  wxTextCtrl *m_regex;
  wxArrayString commands;
  DECLARE_EVENT_TABLE()
};

#endif