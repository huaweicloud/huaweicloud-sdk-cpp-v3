

#include "huaweicloud/gaussdbfornosql/v3/model/ShrinkInstanceNodeResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ShrinkInstanceNodeResponse::ShrinkInstanceNodeResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    orderId_ = "";
    orderIdIsSet_ = false;
}

ShrinkInstanceNodeResponse::~ShrinkInstanceNodeResponse() = default;

void ShrinkInstanceNodeResponse::validate()
{
}

web::json::value ShrinkInstanceNodeResponse::toJson() const
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

bool ShrinkInstanceNodeResponse::fromJson(const web::json::value& val)
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

std::string ShrinkInstanceNodeResponse::getJobId() const
{
    return jobId_;
}

void ShrinkInstanceNodeResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ShrinkInstanceNodeResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ShrinkInstanceNodeResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string ShrinkInstanceNodeResponse::getOrderId() const
{
    return orderId_;
}

void ShrinkInstanceNodeResponse::setOrderId(const std::string& value)
{
    orderId_ = value;
    orderIdIsSet_ = true;
}

bool ShrinkInstanceNodeResponse::orderIdIsSet() const
{
    return orderIdIsSet_;
}

void ShrinkInstanceNodeResponse::unsetorderId()
{
    orderIdIsSet_ = false;
}

}
}
}
}
}


