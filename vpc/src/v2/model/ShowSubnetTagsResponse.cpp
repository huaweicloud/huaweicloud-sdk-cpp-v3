

#include "huaweicloud/vpc/v2/model/ShowSubnetTagsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




ShowSubnetTagsResponse::ShowSubnetTagsResponse()
{
    tagsIsSet_ = false;
}

ShowSubnetTagsResponse::~ShowSubnetTagsResponse() = default;

void ShowSubnetTagsResponse::validate()
{
}

web::json::value ShowSubnetTagsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}

bool ShowSubnetTagsResponse::fromJson(const web::json::value& val)
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


std::vector<ResourceTag>& ShowSubnetTagsResponse::getTags()
{
    return tags_;
}

void ShowSubnetTagsResponse::setTags(const std::vector<ResourceTag>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ShowSubnetTagsResponse::tagsIsSet() const
{
    return tagsIsSet_;
}

void ShowSubnetTagsResponse::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


