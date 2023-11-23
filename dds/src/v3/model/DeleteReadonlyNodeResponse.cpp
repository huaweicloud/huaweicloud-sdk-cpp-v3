

#include "huaweicloud/dds/v3/model/DeleteReadonlyNodeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




DeleteReadonlyNodeResponse::DeleteReadonlyNodeResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    orderId_ = "";
    orderIdIsSet_ = false;
}

DeleteReadonlyNodeResponse::~DeleteReadonlyNodeResponse() = default;

void DeleteReadonlyNodeResponse::validate()
{
}

web::json::value DeleteReadonlyNodeResponse::toJson() const
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
bool DeleteReadonlyNodeResponse::fromJson(const web::json::value& val)
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


std::string DeleteReadonlyNodeResponse::getJobId() const
{
    return jobId_;
}

void DeleteReadonlyNodeResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool DeleteReadonlyNodeResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void DeleteReadonlyNodeResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string DeleteReadonlyNodeResponse::getOrderId() const
{
    return orderId_;
}

void DeleteReadonlyNodeResponse::setOrderId(const std::string& value)
{
    orderId_ = value;
    orderIdIsSet_ = true;
}

bool DeleteReadonlyNodeResponse::orderIdIsSet() const
{
    return orderIdIsSet_;
}

void DeleteReadonlyNodeResponse::unsetorderId()
{
    orderIdIsSet_ = false;
}

}
}
}
}
}


