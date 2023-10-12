

#include "huaweicloud/gaussdb/v3/model/ListInstanceTagsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ListInstanceTagsResponse::ListInstanceTagsResponse()
{
    totalCount_ = 0;
    totalCountIsSet_ = false;
    tagsIsSet_ = false;
}

ListInstanceTagsResponse::~ListInstanceTagsResponse() = default;

void ListInstanceTagsResponse::validate()
{
}

web::json::value ListInstanceTagsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}
bool ListInstanceTagsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<ResourceTagItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    return ok;
}


int32_t ListInstanceTagsResponse::getTotalCount() const
{
    return totalCount_;
}

void ListInstanceTagsResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListInstanceTagsResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListInstanceTagsResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

std::vector<ResourceTagItem>& ListInstanceTagsResponse::getTags()
{
    return tags_;
}

void ListInstanceTagsResponse::setTags(const std::vector<ResourceTagItem>& value)
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


