

#include "huaweicloud/gaussdbfornosql/v3/model/ListDedicatedResourcesResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ListDedicatedResourcesResponse::ListDedicatedResourcesResponse()
{
    totalCount_ = 0;
    totalCountIsSet_ = false;
    resourcesIsSet_ = false;
}

ListDedicatedResourcesResponse::~ListDedicatedResourcesResponse() = default;

void ListDedicatedResourcesResponse::validate()
{
}

web::json::value ListDedicatedResourcesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }
    if(resourcesIsSet_) {
        val[utility::conversions::to_string_t("resources")] = ModelBase::toJson(resources_);
    }

    return val;
}

bool ListDedicatedResourcesResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("resources"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resources"));
        if(!fieldValue.is_null())
        {
            std::vector<ListDedicatedResourceResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResources(refVal);
        }
    }
    return ok;
}

int32_t ListDedicatedResourcesResponse::getTotalCount() const
{
    return totalCount_;
}

void ListDedicatedResourcesResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListDedicatedResourcesResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListDedicatedResourcesResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

std::vector<ListDedicatedResourceResult>& ListDedicatedResourcesResponse::getResources()
{
    return resources_;
}

void ListDedicatedResourcesResponse::setResources(const std::vector<ListDedicatedResourceResult>& value)
{
    resources_ = value;
    resourcesIsSet_ = true;
}

bool ListDedicatedResourcesResponse::resourcesIsSet() const
{
    return resourcesIsSet_;
}

void ListDedicatedResourcesResponse::unsetresources()
{
    resourcesIsSet_ = false;
}

}
}
}
}
}


