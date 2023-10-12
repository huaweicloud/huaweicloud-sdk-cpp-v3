

#include "huaweicloud/ims/v2/model/BatchAddOrDeleteTagsRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




BatchAddOrDeleteTagsRequestBody::BatchAddOrDeleteTagsRequestBody()
{
    action_ = "";
    actionIsSet_ = false;
    tagsIsSet_ = false;
}

BatchAddOrDeleteTagsRequestBody::~BatchAddOrDeleteTagsRequestBody() = default;

void BatchAddOrDeleteTagsRequestBody::validate()
{
}

web::json::value BatchAddOrDeleteTagsRequestBody::toJson() const
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
bool BatchAddOrDeleteTagsRequestBody::fromJson(const web::json::value& val)
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


std::string BatchAddOrDeleteTagsRequestBody::getAction() const
{
    return action_;
}

void BatchAddOrDeleteTagsRequestBody::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool BatchAddOrDeleteTagsRequestBody::actionIsSet() const
{
    return actionIsSet_;
}

void BatchAddOrDeleteTagsRequestBody::unsetaction()
{
    actionIsSet_ = false;
}

std::vector<ResourceTag>& BatchAddOrDeleteTagsRequestBody::getTags()
{
    return tags_;
}

void BatchAddOrDeleteTagsRequestBody::setTags(const std::vector<ResourceTag>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool BatchAddOrDeleteTagsRequestBody::tagsIsSet() const
{
    return tagsIsSet_;
}

void BatchAddOrDeleteTagsRequestBody::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


