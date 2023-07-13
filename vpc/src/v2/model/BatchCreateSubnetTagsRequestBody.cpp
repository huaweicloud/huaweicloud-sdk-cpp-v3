

#include "huaweicloud/vpc/v2/model/BatchCreateSubnetTagsRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




BatchCreateSubnetTagsRequestBody::BatchCreateSubnetTagsRequestBody()
{
    action_ = "";
    actionIsSet_ = false;
    tagsIsSet_ = false;
}

BatchCreateSubnetTagsRequestBody::~BatchCreateSubnetTagsRequestBody() = default;

void BatchCreateSubnetTagsRequestBody::validate()
{
}

web::json::value BatchCreateSubnetTagsRequestBody::toJson() const
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

bool BatchCreateSubnetTagsRequestBody::fromJson(const web::json::value& val)
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

std::string BatchCreateSubnetTagsRequestBody::getAction() const
{
    return action_;
}

void BatchCreateSubnetTagsRequestBody::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool BatchCreateSubnetTagsRequestBody::actionIsSet() const
{
    return actionIsSet_;
}

void BatchCreateSubnetTagsRequestBody::unsetaction()
{
    actionIsSet_ = false;
}

std::vector<ResourceTag>& BatchCreateSubnetTagsRequestBody::getTags()
{
    return tags_;
}

void BatchCreateSubnetTagsRequestBody::setTags(const std::vector<ResourceTag>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool BatchCreateSubnetTagsRequestBody::tagsIsSet() const
{
    return tagsIsSet_;
}

void BatchCreateSubnetTagsRequestBody::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


