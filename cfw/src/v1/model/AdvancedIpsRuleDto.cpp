

#include "huaweicloud/cfw/v1/model/AdvancedIpsRuleDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




AdvancedIpsRuleDto::AdvancedIpsRuleDto()
{
    action_ = 0;
    actionIsSet_ = false;
    ipsRuleId_ = "";
    ipsRuleIdIsSet_ = false;
    ipsRuleType_ = 0;
    ipsRuleTypeIsSet_ = false;
    objectId_ = "";
    objectIdIsSet_ = false;
    param_ = "";
    paramIsSet_ = false;
    status_ = 0;
    statusIsSet_ = false;
}

AdvancedIpsRuleDto::~AdvancedIpsRuleDto() = default;

void AdvancedIpsRuleDto::validate()
{
}

web::json::value AdvancedIpsRuleDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(actionIsSet_) {
        val[utility::conversions::to_string_t("action")] = ModelBase::toJson(action_);
    }
    if(ipsRuleIdIsSet_) {
        val[utility::conversions::to_string_t("ips_rule_id")] = ModelBase::toJson(ipsRuleId_);
    }
    if(ipsRuleTypeIsSet_) {
        val[utility::conversions::to_string_t("ips_rule_type")] = ModelBase::toJson(ipsRuleType_);
    }
    if(objectIdIsSet_) {
        val[utility::conversions::to_string_t("object_id")] = ModelBase::toJson(objectId_);
    }
    if(paramIsSet_) {
        val[utility::conversions::to_string_t("param")] = ModelBase::toJson(param_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool AdvancedIpsRuleDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("action"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAction(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ips_rule_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ips_rule_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpsRuleId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ips_rule_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ips_rule_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpsRuleType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("object_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("object_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("param"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("param"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParam(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


int32_t AdvancedIpsRuleDto::getAction() const
{
    return action_;
}

void AdvancedIpsRuleDto::setAction(int32_t value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool AdvancedIpsRuleDto::actionIsSet() const
{
    return actionIsSet_;
}

void AdvancedIpsRuleDto::unsetaction()
{
    actionIsSet_ = false;
}

std::string AdvancedIpsRuleDto::getIpsRuleId() const
{
    return ipsRuleId_;
}

void AdvancedIpsRuleDto::setIpsRuleId(const std::string& value)
{
    ipsRuleId_ = value;
    ipsRuleIdIsSet_ = true;
}

bool AdvancedIpsRuleDto::ipsRuleIdIsSet() const
{
    return ipsRuleIdIsSet_;
}

void AdvancedIpsRuleDto::unsetipsRuleId()
{
    ipsRuleIdIsSet_ = false;
}

int32_t AdvancedIpsRuleDto::getIpsRuleType() const
{
    return ipsRuleType_;
}

void AdvancedIpsRuleDto::setIpsRuleType(int32_t value)
{
    ipsRuleType_ = value;
    ipsRuleTypeIsSet_ = true;
}

bool AdvancedIpsRuleDto::ipsRuleTypeIsSet() const
{
    return ipsRuleTypeIsSet_;
}

void AdvancedIpsRuleDto::unsetipsRuleType()
{
    ipsRuleTypeIsSet_ = false;
}

std::string AdvancedIpsRuleDto::getObjectId() const
{
    return objectId_;
}

void AdvancedIpsRuleDto::setObjectId(const std::string& value)
{
    objectId_ = value;
    objectIdIsSet_ = true;
}

bool AdvancedIpsRuleDto::objectIdIsSet() const
{
    return objectIdIsSet_;
}

void AdvancedIpsRuleDto::unsetobjectId()
{
    objectIdIsSet_ = false;
}

std::string AdvancedIpsRuleDto::getParam() const
{
    return param_;
}

void AdvancedIpsRuleDto::setParam(const std::string& value)
{
    param_ = value;
    paramIsSet_ = true;
}

bool AdvancedIpsRuleDto::paramIsSet() const
{
    return paramIsSet_;
}

void AdvancedIpsRuleDto::unsetparam()
{
    paramIsSet_ = false;
}

int32_t AdvancedIpsRuleDto::getStatus() const
{
    return status_;
}

void AdvancedIpsRuleDto::setStatus(int32_t value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool AdvancedIpsRuleDto::statusIsSet() const
{
    return statusIsSet_;
}

void AdvancedIpsRuleDto::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


