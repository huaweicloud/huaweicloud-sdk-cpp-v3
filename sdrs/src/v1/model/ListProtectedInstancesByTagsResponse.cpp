

#include "huaweicloud/sdrs/v1/model/ListProtectedInstancesByTagsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




ListProtectedInstancesByTagsResponse::ListProtectedInstancesByTagsResponse()
{
    resourcesIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ListProtectedInstancesByTagsResponse::~ListProtectedInstancesByTagsResponse() = default;

void ListProtectedInstancesByTagsResponse::validate()
{
}

web::json::value ListProtectedInstancesByTagsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourcesIsSet_) {
        val[utility::conversions::to_string_t("resources")] = ModelBase::toJson(resources_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }

    return val;
}

bool ListProtectedInstancesByTagsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resources"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resources"));
        if(!fieldValue.is_null())
        {
            std::vector<ResourceParams> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResources(refVal);
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

std::vector<ResourceParams>& ListProtectedInstancesByTagsResponse::getResources()
{
    return resources_;
}

void ListProtectedInstancesByTagsResponse::setResources(const std::vector<ResourceParams>& value)
{
    resources_ = value;
    resourcesIsSet_ = true;
}

bool ListProtectedInstancesByTagsResponse::resourcesIsSet() const
{
    return resourcesIsSet_;
}

void ListProtectedInstancesByTagsResponse::unsetresources()
{
    resourcesIsSet_ = false;
}

int32_t ListProtectedInstancesByTagsResponse::getTotalCount() const
{
    return totalCount_;
}

void ListProtectedInstancesByTagsResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListProtectedInstancesByTagsResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListProtectedInstancesByTagsResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


