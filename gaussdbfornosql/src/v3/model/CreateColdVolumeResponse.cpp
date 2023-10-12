

#include "huaweicloud/gaussdbfornosql/v3/model/CreateColdVolumeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




CreateColdVolumeResponse::CreateColdVolumeResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    orderId_ = "";
    orderIdIsSet_ = false;
}

CreateColdVolumeResponse::~CreateColdVolumeResponse() = default;

void CreateColdVolumeResponse::validate()
{
}

web::json::value CreateColdVolumeResponse::toJson() const
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
bool CreateColdVolumeResponse::fromJson(const web::json::value& val)
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


std::string CreateColdVolumeResponse::getJobId() const
{
    return jobId_;
}

void CreateColdVolumeResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool CreateColdVolumeResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void CreateColdVolumeResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string CreateColdVolumeResponse::getOrderId() const
{
    return orderId_;
}

void CreateColdVolumeResponse::setOrderId(const std::string& value)
{
    orderId_ = value;
    orderIdIsSet_ = true;
}

bool CreateColdVolumeResponse::orderIdIsSet() const
{
    return orderIdIsSet_;
}

void CreateColdVolumeResponse::unsetorderId()
{
    orderIdIsSet_ = false;
}

}
}
}
}
}


