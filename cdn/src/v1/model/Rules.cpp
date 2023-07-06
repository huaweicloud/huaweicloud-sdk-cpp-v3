

#include "huaweicloud/cdn/v1/model/Rules.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




Rules::Rules()
{
    ruleType_ = 0;
    ruleTypeIsSet_ = false;
    content_ = "";
    contentIsSet_ = false;
    ttl_ = 0;
    ttlIsSet_ = false;
    ttlType_ = 0;
    ttlTypeIsSet_ = false;
    priority_ = 0;
    priorityIsSet_ = false;
}

Rules::~Rules() = default;

void Rules::validate()
{
}

web::json::value Rules::toJson() const
{
    web::json::value val = web::json::value::object();

    if(ruleTypeIsSet_) {
        val[utility::conversions::to_string_t("rule_type")] = ModelBase::toJson(ruleType_);
    }
    if(contentIsSet_) {
        val[utility::conversions::to_string_t("content")] = ModelBase::toJson(content_);
    }
    if(ttlIsSet_) {
        val[utility::conversions::to_string_t("ttl")] = ModelBase::toJson(ttl_);
    }
    if(ttlTypeIsSet_) {
        val[utility::conversions::to_string_t("ttl_type")] = ModelBase::toJson(ttlType_);
    }
    if(priorityIsSet_) {
        val[utility::conversions::to_string_t("priority")] = ModelBase::toJson(priority_);
    }

    return val;
}

bool Rules::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("rule_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rule_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRuleType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("content"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("content"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContent(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ttl"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ttl"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTtl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ttl_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ttl_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTtlType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("priority"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("priority"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPriority(refVal);
        }
    }
    return ok;
}

int32_t Rules::getRuleType() const
{
    return ruleType_;
}

void Rules::setRuleType(int32_t value)
{
    ruleType_ = value;
    ruleTypeIsSet_ = true;
}

bool Rules::ruleTypeIsSet() const
{
    return ruleTypeIsSet_;
}

void Rules::unsetruleType()
{
    ruleTypeIsSet_ = false;
}

std::string Rules::getContent() const
{
    return content_;
}

void Rules::setContent(const std::string& value)
{
    content_ = value;
    contentIsSet_ = true;
}

bool Rules::contentIsSet() const
{
    return contentIsSet_;
}

void Rules::unsetcontent()
{
    contentIsSet_ = false;
}

int32_t Rules::getTtl() const
{
    return ttl_;
}

void Rules::setTtl(int32_t value)
{
    ttl_ = value;
    ttlIsSet_ = true;
}

bool Rules::ttlIsSet() const
{
    return ttlIsSet_;
}

void Rules::unsetttl()
{
    ttlIsSet_ = false;
}

int32_t Rules::getTtlType() const
{
    return ttlType_;
}

void Rules::setTtlType(int32_t value)
{
    ttlType_ = value;
    ttlTypeIsSet_ = true;
}

bool Rules::ttlTypeIsSet() const
{
    return ttlTypeIsSet_;
}

void Rules::unsetttlType()
{
    ttlTypeIsSet_ = false;
}

int32_t Rules::getPriority() const
{
    return priority_;
}

void Rules::setPriority(int32_t value)
{
    priority_ = value;
    priorityIsSet_ = true;
}

bool Rules::priorityIsSet() const
{
    return priorityIsSet_;
}

void Rules::unsetpriority()
{
    priorityIsSet_ = false;
}

}
}
}
}
}


