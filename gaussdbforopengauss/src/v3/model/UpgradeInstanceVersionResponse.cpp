

#include "huaweicloud/gaussdbforopengauss/v3/model/UpgradeInstanceVersionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




UpgradeInstanceVersionResponse::UpgradeInstanceVersionResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    orderId_ = "";
    orderIdIsSet_ = false;
}

UpgradeInstanceVersionResponse::~UpgradeInstanceVersionResponse() = default;

void UpgradeInstanceVersionResponse::validate()
{
}

web::json::value UpgradeInstanceVersionResponse::toJson() const
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
bool UpgradeInstanceVersionResponse::fromJson(const web::json::value& val)
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


std::string UpgradeInstanceVersionResponse::getJobId() const
{
    return jobId_;
}

void UpgradeInstanceVersionResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool UpgradeInstanceVersionResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void UpgradeInstanceVersionResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string UpgradeInstanceVersionResponse::getOrderId() const
{
    return orderId_;
}

void UpgradeInstanceVersionResponse::setOrderId(const std::string& value)
{
    orderId_ = value;
    orderIdIsSet_ = true;
}

bool UpgradeInstanceVersionResponse::orderIdIsSet() const
{
    return orderIdIsSet_;
}

void UpgradeInstanceVersionResponse::unsetorderId()
{
    orderIdIsSet_ = false;
}

}
}
}
}
}


