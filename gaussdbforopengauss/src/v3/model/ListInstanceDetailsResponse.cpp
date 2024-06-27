

#include "huaweicloud/gaussdbforopengauss/v3/model/ListInstanceDetailsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListInstanceDetailsResponse::ListInstanceDetailsResponse()
{
    instancesIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ListInstanceDetailsResponse::~ListInstanceDetailsResponse() = default;

void ListInstanceDetailsResponse::validate()
{
}

web::json::value ListInstanceDetailsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instancesIsSet_) {
        val[utility::conversions::to_string_t("instances")] = ModelBase::toJson(instances_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }

    return val;
}
bool ListInstanceDetailsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instances"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instances"));
        if(!fieldValue.is_null())
        {
            std::vector<ListInstancesResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstances(refVal);
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


std::vector<ListInstancesResult>& ListInstanceDetailsResponse::getInstances()
{
    return instances_;
}

void ListInstanceDetailsResponse::setInstances(const std::vector<ListInstancesResult>& value)
{
    instances_ = value;
    instancesIsSet_ = true;
}

bool ListInstanceDetailsResponse::instancesIsSet() const
{
    return instancesIsSet_;
}

void ListInstanceDetailsResponse::unsetinstances()
{
    instancesIsSet_ = false;
}

int32_t ListInstanceDetailsResponse::getTotalCount() const
{
    return totalCount_;
}

void ListInstanceDetailsResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListInstanceDetailsResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListInstanceDetailsResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


