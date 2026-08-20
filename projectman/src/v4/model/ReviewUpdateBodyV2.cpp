

#include "huaweicloud/projectman/v4/model/ReviewUpdateBodyV2.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ReviewUpdateBodyV2::ReviewUpdateBodyV2()
{
    oldStatus_ = "";
    oldStatusIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    planEndDate_ = "";
    planEndDateIsSet_ = false;
}

ReviewUpdateBodyV2::~ReviewUpdateBodyV2() = default;

void ReviewUpdateBodyV2::validate()
{
}

web::json::value ReviewUpdateBodyV2::toJson() const
{
    web::json::value val = web::json::value::object();

    if(oldStatusIsSet_) {
        val[utility::conversions::to_string_t("old_status")] = ModelBase::toJson(oldStatus_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(planEndDateIsSet_) {
        val[utility::conversions::to_string_t("plan_end_date")] = ModelBase::toJson(planEndDate_);
    }

    return val;
}
bool ReviewUpdateBodyV2::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("old_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("old_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOldStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("plan_end_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("plan_end_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlanEndDate(refVal);
        }
    }
    return ok;
}


std::string ReviewUpdateBodyV2::getOldStatus() const
{
    return oldStatus_;
}

void ReviewUpdateBodyV2::setOldStatus(const std::string& value)
{
    oldStatus_ = value;
    oldStatusIsSet_ = true;
}

bool ReviewUpdateBodyV2::oldStatusIsSet() const
{
    return oldStatusIsSet_;
}

void ReviewUpdateBodyV2::unsetoldStatus()
{
    oldStatusIsSet_ = false;
}

std::string ReviewUpdateBodyV2::getStatus() const
{
    return status_;
}

void ReviewUpdateBodyV2::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ReviewUpdateBodyV2::statusIsSet() const
{
    return statusIsSet_;
}

void ReviewUpdateBodyV2::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ReviewUpdateBodyV2::getPlanEndDate() const
{
    return planEndDate_;
}

void ReviewUpdateBodyV2::setPlanEndDate(const std::string& value)
{
    planEndDate_ = value;
    planEndDateIsSet_ = true;
}

bool ReviewUpdateBodyV2::planEndDateIsSet() const
{
    return planEndDateIsSet_;
}

void ReviewUpdateBodyV2::unsetplanEndDate()
{
    planEndDateIsSet_ = false;
}

}
}
}
}
}


