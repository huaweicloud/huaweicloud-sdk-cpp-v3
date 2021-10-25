

#include "huaweicloud/sdrs/v1/model/BatchAddTagsRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




BatchAddTagsRequestBody::BatchAddTagsRequestBody()
{
    tagsIsSet_ = false;
    action_ = "";
    actionIsSet_ = false;
}

BatchAddTagsRequestBody::~BatchAddTagsRequestBody() = default;

void BatchAddTagsRequestBody::validate()
{
}

web::json::value BatchAddTagsRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(actionIsSet_) {
        val[utility::conversions::to_string_t("action")] = ModelBase::toJson(action_);
    }

    return val;
}

bool BatchAddTagsRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<ResourceTag> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("action"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAction(refVal);
        }
    }
    return ok;
}


std::vector<ResourceTag>& BatchAddTagsRequestBody::getTags()
{
    return tags_;
}

void BatchAddTagsRequestBody::setTags(const std::vector<ResourceTag>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool BatchAddTagsRequestBody::tagsIsSet() const
{
    return tagsIsSet_;
}

void BatchAddTagsRequestBody::unsettags()
{
    tagsIsSet_ = false;
}

std::string BatchAddTagsRequestBody::getAction() const
{
    return action_;
}

void BatchAddTagsRequestBody::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool BatchAddTagsRequestBody::actionIsSet() const
{
    return actionIsSet_;
}

void BatchAddTagsRequestBody::unsetaction()
{
    actionIsSet_ = false;
}

}
}
}
}
}


