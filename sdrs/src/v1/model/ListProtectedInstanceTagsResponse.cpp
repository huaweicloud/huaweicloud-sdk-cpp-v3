

#include "huaweicloud/sdrs/v1/model/ListProtectedInstanceTagsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




ListProtectedInstanceTagsResponse::ListProtectedInstanceTagsResponse()
{
    tagsIsSet_ = false;
}

ListProtectedInstanceTagsResponse::~ListProtectedInstanceTagsResponse() = default;

void ListProtectedInstanceTagsResponse::validate()
{
}

web::json::value ListProtectedInstanceTagsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}

bool ListProtectedInstanceTagsResponse::fromJson(const web::json::value& val)
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

std::vector<ResourceTag>& ListProtectedInstanceTagsResponse::getTags()
{
    return tags_;
}

void ListProtectedInstanceTagsResponse::setTags(const std::vector<ResourceTag>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ListProtectedInstanceTagsResponse::tagsIsSet() const
{
    return tagsIsSet_;
}

void ListProtectedInstanceTagsResponse::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


