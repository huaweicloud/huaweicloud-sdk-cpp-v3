

#include "huaweicloud/vpc/v2/model/ShowVpcTagsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




ShowVpcTagsResponse::ShowVpcTagsResponse()
{
    tagsIsSet_ = false;
}

ShowVpcTagsResponse::~ShowVpcTagsResponse() = default;

void ShowVpcTagsResponse::validate()
{
}

web::json::value ShowVpcTagsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}
bool ShowVpcTagsResponse::fromJson(const web::json::value& val)
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


std::vector<ResourceTag>& ShowVpcTagsResponse::getTags()
{
    return tags_;
}

void ShowVpcTagsResponse::setTags(const std::vector<ResourceTag>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ShowVpcTagsResponse::tagsIsSet() const
{
    return tagsIsSet_;
}

void ShowVpcTagsResponse::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


