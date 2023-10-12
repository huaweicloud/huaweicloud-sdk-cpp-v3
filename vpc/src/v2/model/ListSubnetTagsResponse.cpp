

#include "huaweicloud/vpc/v2/model/ListSubnetTagsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




ListSubnetTagsResponse::ListSubnetTagsResponse()
{
    tagsIsSet_ = false;
}

ListSubnetTagsResponse::~ListSubnetTagsResponse() = default;

void ListSubnetTagsResponse::validate()
{
}

web::json::value ListSubnetTagsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}
bool ListSubnetTagsResponse::fromJson(const web::json::value& val)
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


std::vector<ListTag>& ListSubnetTagsResponse::getTags()
{
    return tags_;
}

void ListSubnetTagsResponse::setTags(const std::vector<ListTag>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ListSubnetTagsResponse::tagsIsSet() const
{
    return tagsIsSet_;
}

void ListSubnetTagsResponse::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


