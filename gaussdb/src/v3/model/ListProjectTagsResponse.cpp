

#include "huaweicloud/gaussdb/v3/model/ListProjectTagsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ListProjectTagsResponse::ListProjectTagsResponse()
{
    totalCount_ = 0;
    totalCountIsSet_ = false;
    tagsIsSet_ = false;
}

ListProjectTagsResponse::~ListProjectTagsResponse() = default;

void ListProjectTagsResponse::validate()
{
}

web::json::value ListProjectTagsResponse::toJson() const
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
bool ListProjectTagsResponse::fromJson(const web::json::value& val)
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
            std::vector<ProjectTagItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    return ok;
}


int32_t ListProjectTagsResponse::getTotalCount() const
{
    return totalCount_;
}

void ListProjectTagsResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListProjectTagsResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListProjectTagsResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

std::vector<ProjectTagItem>& ListProjectTagsResponse::getTags()
{
    return tags_;
}

void ListProjectTagsResponse::setTags(const std::vector<ProjectTagItem>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ListProjectTagsResponse::tagsIsSet() const
{
    return tagsIsSet_;
}

void ListProjectTagsResponse::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


