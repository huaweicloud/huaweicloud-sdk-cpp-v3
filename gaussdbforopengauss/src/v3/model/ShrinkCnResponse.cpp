

#include "huaweicloud/gaussdbforopengauss/v3/model/ShrinkCnResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ShrinkCnResponse::ShrinkCnResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    orderId_ = "";
    orderIdIsSet_ = false;
}

ShrinkCnResponse::~ShrinkCnResponse() = default;

void ShrinkCnResponse::validate()
{
}

web::json::value ShrinkCnResponse::toJson() const
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
bool ShrinkCnResponse::fromJson(const web::json::value& val)
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


std::string ShrinkCnResponse::getJobId() const
{
    return jobId_;
}

void ShrinkCnResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ShrinkCnResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ShrinkCnResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string ShrinkCnResponse::getOrderId() const
{
    return orderId_;
}

void ShrinkCnResponse::setOrderId(const std::string& value)
{
    orderId_ = value;
    orderIdIsSet_ = true;
}

bool ShrinkCnResponse::orderIdIsSet() const
{
    return orderIdIsSet_;
}

void ShrinkCnResponse::unsetorderId()
{
    orderIdIsSet_ = false;
}

}
}
}
}
}


