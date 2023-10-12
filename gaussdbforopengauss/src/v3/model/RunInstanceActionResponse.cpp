

#include "huaweicloud/gaussdbforopengauss/v3/model/RunInstanceActionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




RunInstanceActionResponse::RunInstanceActionResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    orderId_ = "";
    orderIdIsSet_ = false;
}

RunInstanceActionResponse::~RunInstanceActionResponse() = default;

void RunInstanceActionResponse::validate()
{
}

web::json::value RunInstanceActionResponse::toJson() const
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
bool RunInstanceActionResponse::fromJson(const web::json::value& val)
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


std::string RunInstanceActionResponse::getJobId() const
{
    return jobId_;
}

void RunInstanceActionResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool RunInstanceActionResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void RunInstanceActionResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string RunInstanceActionResponse::getOrderId() const
{
    return orderId_;
}

void RunInstanceActionResponse::setOrderId(const std::string& value)
{
    orderId_ = value;
    orderIdIsSet_ = true;
}

bool RunInstanceActionResponse::orderIdIsSet() const
{
    return orderIdIsSet_;
}

void RunInstanceActionResponse::unsetorderId()
{
    orderIdIsSet_ = false;
}

}
}
}
}
}


