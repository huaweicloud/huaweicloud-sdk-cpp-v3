

#include "huaweicloud/dbss/v1/model/ResourceTagRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ResourceTagRequest::ResourceTagRequest()
{
    tagsIsSet_ = false;
    sysTagsIsSet_ = false;
}

ResourceTagRequest::~ResourceTagRequest() = default;

void ResourceTagRequest::validate()
{
}

web::json::value ResourceTagRequest::toJson() const
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
bool ResourceTagRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<ResourceTagRequest_tags> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sys_tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sys_tags"));
        if(!fieldValue.is_null())
        {
            std::vector<ResourceTagRequest_tags> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSysTags(refVal);
        }
    }
    return ok;
}


std::vector<ResourceTagRequest_tags>& ResourceTagRequest::getTags()
{
    return tags_;
}

void ResourceTagRequest::setTags(const std::vector<ResourceTagRequest_tags>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ResourceTagRequest::tagsIsSet() const
{
    return tagsIsSet_;
}

void ResourceTagRequest::unsettags()
{
    tagsIsSet_ = false;
}

std::vector<ResourceTagRequest_tags>& ResourceTagRequest::getSysTags()
{
    return sysTags_;
}

void ResourceTagRequest::setSysTags(const std::vector<ResourceTagRequest_tags>& value)
{
    sysTags_ = value;
    sysTagsIsSet_ = true;
}

bool ResourceTagRequest::sysTagsIsSet() const
{
    return sysTagsIsSet_;
}

void ResourceTagRequest::unsetsysTags()
{
    sysTagsIsSet_ = false;
}

}
}
}
}
}


