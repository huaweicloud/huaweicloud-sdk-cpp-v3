

#include "huaweicloud/gaussdb/v3/model/ListGaussMySqlDedicatedResourcesResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ListGaussMySqlDedicatedResourcesResponse::ListGaussMySqlDedicatedResourcesResponse()
{
    resourcesIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ListGaussMySqlDedicatedResourcesResponse::~ListGaussMySqlDedicatedResourcesResponse() = default;

void ListGaussMySqlDedicatedResourcesResponse::validate()
{
}

web::json::value ListGaussMySqlDedicatedResourcesResponse::toJson() const
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

bool ListGaussMySqlDedicatedResourcesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resources"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resources"));
        if(!fieldValue.is_null())
        {
            std::vector<DedicatedResource> refVal;
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

std::vector<DedicatedResource>& ListGaussMySqlDedicatedResourcesResponse::getResources()
{
    return resources_;
}

void ListGaussMySqlDedicatedResourcesResponse::setResources(const std::vector<DedicatedResource>& value)
{
    resources_ = value;
    resourcesIsSet_ = true;
}

bool ListGaussMySqlDedicatedResourcesResponse::resourcesIsSet() const
{
    return resourcesIsSet_;
}

void ListGaussMySqlDedicatedResourcesResponse::unsetresources()
{
    resourcesIsSet_ = false;
}

int32_t ListGaussMySqlDedicatedResourcesResponse::getTotalCount() const
{
    return totalCount_;
}

void ListGaussMySqlDedicatedResourcesResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListGaussMySqlDedicatedResourcesResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListGaussMySqlDedicatedResourcesResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


