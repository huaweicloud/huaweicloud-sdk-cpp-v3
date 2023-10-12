

#include "huaweicloud/eip/v2/model/ListPublicipTagsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




ListPublicipTagsResponse::ListPublicipTagsResponse()
{
    tagsIsSet_ = false;
}

ListPublicipTagsResponse::~ListPublicipTagsResponse() = default;

void ListPublicipTagsResponse::validate()
{
}

web::json::value ListPublicipTagsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}
bool ListPublicipTagsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<TagResp> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    return ok;
}


std::vector<TagResp>& ListPublicipTagsResponse::getTags()
{
    return tags_;
}

void ListPublicipTagsResponse::setTags(const std::vector<TagResp>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ListPublicipTagsResponse::tagsIsSet() const
{
    return tagsIsSet_;
}

void ListPublicipTagsResponse::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


