

#include "huaweicloud/vpc/v2/model/BatchCreateSecurityGroupTagsRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




BatchCreateSecurityGroupTagsRequestBody::BatchCreateSecurityGroupTagsRequestBody()
{
    action_ = "";
    actionIsSet_ = false;
    tagsIsSet_ = false;
}

BatchCreateSecurityGroupTagsRequestBody::~BatchCreateSecurityGroupTagsRequestBody() = default;

void BatchCreateSecurityGroupTagsRequestBody::validate()
{
}

web::json::value BatchCreateSecurityGroupTagsRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(actionIsSet_) {
        val[utility::conversions::to_string_t("action")] = ModelBase::toJson(action_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}
bool BatchCreateSecurityGroupTagsRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("action"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAction(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<ResourceTag> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    return ok;
}


std::string BatchCreateSecurityGroupTagsRequestBody::getAction() const
{
    return action_;
}

void BatchCreateSecurityGroupTagsRequestBody::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool BatchCreateSecurityGroupTagsRequestBody::actionIsSet() const
{
    return actionIsSet_;
}

void BatchCreateSecurityGroupTagsRequestBody::unsetaction()
{
    actionIsSet_ = false;
}

std::vector<ResourceTag>& BatchCreateSecurityGroupTagsRequestBody::getTags()
{
    return tags_;
}

void BatchCreateSecurityGroupTagsRequestBody::setTags(const std::vector<ResourceTag>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool BatchCreateSecurityGroupTagsRequestBody::tagsIsSet() const
{
    return tagsIsSet_;
}

void BatchCreateSecurityGroupTagsRequestBody::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


