

#include "huaweicloud/cdn/v2/model/DeleteTagsRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




DeleteTagsRequestBody::DeleteTagsRequestBody()
{
    resourceId_ = "";
    resourceIdIsSet_ = false;
    tagsIsSet_ = false;
}

DeleteTagsRequestBody::~DeleteTagsRequestBody() = default;

void DeleteTagsRequestBody::validate()
{
}

web::json::value DeleteTagsRequestBody::toJson() const
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
bool DeleteTagsRequestBody::fromJson(const web::json::value& val)
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
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    return ok;
}


std::string DeleteTagsRequestBody::getResourceId() const
{
    return resourceId_;
}

void DeleteTagsRequestBody::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool DeleteTagsRequestBody::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void DeleteTagsRequestBody::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

std::vector<std::string>& DeleteTagsRequestBody::getTags()
{
    return tags_;
}

void DeleteTagsRequestBody::setTags(const std::vector<std::string>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool DeleteTagsRequestBody::tagsIsSet() const
{
    return tagsIsSet_;
}

void DeleteTagsRequestBody::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


