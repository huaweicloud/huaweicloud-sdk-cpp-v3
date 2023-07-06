

#include "huaweicloud/cbr/v1/model/ShowVaultTagResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




ShowVaultTagResponse::ShowVaultTagResponse()
{
    tagsIsSet_ = false;
    sysTagsIsSet_ = false;
}

ShowVaultTagResponse::~ShowVaultTagResponse() = default;

void ShowVaultTagResponse::validate()
{
}

web::json::value ShowVaultTagResponse::toJson() const
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

bool ShowVaultTagResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<Tag> refVal;
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

std::vector<Tag>& ShowVaultTagResponse::getTags()
{
    return tags_;
}

void ShowVaultTagResponse::setTags(const std::vector<Tag>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ShowVaultTagResponse::tagsIsSet() const
{
    return tagsIsSet_;
}

void ShowVaultTagResponse::unsettags()
{
    tagsIsSet_ = false;
}

std::vector<SysTag>& ShowVaultTagResponse::getSysTags()
{
    return sysTags_;
}

void ShowVaultTagResponse::setSysTags(const std::vector<SysTag>& value)
{
    sysTags_ = value;
    sysTagsIsSet_ = true;
}

bool ShowVaultTagResponse::sysTagsIsSet() const
{
    return sysTagsIsSet_;
}

void ShowVaultTagResponse::unsetsysTags()
{
    sysTagsIsSet_ = false;
}

}
}
}
}
}


