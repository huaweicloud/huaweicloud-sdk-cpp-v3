

#include "huaweicloud/smn/v2/model/ListResourceTagsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




ListResourceTagsResponse::ListResourceTagsResponse()
{
    tagsIsSet_ = false;
}

ListResourceTagsResponse::~ListResourceTagsResponse() = default;

void ListResourceTagsResponse::validate()
{
}

web::json::value ListResourceTagsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}

bool ListResourceTagsResponse::fromJson(const web::json::value& val)
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

std::vector<ResourceTag>& ListResourceTagsResponse::getTags()
{
    return tags_;
}

void ListResourceTagsResponse::setTags(const std::vector<ResourceTag>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ListResourceTagsResponse::tagsIsSet() const
{
    return tagsIsSet_;
}

void ListResourceTagsResponse::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


