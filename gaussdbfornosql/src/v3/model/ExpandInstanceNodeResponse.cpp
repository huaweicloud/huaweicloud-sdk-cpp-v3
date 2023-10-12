

#include "huaweicloud/gaussdbfornosql/v3/model/ExpandInstanceNodeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ExpandInstanceNodeResponse::ExpandInstanceNodeResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    orderId_ = "";
    orderIdIsSet_ = false;
}

ExpandInstanceNodeResponse::~ExpandInstanceNodeResponse() = default;

void ExpandInstanceNodeResponse::validate()
{
}

web::json::value ExpandInstanceNodeResponse::toJson() const
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
bool ExpandInstanceNodeResponse::fromJson(const web::json::value& val)
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


std::string ExpandInstanceNodeResponse::getJobId() const
{
    return jobId_;
}

void ExpandInstanceNodeResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ExpandInstanceNodeResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ExpandInstanceNodeResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string ExpandInstanceNodeResponse::getOrderId() const
{
    return orderId_;
}

void ExpandInstanceNodeResponse::setOrderId(const std::string& value)
{
    orderId_ = value;
    orderIdIsSet_ = true;
}

bool ExpandInstanceNodeResponse::orderIdIsSet() const
{
    return orderIdIsSet_;
}

void ExpandInstanceNodeResponse::unsetorderId()
{
    orderIdIsSet_ = false;
}

}
}
}
}
}


