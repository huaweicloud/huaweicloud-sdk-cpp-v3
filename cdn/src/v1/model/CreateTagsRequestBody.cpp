

#include "huaweicloud/cdn/v1/model/CreateTagsRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




CreateTagsRequestBody::CreateTagsRequestBody()
{
    resourceId_ = "";
    resourceIdIsSet_ = false;
    tagsIsSet_ = false;
}

CreateTagsRequestBody::~CreateTagsRequestBody() = default;

void CreateTagsRequestBody::validate()
{
}

web::json::value CreateTagsRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourceIdIsSet_) {
        val[utility::conversions::to_string_t("resource_id")] = ModelBase::toJson(resourceId_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}

bool CreateTagsRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resource_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<Map> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    return ok;
}

std::string CreateTagsRequestBody::getResourceId() const
{
    return resourceId_;
}

void CreateTagsRequestBody::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool CreateTagsRequestBody::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void CreateTagsRequestBody::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

std::vector<Map>& CreateTagsRequestBody::getTags()
{
    return tags_;
}

void CreateTagsRequestBody::setTags(const std::vector<Map>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool CreateTagsRequestBody::tagsIsSet() const
{
    return tagsIsSet_;
}

void CreateTagsRequestBody::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


