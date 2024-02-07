

#include "huaweicloud/cdn/v2/model/ShowTagsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




ShowTagsResponse::ShowTagsResponse()
{
    tagsIsSet_ = false;
}

ShowTagsResponse::~ShowTagsResponse() = default;

void ShowTagsResponse::validate()
{
}

web::json::value ShowTagsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}
bool ShowTagsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<TagMap> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    return ok;
}


std::vector<TagMap>& ShowTagsResponse::getTags()
{
    return tags_;
}

void ShowTagsResponse::setTags(const std::vector<TagMap>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ShowTagsResponse::tagsIsSet() const
{
    return tagsIsSet_;
}

void ShowTagsResponse::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


