

#include "huaweicloud/gaussdbforopengauss/v3/model/ResizeInstancesFlavorResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ResizeInstancesFlavorResponse::ResizeInstancesFlavorResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    orderId_ = "";
    orderIdIsSet_ = false;
}

ResizeInstancesFlavorResponse::~ResizeInstancesFlavorResponse() = default;

void ResizeInstancesFlavorResponse::validate()
{
}

web::json::value ResizeInstancesFlavorResponse::toJson() const
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
bool ResizeInstancesFlavorResponse::fromJson(const web::json::value& val)
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


std::string ResizeInstancesFlavorResponse::getJobId() const
{
    return jobId_;
}

void ResizeInstancesFlavorResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ResizeInstancesFlavorResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ResizeInstancesFlavorResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string ResizeInstancesFlavorResponse::getOrderId() const
{
    return orderId_;
}

void ResizeInstancesFlavorResponse::setOrderId(const std::string& value)
{
    orderId_ = value;
    orderIdIsSet_ = true;
}

bool ResizeInstancesFlavorResponse::orderIdIsSet() const
{
    return orderIdIsSet_;
}

void ResizeInstancesFlavorResponse::unsetorderId()
{
    orderIdIsSet_ = false;
}

}
}
}
}
}


