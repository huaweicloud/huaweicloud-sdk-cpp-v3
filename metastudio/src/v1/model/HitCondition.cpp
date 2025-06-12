

#include "huaweicloud/metastudio/v1/model/HitCondition.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




HitCondition::HitCondition()
{
    relation_ = "";
    relationIsSet_ = false;
    priority_ = 0;
    priorityIsSet_ = false;
    tagsIsSet_ = false;
}

HitCondition::~HitCondition() = default;

void HitCondition::validate()
{
}

web::json::value HitCondition::toJson() const
{
    web::json::value val = web::json::value::object();

    if(relationIsSet_) {
        val[utility::conversions::to_string_t("relation")] = ModelBase::toJson(relation_);
    }
    if(priorityIsSet_) {
        val[utility::conversions::to_string_t("priority")] = ModelBase::toJson(priority_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}
bool HitCondition::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("relation"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("relation"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRelation(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<HitConditionTag> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    return ok;
}


std::string HitCondition::getRelation() const
{
    return relation_;
}

void HitCondition::setRelation(const std::string& value)
{
    relation_ = value;
    relationIsSet_ = true;
}

bool HitCondition::relationIsSet() const
{
    return relationIsSet_;
}

void HitCondition::unsetrelation()
{
    relationIsSet_ = false;
}

int32_t HitCondition::getPriority() const
{
    return priority_;
}

void HitCondition::setPriority(int32_t value)
{
    priority_ = value;
    priorityIsSet_ = true;
}

bool HitCondition::priorityIsSet() const
{
    return priorityIsSet_;
}

void HitCondition::unsetpriority()
{
    priorityIsSet_ = false;
}

std::vector<HitConditionTag>& HitCondition::getTags()
{
    return tags_;
}

void HitCondition::setTags(const std::vector<HitConditionTag>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool HitCondition::tagsIsSet() const
{
    return tagsIsSet_;
}

void HitCondition::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


