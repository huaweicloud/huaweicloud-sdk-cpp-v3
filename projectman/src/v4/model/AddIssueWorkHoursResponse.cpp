

#include "huaweicloud/projectman/v4/model/AddIssueWorkHoursResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




AddIssueWorkHoursResponse::AddIssueWorkHoursResponse()
{
    addedWorkHoursIsSet_ = false;
}

AddIssueWorkHoursResponse::~AddIssueWorkHoursResponse() = default;

void AddIssueWorkHoursResponse::validate()
{
}

web::json::value AddIssueWorkHoursResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(addedWorkHoursIsSet_) {
        val[utility::conversions::to_string_t("added_work_hours")] = ModelBase::toJson(addedWorkHours_);
    }

    return val;
}
bool AddIssueWorkHoursResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("added_work_hours"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("added_work_hours"));
        if(!fieldValue.is_null())
        {
            std::vector<AddIssueWorkHoursResponseBody_added_work_hours> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAddedWorkHours(refVal);
        }
    }
    return ok;
}


std::vector<AddIssueWorkHoursResponseBody_added_work_hours>& AddIssueWorkHoursResponse::getAddedWorkHours()
{
    return addedWorkHours_;
}

void AddIssueWorkHoursResponse::setAddedWorkHours(const std::vector<AddIssueWorkHoursResponseBody_added_work_hours>& value)
{
    addedWorkHours_ = value;
    addedWorkHoursIsSet_ = true;
}

bool AddIssueWorkHoursResponse::addedWorkHoursIsSet() const
{
    return addedWorkHoursIsSet_;
}

void AddIssueWorkHoursResponse::unsetaddedWorkHours()
{
    addedWorkHoursIsSet_ = false;
}

}
}
}
}
}


