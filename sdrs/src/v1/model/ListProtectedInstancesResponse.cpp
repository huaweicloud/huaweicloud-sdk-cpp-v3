

#include "huaweicloud/sdrs/v1/model/ListProtectedInstancesResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




ListProtectedInstancesResponse::ListProtectedInstancesResponse()
{
    protectedInstancesIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
}

ListProtectedInstancesResponse::~ListProtectedInstancesResponse() = default;

void ListProtectedInstancesResponse::validate()
{
}

web::json::value ListProtectedInstancesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(protectedInstancesIsSet_) {
        val[utility::conversions::to_string_t("protected_instances")] = ModelBase::toJson(protectedInstances_);
    }
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }

    return val;
}

bool ListProtectedInstancesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("protected_instances"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("protected_instances"));
        if(!fieldValue.is_null())
        {
            std::vector<ShowProtectedInstanceParams> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProtectedInstances(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    return ok;
}

std::vector<ShowProtectedInstanceParams>& ListProtectedInstancesResponse::getProtectedInstances()
{
    return protectedInstances_;
}

void ListProtectedInstancesResponse::setProtectedInstances(const std::vector<ShowProtectedInstanceParams>& value)
{
    protectedInstances_ = value;
    protectedInstancesIsSet_ = true;
}

bool ListProtectedInstancesResponse::protectedInstancesIsSet() const
{
    return protectedInstancesIsSet_;
}

void ListProtectedInstancesResponse::unsetprotectedInstances()
{
    protectedInstancesIsSet_ = false;
}

int32_t ListProtectedInstancesResponse::getCount() const
{
    return count_;
}

void ListProtectedInstancesResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ListProtectedInstancesResponse::countIsSet() const
{
    return countIsSet_;
}

void ListProtectedInstancesResponse::unsetcount()
{
    countIsSet_ = false;
}

}
}
}
}
}


