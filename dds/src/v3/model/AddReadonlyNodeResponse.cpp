

#include "huaweicloud/dds/v3/model/AddReadonlyNodeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




AddReadonlyNodeResponse::AddReadonlyNodeResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    orderId_ = "";
    orderIdIsSet_ = false;
}

AddReadonlyNodeResponse::~AddReadonlyNodeResponse() = default;

void AddReadonlyNodeResponse::validate()
{
}

web::json::value AddReadonlyNodeResponse::toJson() const
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
bool AddReadonlyNodeResponse::fromJson(const web::json::value& val)
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


std::string AddReadonlyNodeResponse::getJobId() const
{
    return jobId_;
}

void AddReadonlyNodeResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool AddReadonlyNodeResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void AddReadonlyNodeResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string AddReadonlyNodeResponse::getOrderId() const
{
    return orderId_;
}

void AddReadonlyNodeResponse::setOrderId(const std::string& value)
{
    orderId_ = value;
    orderIdIsSet_ = true;
}

bool AddReadonlyNodeResponse::orderIdIsSet() const
{
    return orderIdIsSet_;
}

void AddReadonlyNodeResponse::unsetorderId()
{
    orderIdIsSet_ = false;
}

}
}
}
}
}


