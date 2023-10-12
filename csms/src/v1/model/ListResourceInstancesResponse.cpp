

#include "huaweicloud/csms/v1/model/ListResourceInstancesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {




ListResourceInstancesResponse::ListResourceInstancesResponse()
{
    resourcesIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ListResourceInstancesResponse::~ListResourceInstancesResponse() = default;

void ListResourceInstancesResponse::validate()
{
}

web::json::value ListResourceInstancesResponse::toJson() const
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
bool ListResourceInstancesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resources"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resources"));
        if(!fieldValue.is_null())
        {
            std::vector<ActionResources> refVal;
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


std::vector<ActionResources>& ListResourceInstancesResponse::getResources()
{
    return resources_;
}

void ListResourceInstancesResponse::setResources(const std::vector<ActionResources>& value)
{
    resources_ = value;
    resourcesIsSet_ = true;
}

bool ListResourceInstancesResponse::resourcesIsSet() const
{
    return resourcesIsSet_;
}

void ListResourceInstancesResponse::unsetresources()
{
    resourcesIsSet_ = false;
}

int32_t ListResourceInstancesResponse::getTotalCount() const
{
    return totalCount_;
}

void ListResourceInstancesResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListResourceInstancesResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListResourceInstancesResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


