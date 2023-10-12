

#include "huaweicloud/evs/v2/model/ListVolumeTagsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




ListVolumeTagsResponse::ListVolumeTagsResponse()
{
    tagsIsSet_ = false;
}

ListVolumeTagsResponse::~ListVolumeTagsResponse() = default;

void ListVolumeTagsResponse::validate()
{
}

web::json::value ListVolumeTagsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}
bool ListVolumeTagsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::vector<std::string>> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    return ok;
}


std::map<std::string, std::vector<std::string>>& ListVolumeTagsResponse::getTags()
{
    return tags_;
}

void ListVolumeTagsResponse::setTags(const std::map<std::string, std::vector<std::string>>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ListVolumeTagsResponse::tagsIsSet() const
{
    return tagsIsSet_;
}

void ListVolumeTagsResponse::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


