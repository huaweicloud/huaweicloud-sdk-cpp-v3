

#include "huaweicloud/vpc/v2/model/ListSecurityGroupTagsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




ListSecurityGroupTagsResponse::ListSecurityGroupTagsResponse()
{
    tagsIsSet_ = false;
}

ListSecurityGroupTagsResponse::~ListSecurityGroupTagsResponse() = default;

void ListSecurityGroupTagsResponse::validate()
{
}

web::json::value ListSecurityGroupTagsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}
bool ListSecurityGroupTagsResponse::fromJson(const web::json::value& val)
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


std::vector<ListTag>& ListSecurityGroupTagsResponse::getTags()
{
    return tags_;
}

void ListSecurityGroupTagsResponse::setTags(const std::vector<ListTag>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ListSecurityGroupTagsResponse::tagsIsSet() const
{
    return tagsIsSet_;
}

void ListSecurityGroupTagsResponse::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


