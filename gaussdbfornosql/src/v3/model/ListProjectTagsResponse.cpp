

#include "huaweicloud/gaussdbfornosql/v3/model/ListProjectTagsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ListProjectTagsResponse::ListProjectTagsResponse()
{
    tagsIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ListProjectTagsResponse::~ListProjectTagsResponse() = default;

void ListProjectTagsResponse::validate()
{
}

web::json::value ListProjectTagsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }

    return val;
}
bool ListProjectTagsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<Tag> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    return ok;
}


std::vector<Tag>& ListProjectTagsResponse::getTags()
{
    return tags_;
}

void ListProjectTagsResponse::setTags(const std::vector<Tag>& value)
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

}
}
}
}
}


