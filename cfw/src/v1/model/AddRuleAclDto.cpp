

#include "huaweicloud/cfw/v1/model/AddRuleAclDto.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




AddRuleAclDto::AddRuleAclDto()
{
    objectId_ = "";
    objectIdIsSet_ = false;
    type_ = 0;
    typeIsSet_ = false;
    rulesIsSet_ = false;
}

AddRuleAclDto::~AddRuleAclDto() = default;

void AddRuleAclDto::validate()
{
}

web::json::value AddRuleAclDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(objectIdIsSet_) {
        val[utility::conversions::to_string_t("object_id")] = ModelBase::toJson(objectId_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(rulesIsSet_) {
        val[utility::conversions::to_string_t("rules")] = ModelBase::toJson(rules_);
    }

    return val;
}

bool AddRuleAclDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("object_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("object_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rules"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rules"));
        if(!fieldValue.is_null())
        {
            std::vector<AddRuleAclDto_rules> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRules(refVal);
        }
    }
    return ok;
}

std::string AddRuleAclDto::getObjectId() const
{
    return objectId_;
}

void AddRuleAclDto::setObjectId(const std::string& value)
{
    objectId_ = value;
    objectIdIsSet_ = true;
}

bool AddRuleAclDto::objectIdIsSet() const
{
    return objectIdIsSet_;
}

void AddRuleAclDto::unsetobjectId()
{
    objectIdIsSet_ = false;
}

int32_t AddRuleAclDto::getType() const
{
    return type_;
}

void AddRuleAclDto::setType(int32_t value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool AddRuleAclDto::typeIsSet() const
{
    return typeIsSet_;
}

void AddRuleAclDto::unsettype()
{
    typeIsSet_ = false;
}

std::vector<AddRuleAclDto_rules>& AddRuleAclDto::getRules()
{
    return rules_;
}

void AddRuleAclDto::setRules(const std::vector<AddRuleAclDto_rules>& value)
{
    rules_ = value;
    rulesIsSet_ = true;
}

bool AddRuleAclDto::rulesIsSet() const
{
    return rulesIsSet_;
}

void AddRuleAclDto::unsetrules()
{
    rulesIsSet_ = false;
}

}
}
}
}
}


