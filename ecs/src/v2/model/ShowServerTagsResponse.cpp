

#include "huaweicloud/ecs/v2/model/ShowServerTagsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ShowServerTagsResponse::ShowServerTagsResponse()
{
    tagsIsSet_ = false;
}

ShowServerTagsResponse::~ShowServerTagsResponse() = default;

void ShowServerTagsResponse::validate()
{
}

web::json::value ShowServerTagsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}

bool ShowServerTagsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<ServerTag> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    return ok;
}


std::vector<ServerTag>& ShowServerTagsResponse::getTags()
{
    return tags_;
}

void ShowServerTagsResponse::setTags(const std::vector<ServerTag>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ShowServerTagsResponse::tagsIsSet() const
{
    return tagsIsSet_;
}

void ShowServerTagsResponse::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


