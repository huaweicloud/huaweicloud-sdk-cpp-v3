

#include "huaweicloud/vpc/v2/model/ShowSecurityGroupTagsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




ShowSecurityGroupTagsResponse::ShowSecurityGroupTagsResponse()
{
    tagsIsSet_ = false;
}

ShowSecurityGroupTagsResponse::~ShowSecurityGroupTagsResponse() = default;

void ShowSecurityGroupTagsResponse::validate()
{
}

web::json::value ShowSecurityGroupTagsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}
bool ShowSecurityGroupTagsResponse::fromJson(const web::json::value& val)
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
    return ok;
}


std::vector<ResourceTag>& ShowSecurityGroupTagsResponse::getTags()
{
    return tags_;
}

void ShowSecurityGroupTagsResponse::setTags(const std::vector<ResourceTag>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ShowSecurityGroupTagsResponse::tagsIsSet() const
{
    return tagsIsSet_;
}

void ShowSecurityGroupTagsResponse::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


