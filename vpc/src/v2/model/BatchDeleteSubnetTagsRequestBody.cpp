

#include "huaweicloud/vpc/v2/model/BatchDeleteSubnetTagsRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




BatchDeleteSubnetTagsRequestBody::BatchDeleteSubnetTagsRequestBody()
{
    action_ = "";
    actionIsSet_ = false;
    tagsIsSet_ = false;
}

BatchDeleteSubnetTagsRequestBody::~BatchDeleteSubnetTagsRequestBody() = default;

void BatchDeleteSubnetTagsRequestBody::validate()
{
}

web::json::value BatchDeleteSubnetTagsRequestBody::toJson() const
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

bool BatchDeleteSubnetTagsRequestBody::fromJson(const web::json::value& val)
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

std::string BatchDeleteSubnetTagsRequestBody::getAction() const
{
    return action_;
}

void BatchDeleteSubnetTagsRequestBody::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool BatchDeleteSubnetTagsRequestBody::actionIsSet() const
{
    return actionIsSet_;
}

void BatchDeleteSubnetTagsRequestBody::unsetaction()
{
    actionIsSet_ = false;
}

std::vector<ResourceTag>& BatchDeleteSubnetTagsRequestBody::getTags()
{
    return tags_;
}

void BatchDeleteSubnetTagsRequestBody::setTags(const std::vector<ResourceTag>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool BatchDeleteSubnetTagsRequestBody::tagsIsSet() const
{
    return tagsIsSet_;
}

void BatchDeleteSubnetTagsRequestBody::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


