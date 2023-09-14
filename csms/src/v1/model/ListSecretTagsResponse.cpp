

#include "huaweicloud/csms/v1/model/ListSecretTagsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {




ListSecretTagsResponse::ListSecretTagsResponse()
{
    tagsIsSet_ = false;
    sysTagsIsSet_ = false;
}

ListSecretTagsResponse::~ListSecretTagsResponse() = default;

void ListSecretTagsResponse::validate()
{
}

web::json::value ListSecretTagsResponse::toJson() const
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

bool ListSecretTagsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<TagItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sys_tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sys_tags"));
        if(!fieldValue.is_null())
        {
            std::vector<SysTag> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSysTags(refVal);
        }
    }
    return ok;
}

std::vector<TagItem>& ListSecretTagsResponse::getTags()
{
    return tags_;
}

void ListSecretTagsResponse::setTags(const std::vector<TagItem>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ListSecretTagsResponse::tagsIsSet() const
{
    return tagsIsSet_;
}

void ListSecretTagsResponse::unsettags()
{
    tagsIsSet_ = false;
}

std::vector<SysTag>& ListSecretTagsResponse::getSysTags()
{
    return sysTags_;
}

void ListSecretTagsResponse::setSysTags(const std::vector<SysTag>& value)
{
    sysTags_ = value;
    sysTagsIsSet_ = true;
}

bool ListSecretTagsResponse::sysTagsIsSet() const
{
    return sysTagsIsSet_;
}

void ListSecretTagsResponse::unsetsysTags()
{
    sysTagsIsSet_ = false;
}

}
}
}
}
}


