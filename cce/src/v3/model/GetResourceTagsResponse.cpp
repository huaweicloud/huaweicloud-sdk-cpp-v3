

#include "huaweicloud/cce/v3/model/GetResourceTagsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




GetResourceTagsResponse::GetResourceTagsResponse()
{
    tagsIsSet_ = false;
    sysTagsIsSet_ = false;
}

GetResourceTagsResponse::~GetResourceTagsResponse() = default;

void GetResourceTagsResponse::validate()
{
}

web::json::value GetResourceTagsResponse::toJson() const
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
bool GetResourceTagsResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("sys_tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sys_tags"));
        if(!fieldValue.is_null())
        {
            std::vector<ResourceTag> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSysTags(refVal);
        }
    }
    return ok;
}


std::vector<ResourceTag>& GetResourceTagsResponse::getTags()
{
    return tags_;
}

void GetResourceTagsResponse::setTags(const std::vector<ResourceTag>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool GetResourceTagsResponse::tagsIsSet() const
{
    return tagsIsSet_;
}

void GetResourceTagsResponse::unsettags()
{
    tagsIsSet_ = false;
}

std::vector<ResourceTag>& GetResourceTagsResponse::getSysTags()
{
    return sysTags_;
}

void GetResourceTagsResponse::setSysTags(const std::vector<ResourceTag>& value)
{
    sysTags_ = value;
    sysTagsIsSet_ = true;
}

bool GetResourceTagsResponse::sysTagsIsSet() const
{
    return sysTagsIsSet_;
}

void GetResourceTagsResponse::unsetsysTags()
{
    sysTagsIsSet_ = false;
}

}
}
}
}
}


