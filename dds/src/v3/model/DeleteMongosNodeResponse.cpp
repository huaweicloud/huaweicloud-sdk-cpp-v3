

#include "huaweicloud/dds/v3/model/DeleteMongosNodeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




DeleteMongosNodeResponse::DeleteMongosNodeResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    orderId_ = "";
    orderIdIsSet_ = false;
}

DeleteMongosNodeResponse::~DeleteMongosNodeResponse() = default;

void DeleteMongosNodeResponse::validate()
{
}

web::json::value DeleteMongosNodeResponse::toJson() const
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
bool DeleteMongosNodeResponse::fromJson(const web::json::value& val)
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


std::string DeleteMongosNodeResponse::getJobId() const
{
    return jobId_;
}

void DeleteMongosNodeResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool DeleteMongosNodeResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void DeleteMongosNodeResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string DeleteMongosNodeResponse::getOrderId() const
{
    return orderId_;
}

void DeleteMongosNodeResponse::setOrderId(const std::string& value)
{
    orderId_ = value;
    orderIdIsSet_ = true;
}

bool DeleteMongosNodeResponse::orderIdIsSet() const
{
    return orderIdIsSet_;
}

void DeleteMongosNodeResponse::unsetorderId()
{
    orderIdIsSet_ = false;
}

}
}
}
}
}


