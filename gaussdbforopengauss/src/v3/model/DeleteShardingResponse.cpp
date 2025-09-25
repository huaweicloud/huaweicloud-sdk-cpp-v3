

#include "huaweicloud/gaussdbforopengauss/v3/model/DeleteShardingResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




DeleteShardingResponse::DeleteShardingResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    orderId_ = "";
    orderIdIsSet_ = false;
}

DeleteShardingResponse::~DeleteShardingResponse() = default;

void DeleteShardingResponse::validate()
{
}

web::json::value DeleteShardingResponse::toJson() const
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
bool DeleteShardingResponse::fromJson(const web::json::value& val)
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


std::string DeleteShardingResponse::getJobId() const
{
    return jobId_;
}

void DeleteShardingResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool DeleteShardingResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void DeleteShardingResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string DeleteShardingResponse::getOrderId() const
{
    return orderId_;
}

void DeleteShardingResponse::setOrderId(const std::string& value)
{
    orderId_ = value;
    orderIdIsSet_ = true;
}

bool DeleteShardingResponse::orderIdIsSet() const
{
    return orderIdIsSet_;
}

void DeleteShardingResponse::unsetorderId()
{
    orderIdIsSet_ = false;
}

}
}
}
}
}


