

#include "huaweicloud/vpc/v2/model/ListVpcTagsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




ListVpcTagsResponse::ListVpcTagsResponse()
{
    tagsIsSet_ = false;
}

ListVpcTagsResponse::~ListVpcTagsResponse() = default;

void ListVpcTagsResponse::validate()
{
}

web::json::value ListVpcTagsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}

bool ListVpcTagsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<ListTag> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    return ok;
}

std::vector<ListTag>& ListVpcTagsResponse::getTags()
{
    return tags_;
}

void ListVpcTagsResponse::setTags(const std::vector<ListTag>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ListVpcTagsResponse::tagsIsSet() const
{
    return tagsIsSet_;
}

void ListVpcTagsResponse::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


