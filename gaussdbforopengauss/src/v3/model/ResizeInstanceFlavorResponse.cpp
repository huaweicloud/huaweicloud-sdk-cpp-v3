

#include "huaweicloud/gaussdbforopengauss/v3/model/ResizeInstanceFlavorResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ResizeInstanceFlavorResponse::ResizeInstanceFlavorResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    orderId_ = "";
    orderIdIsSet_ = false;
}

ResizeInstanceFlavorResponse::~ResizeInstanceFlavorResponse() = default;

void ResizeInstanceFlavorResponse::validate()
{
}

web::json::value ResizeInstanceFlavorResponse::toJson() const
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
bool ResizeInstanceFlavorResponse::fromJson(const web::json::value& val)
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


std::string ResizeInstanceFlavorResponse::getJobId() const
{
    return jobId_;
}

void ResizeInstanceFlavorResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ResizeInstanceFlavorResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ResizeInstanceFlavorResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string ResizeInstanceFlavorResponse::getOrderId() const
{
    return orderId_;
}

void ResizeInstanceFlavorResponse::setOrderId(const std::string& value)
{
    orderId_ = value;
    orderIdIsSet_ = true;
}

bool ResizeInstanceFlavorResponse::orderIdIsSet() const
{
    return orderIdIsSet_;
}

void ResizeInstanceFlavorResponse::unsetorderId()
{
    orderIdIsSet_ = false;
}

}
}
}
}
}


