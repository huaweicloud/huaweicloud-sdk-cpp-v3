

#include "huaweicloud/dds/v3/model/ListInstanceTagsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




ListInstanceTagsResponse::ListInstanceTagsResponse()
{
    tagsIsSet_ = false;
}

ListInstanceTagsResponse::~ListInstanceTagsResponse() = default;

void ListInstanceTagsResponse::validate()
{
}

web::json::value ListInstanceTagsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}
bool ListInstanceTagsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<QueryResourceTagItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    return ok;
}


std::vector<QueryResourceTagItem>& ListInstanceTagsResponse::getTags()
{
    return tags_;
}

void ListInstanceTagsResponse::setTags(const std::vector<QueryResourceTagItem>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ListInstanceTagsResponse::tagsIsSet() const
{
    return tagsIsSet_;
}

void ListInstanceTagsResponse::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


