

#include "huaweicloud/iotda/v5/model/AddBacklogPolicy.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




AddBacklogPolicy::AddBacklogPolicy()
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

AddBacklogPolicy::~AddBacklogPolicy() = default;

void AddBacklogPolicy::validate()
{
}

web::json::value AddBacklogPolicy::toJson() const
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
bool AddBacklogPolicy::fromJson(const web::json::value& val)
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


std::string AddBacklogPolicy::getPolicyName() const
{
    return policyName_;
}

void AddBacklogPolicy::setPolicyName(const std::string& value)
{
    policyName_ = value;
    policyNameIsSet_ = true;
}

bool AddBacklogPolicy::policyNameIsSet() const
{
    return policyNameIsSet_;
}

void AddBacklogPolicy::unsetpolicyName()
{
    policyNameIsSet_ = false;
}

std::string AddBacklogPolicy::getDescription() const
{
    return description_;
}

void AddBacklogPolicy::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool AddBacklogPolicy::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void AddBacklogPolicy::unsetdescription()
{
    descriptionIsSet_ = false;
}

int32_t AddBacklogPolicy::getBacklogSize() const
{
    return backlogSize_;
}

void AddBacklogPolicy::setBacklogSize(int32_t value)
{
    backlogSize_ = value;
    backlogSizeIsSet_ = true;
}

bool AddBacklogPolicy::backlogSizeIsSet() const
{
    return backlogSizeIsSet_;
}

void AddBacklogPolicy::unsetbacklogSize()
{
    backlogSizeIsSet_ = false;
}

int32_t AddBacklogPolicy::getBacklogTime() const
{
    return backlogTime_;
}

void AddBacklogPolicy::setBacklogTime(int32_t value)
{
    backlogTime_ = value;
    backlogTimeIsSet_ = true;
}

bool AddBacklogPolicy::backlogTimeIsSet() const
{
    return backlogTimeIsSet_;
}

void AddBacklogPolicy::unsetbacklogTime()
{
    backlogTimeIsSet_ = false;
}

}
}
}
}
}


