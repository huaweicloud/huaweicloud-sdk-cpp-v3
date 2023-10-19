

#include "huaweicloud/cfw/v1/model/DeleteRuleAclDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




DeleteRuleAclDto::DeleteRuleAclDto()
{
    objectId_ = "";
    objectIdIsSet_ = false;
    ruleIdsIsSet_ = false;
}

DeleteRuleAclDto::~DeleteRuleAclDto() = default;

void DeleteRuleAclDto::validate()
{
}

web::json::value DeleteRuleAclDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(objectIdIsSet_) {
        val[utility::conversions::to_string_t("object_id")] = ModelBase::toJson(objectId_);
    }
    if(ruleIdsIsSet_) {
        val[utility::conversions::to_string_t("rule_ids")] = ModelBase::toJson(ruleIds_);
    }

    return val;
}
bool DeleteRuleAclDto::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("rule_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rule_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRuleIds(refVal);
        }
    }
    return ok;
}


std::string DeleteRuleAclDto::getObjectId() const
{
    return objectId_;
}

void DeleteRuleAclDto::setObjectId(const std::string& value)
{
    objectId_ = value;
    objectIdIsSet_ = true;
}

bool DeleteRuleAclDto::objectIdIsSet() const
{
    return objectIdIsSet_;
}

void DeleteRuleAclDto::unsetobjectId()
{
    objectIdIsSet_ = false;
}

std::vector<std::string>& DeleteRuleAclDto::getRuleIds()
{
    return ruleIds_;
}

void DeleteRuleAclDto::setRuleIds(const std::vector<std::string>& value)
{
    ruleIds_ = value;
    ruleIdsIsSet_ = true;
}

bool DeleteRuleAclDto::ruleIdsIsSet() const
{
    return ruleIdsIsSet_;
}

void DeleteRuleAclDto::unsetruleIds()
{
    ruleIdsIsSet_ = false;
}

}
}
}
}
}


