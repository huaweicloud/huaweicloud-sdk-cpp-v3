

#include "huaweicloud/ram/v1/model/SearchResourceShareCountByTagsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ram {
namespace V1 {
namespace Model {




SearchResourceShareCountByTagsResponse::SearchResourceShareCountByTagsResponse()
{
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

SearchResourceShareCountByTagsResponse::~SearchResourceShareCountByTagsResponse() = default;

void SearchResourceShareCountByTagsResponse::validate()
{
}

web::json::value SearchResourceShareCountByTagsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }

    return val;
}
bool SearchResourceShareCountByTagsResponse::fromJson(const web::json::value& val)
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
    return ok;
}


int32_t SearchResourceShareCountByTagsResponse::getTotalCount() const
{
    return totalCount_;
}

void SearchResourceShareCountByTagsResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool SearchResourceShareCountByTagsResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void SearchResourceShareCountByTagsResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


