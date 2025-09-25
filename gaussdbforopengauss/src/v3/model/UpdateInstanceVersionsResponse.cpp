

#include "huaweicloud/gaussdbforopengauss/v3/model/UpdateInstanceVersionsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




UpdateInstanceVersionsResponse::UpdateInstanceVersionsResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    orderId_ = "";
    orderIdIsSet_ = false;
}

UpdateInstanceVersionsResponse::~UpdateInstanceVersionsResponse() = default;

void UpdateInstanceVersionsResponse::validate()
{
}

web::json::value UpdateInstanceVersionsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(orderIdIsSet_) {
        val[utility::conversions::to_string_t("order_id")] = ModelBase::toJson(orderId_);
    }

    return val;
}
bool UpdateInstanceVersionsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("order_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("order_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrderId(refVal);
        }
    }
    return ok;
}


std::string UpdateInstanceVersionsResponse::getJobId() const
{
    return jobId_;
}

void UpdateInstanceVersionsResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool UpdateInstanceVersionsResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void UpdateInstanceVersionsResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string UpdateInstanceVersionsResponse::getOrderId() const
{
    return orderId_;
}

void UpdateInstanceVersionsResponse::setOrderId(const std::string& value)
{
    orderId_ = value;
    orderIdIsSet_ = true;
}

bool UpdateInstanceVersionsResponse::orderIdIsSet() const
{
    return orderIdIsSet_;
}

void UpdateInstanceVersionsResponse::unsetorderId()
{
    orderIdIsSet_ = false;
}

}
}
}
}
}


