

#include "huaweicloud/eip/v2/model/ShowPublicipTagsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




ShowPublicipTagsResponse::ShowPublicipTagsResponse()
{
    tagsIsSet_ = false;
}

ShowPublicipTagsResponse::~ShowPublicipTagsResponse() = default;

void ShowPublicipTagsResponse::validate()
{
}

web::json::value ShowPublicipTagsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}

bool ShowPublicipTagsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<ResourceTagResp> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    return ok;
}


std::vector<ResourceTagResp>& ShowPublicipTagsResponse::getTags()
{
    return tags_;
}

void ShowPublicipTagsResponse::setTags(const std::vector<ResourceTagResp>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ShowPublicipTagsResponse::tagsIsSet() const
{
    return tagsIsSet_;
}

void ShowPublicipTagsResponse::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


