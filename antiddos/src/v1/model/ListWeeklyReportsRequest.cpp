

#include "huaweicloud/antiddos/v1/model/ListWeeklyReportsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Antiddos {
namespace V1 {
namespace Model {




ListWeeklyReportsRequest::ListWeeklyReportsRequest()
{
    periodStartDate_ = "";
    periodStartDateIsSet_ = false;
}

ListWeeklyReportsRequest::~ListWeeklyReportsRequest() = default;

void ListWeeklyReportsRequest::validate()
{
}

web::json::value ListWeeklyReportsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(periodStartDateIsSet_) {
        val[utility::conversions::to_string_t("period_start_date")] = ModelBase::toJson(periodStartDate_);
    }

    return val;
}
bool ListWeeklyReportsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("period_start_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("period_start_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPeriodStartDate(refVal);
        }
    }
    return ok;
}


std::string ListWeeklyReportsRequest::getPeriodStartDate() const
{
    return periodStartDate_;
}

void ListWeeklyReportsRequest::setPeriodStartDate(const std::string& value)
{
    periodStartDate_ = value;
    periodStartDateIsSet_ = true;
}

bool ListWeeklyReportsRequest::periodStartDateIsSet() const
{
    return periodStartDateIsSet_;
}

void ListWeeklyReportsRequest::unsetperiodStartDate()
{
    periodStartDateIsSet_ = false;
}

}
}
}
}
}


