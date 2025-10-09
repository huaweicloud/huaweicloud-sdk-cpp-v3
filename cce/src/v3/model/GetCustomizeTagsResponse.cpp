

#include "huaweicloud/cce/v3/model/GetCustomizeTagsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




GetCustomizeTagsResponse::GetCustomizeTagsResponse()
{
    tagsIsSet_ = false;
}

GetCustomizeTagsResponse::~GetCustomizeTagsResponse() = default;

void GetCustomizeTagsResponse::validate()
{
}

web::json::value GetCustomizeTagsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}
bool GetCustomizeTagsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<CustomizeResourceTag> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    return ok;
}


std::vector<CustomizeResourceTag>& GetCustomizeTagsResponse::getTags()
{
    return tags_;
}

void GetCustomizeTagsResponse::setTags(const std::vector<CustomizeResourceTag>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool GetCustomizeTagsResponse::tagsIsSet() const
{
    return tagsIsSet_;
}

void GetCustomizeTagsResponse::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


