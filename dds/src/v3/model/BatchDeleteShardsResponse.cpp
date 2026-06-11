

#include "huaweicloud/dds/v3/model/BatchDeleteShardsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




BatchDeleteShardsResponse::BatchDeleteShardsResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    orderId_ = "";
    orderIdIsSet_ = false;
}

BatchDeleteShardsResponse::~BatchDeleteShardsResponse() = default;

void BatchDeleteShardsResponse::validate()
{
}

web::json::value BatchDeleteShardsResponse::toJson() const
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
bool BatchDeleteShardsResponse::fromJson(const web::json::value& val)
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


std::string BatchDeleteShardsResponse::getJobId() const
{
    return jobId_;
}

void BatchDeleteShardsResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool BatchDeleteShardsResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void BatchDeleteShardsResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string BatchDeleteShardsResponse::getOrderId() const
{
    return orderId_;
}

void BatchDeleteShardsResponse::setOrderId(const std::string& value)
{
    orderId_ = value;
    orderIdIsSet_ = true;
}

bool BatchDeleteShardsResponse::orderIdIsSet() const
{
    return orderIdIsSet_;
}

void BatchDeleteShardsResponse::unsetorderId()
{
    orderIdIsSet_ = false;
}

}
}
}
}
}


