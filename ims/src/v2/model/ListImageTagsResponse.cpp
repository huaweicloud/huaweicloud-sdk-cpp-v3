

#include "huaweicloud/ims/v2/model/ListImageTagsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




ListImageTagsResponse::ListImageTagsResponse()
{
    tagsIsSet_ = false;
}

ListImageTagsResponse::~ListImageTagsResponse() = default;

void ListImageTagsResponse::validate()
{
}

web::json::value ListImageTagsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}

bool ListImageTagsResponse::fromJson(const web::json::value& val)
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

std::vector<ResourceTag>& ListImageTagsResponse::getTags()
{
    return tags_;
}

void ListImageTagsResponse::setTags(const std::vector<ResourceTag>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ListImageTagsResponse::tagsIsSet() const
{
    return tagsIsSet_;
}

void ListImageTagsResponse::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


