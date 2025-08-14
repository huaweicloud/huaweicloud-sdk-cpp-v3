

#include "huaweicloud/iotda/v5/model/UpdateBacklogPolicy.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




UpdateBacklogPolicy::UpdateBacklogPolicy()
{
    policyName_ = "";
    policyNameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    backlogSize_ = 0;
    backlogSizeIsSet_ = false;
    backlogTime_ = 0;
    backlogTimeIsSet_ = false;
}

UpdateBacklogPolicy::~UpdateBacklogPolicy() = default;

void UpdateBacklogPolicy::validate()
{
}

web::json::value UpdateBacklogPolicy::toJson() const
{
    web::json::value val = web::json::value::object();

    if(policyNameIsSet_) {
        val[utility::conversions::to_string_t("policy_name")] = ModelBase::toJson(policyName_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(backlogSizeIsSet_) {
        val[utility::conversions::to_string_t("backlog_size")] = ModelBase::toJson(backlogSize_);
    }
    if(backlogTimeIsSet_) {
        val[utility::conversions::to_string_t("backlog_time")] = ModelBase::toJson(backlogTime_);
    }

    return val;
}
bool UpdateBacklogPolicy::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("policy_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("policy_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPolicyName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("backlog_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backlog_size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBacklogSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("backlog_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backlog_time"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBacklogTime(refVal);
        }
    }
    return ok;
}


std::string UpdateBacklogPolicy::getPolicyName() const
{
    return policyName_;
}

void UpdateBacklogPolicy::setPolicyName(const std::string& value)
{
    policyName_ = value;
    policyNameIsSet_ = true;
}

bool UpdateBacklogPolicy::policyNameIsSet() const
{
    return policyNameIsSet_;
}

void UpdateBacklogPolicy::unsetpolicyName()
{
    policyNameIsSet_ = false;
}

std::string UpdateBacklogPolicy::getDescription() const
{
    return description_;
}

void UpdateBacklogPolicy::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool UpdateBacklogPolicy::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void UpdateBacklogPolicy::unsetdescription()
{
    descriptionIsSet_ = false;
}

int32_t UpdateBacklogPolicy::getBacklogSize() const
{
    return backlogSize_;
}

void UpdateBacklogPolicy::setBacklogSize(int32_t value)
{
    backlogSize_ = value;
    backlogSizeIsSet_ = true;
}

bool UpdateBacklogPolicy::backlogSizeIsSet() const
{
    return backlogSizeIsSet_;
}

void UpdateBacklogPolicy::unsetbacklogSize()
{
    backlogSizeIsSet_ = false;
}

int32_t UpdateBacklogPolicy::getBacklogTime() const
{
    return backlogTime_;
}

void UpdateBacklogPolicy::setBacklogTime(int32_t value)
{
    backlogTime_ = value;
    backlogTimeIsSet_ = true;
}

bool UpdateBacklogPolicy::backlogTimeIsSet() const
{
    return backlogTimeIsSet_;
}

void UpdateBacklogPolicy::unsetbacklogTime()
{
    backlogTimeIsSet_ = false;
}

}
}
}
}
}


