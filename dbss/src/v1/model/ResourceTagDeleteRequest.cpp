

#include "huaweicloud/dbss/v1/model/ResourceTagDeleteRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ResourceTagDeleteRequest::ResourceTagDeleteRequest()
{
    tagsIsSet_ = false;
    sysTagsIsSet_ = false;
}

ResourceTagDeleteRequest::~ResourceTagDeleteRequest() = default;

void ResourceTagDeleteRequest::validate()
{
}

web::json::value ResourceTagDeleteRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(sysTagsIsSet_) {
        val[utility::conversions::to_string_t("sys_tags")] = ModelBase::toJson(sysTags_);
    }

    return val;
}
bool ResourceTagDeleteRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<ResourceTagDeleteRequest_tags> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sys_tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sys_tags"));
        if(!fieldValue.is_null())
        {
            std::vector<ResourceTagDeleteRequest_tags> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSysTags(refVal);
        }
    }
    return ok;
}


std::vector<ResourceTagDeleteRequest_tags>& ResourceTagDeleteRequest::getTags()
{
    return tags_;
}

void ResourceTagDeleteRequest::setTags(const std::vector<ResourceTagDeleteRequest_tags>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ResourceTagDeleteRequest::tagsIsSet() const
{
    return tagsIsSet_;
}

void ResourceTagDeleteRequest::unsettags()
{
    tagsIsSet_ = false;
}

std::vector<ResourceTagDeleteRequest_tags>& ResourceTagDeleteRequest::getSysTags()
{
    return sysTags_;
}

void ResourceTagDeleteRequest::setSysTags(const std::vector<ResourceTagDeleteRequest_tags>& value)
{
    sysTags_ = value;
    sysTagsIsSet_ = true;
}

bool ResourceTagDeleteRequest::sysTagsIsSet() const
{
    return sysTagsIsSet_;
}

void ResourceTagDeleteRequest::unsetsysTags()
{
    sysTagsIsSet_ = false;
}

}
}
}
}
}


