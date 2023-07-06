

#include "huaweicloud/ims/v2/model/ListTagsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




ListTagsResponse::ListTagsResponse()
{
    tagsIsSet_ = false;
}

ListTagsResponse::~ListTagsResponse() = default;

void ListTagsResponse::validate()
{
}

web::json::value ListTagsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}

bool ListTagsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    return ok;
}

std::vector<std::string>& ListTagsResponse::getTags()
{
    return tags_;
}

void ListTagsResponse::setTags(const std::vector<std::string>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ListTagsResponse::tagsIsSet() const
{
    return tagsIsSet_;
}

void ListTagsResponse::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


