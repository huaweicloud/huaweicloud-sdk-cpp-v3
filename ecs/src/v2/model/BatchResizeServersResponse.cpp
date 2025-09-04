

#include "huaweicloud/ecs/v2/model/BatchResizeServersResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




BatchResizeServersResponse::BatchResizeServersResponse()
{
    orderId_ = "";
    orderIdIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
}

BatchResizeServersResponse::~BatchResizeServersResponse() = default;

void BatchResizeServersResponse::validate()
{
}

web::json::value BatchResizeServersResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(orderIdIsSet_) {
        val[utility::conversions::to_string_t("order_id")] = ModelBase::toJson(orderId_);
    }
    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool BatchResizeServersResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("order_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("order_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrderId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobId(refVal);
        }
    }
    return ok;
}


std::string BatchResizeServersResponse::getOrderId() const
{
    return orderId_;
}

void BatchResizeServersResponse::setOrderId(const std::string& value)
{
    orderId_ = value;
    orderIdIsSet_ = true;
}

bool BatchResizeServersResponse::orderIdIsSet() const
{
    return orderIdIsSet_;
}

void BatchResizeServersResponse::unsetorderId()
{
    orderIdIsSet_ = false;
}

std::string BatchResizeServersResponse::getJobId() const
{
    return jobId_;
}

void BatchResizeServersResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool BatchResizeServersResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void BatchResizeServersResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


