

#include "huaweicloud/smn/v2/model/BatchCreateOrDeleteResourceTagsRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




BatchCreateOrDeleteResourceTagsRequestBody::BatchCreateOrDeleteResourceTagsRequestBody()
{
    tagsIsSet_ = false;
    action_ = "";
    actionIsSet_ = false;
}

BatchCreateOrDeleteResourceTagsRequestBody::~BatchCreateOrDeleteResourceTagsRequestBody() = default;

void BatchCreateOrDeleteResourceTagsRequestBody::validate()
{
}

web::json::value BatchCreateOrDeleteResourceTagsRequestBody::toJson() const
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
bool BatchCreateOrDeleteResourceTagsRequestBody::fromJson(const web::json::value& val)
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


std::vector<ResourceTag>& BatchCreateOrDeleteResourceTagsRequestBody::getTags()
{
    return tags_;
}

void BatchCreateOrDeleteResourceTagsRequestBody::setTags(const std::vector<ResourceTag>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool BatchCreateOrDeleteResourceTagsRequestBody::tagsIsSet() const
{
    return tagsIsSet_;
}

void BatchCreateOrDeleteResourceTagsRequestBody::unsettags()
{
    tagsIsSet_ = false;
}

std::string BatchCreateOrDeleteResourceTagsRequestBody::getAction() const
{
    return action_;
}

void BatchCreateOrDeleteResourceTagsRequestBody::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool BatchCreateOrDeleteResourceTagsRequestBody::actionIsSet() const
{
    return actionIsSet_;
}

void BatchCreateOrDeleteResourceTagsRequestBody::unsetaction()
{
    actionIsSet_ = false;
}

}
}
}
}
}


