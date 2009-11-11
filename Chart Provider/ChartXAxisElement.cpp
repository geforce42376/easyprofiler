/********************************************************************
    File:	        ChartXAxisElement	
    Creation Date:	2009/11/01
	
	Author: 	    Ahmed Charfeddine
					info@potatosoftware.com

	License:        Copyright [2009] [Potato software]

					Licensed under the Apache License, Version 2.0 (the "License");
					you may not use this file except in compliance with the License.
					You may obtain a copy of the License at

							http://www.apache.org/licenses/LICENSE-2.0

					Unless required by applicable law or agreed to in writing, software
					distributed under the License is distributed on an "AS IS" BASIS,
					WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
					See the License for the specific language governing permissions and
					limitations under the License.
    
	Note :	  		
*********************************************************************/
#include "StdAfx.h"
#include "ChartXAxisElement.h"

CChartXAxisElement::CChartXAxisElement(void)
{
}

void CChartXAxisElement::setText( System::String^ value )
{
	chart->ChartAreas["ChartArea1"]->AxisX->Title=value;
}

void CChartXAxisElement::setFontLeft()
{
	chart->ChartAreas["ChartArea1"]->AxisX->TitleAlignment=System::Drawing::StringAlignment::Near;
}

void CChartXAxisElement::setFontCenter()
{
	chart->ChartAreas["ChartArea1"]->AxisX->TitleAlignment=System::Drawing::StringAlignment::Center;
}

void CChartXAxisElement::setFontRight()
{
	chart->ChartAreas["ChartArea1"]->AxisX->TitleAlignment=System::Drawing::StringAlignment::Far;
}