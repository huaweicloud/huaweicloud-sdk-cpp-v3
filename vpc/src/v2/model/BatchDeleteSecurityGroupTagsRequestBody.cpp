

#include "huaweicloud/vpc/v2/model/BatchDeleteSecurityGroupTagsRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




BatchDeleteSecurityGroupTagsRequestBody::BatchDeleteSecurityGroupTagsRequestBody()
{
    action_ = "";
    actionIsSet_ = false;
    tagsIsSet_ = false;
}

BatchDeleteSecurityGroupTagsRequestBody::~BatchDeleteSecurityGroupTagsRequestBody() = default;

void BatchDeleteSecurityGroupTagsRequestBody::validate()
{
}

web::json::value BatchDeleteSecurityGroupTagsRequestBody::toJson() const
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
bool BatchDeleteSecurityGroupTagsRequestBody::fromJson(const web::json::value& val)
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


std::string BatchDeleteSecurityGroupTagsRequestBody::getAction() const
{
    return action_;
}

void BatchDeleteSecurityGroupTagsRequestBody::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool BatchDeleteSecurityGroupTagsRequestBody::actionIsSet() const
{
    return actionIsSet_;
}

void BatchDeleteSecurityGroupTagsRequestBody::unsetaction()
{
    actionIsSet_ = false;
}

std::vector<ResourceTag>& BatchDeleteSecurityGroupTagsRequestBody::getTags()
{
    return tags_;
}

void BatchDeleteSecurityGroupTagsRequestBody::setTags(const std::vector<ResourceTag>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool BatchDeleteSecurityGroupTagsRequestBody::tagsIsSet() const
{
    return tagsIsSet_;
}

void BatchDeleteSecurityGroupTagsRequestBody::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


