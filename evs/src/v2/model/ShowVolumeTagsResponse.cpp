

#include "huaweicloud/evs/v2/model/ShowVolumeTagsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




ShowVolumeTagsResponse::ShowVolumeTagsResponse()
{
    tagsIsSet_ = false;
}

ShowVolumeTagsResponse::~ShowVolumeTagsResponse() = default;

void ShowVolumeTagsResponse::validate()
{
}

web::json::value ShowVolumeTagsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}
bool ShowVolumeTagsResponse::fromJson(const web::json::value& val)
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
    return ok;
}


std::vector<Tag>& ShowVolumeTagsResponse::getTags()
{
    return tags_;
}

void ShowVolumeTagsResponse::setTags(const std::vector<Tag>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ShowVolumeTagsResponse::tagsIsSet() const
{
    return tagsIsSet_;
}

void ShowVolumeTagsResponse::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


