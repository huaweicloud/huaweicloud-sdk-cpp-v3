

#include "huaweicloud/gaussdbforopengauss/v3/model/CreateGaussDbInstanceResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




CreateGaussDbInstanceResponse::CreateGaussDbInstanceResponse()
{
    instanceIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
    orderId_ = "";
    orderIdIsSet_ = false;
}

CreateGaussDbInstanceResponse::~CreateGaussDbInstanceResponse() = default;

void CreateGaussDbInstanceResponse::validate()
{
}

web::json::value CreateGaussDbInstanceResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIsSet_) {
        val[utility::conversions::to_string_t("instance")] = ModelBase::toJson(instance_);
    }
    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(orderIdIsSet_) {
        val[utility::conversions::to_string_t("order_id")] = ModelBase::toJson(orderId_);
    }

    return val;
}
bool CreateGaussDbInstanceResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance"));
        if(!fieldValue.is_null())
        {
            OpenGaussInstanceResult refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstance(refVal);
        }
    }
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


OpenGaussInstanceResult CreateGaussDbInstanceResponse::getInstance() const
{
    return instance_;
}

void CreateGaussDbInstanceResponse::setInstance(const OpenGaussInstanceResult& value)
{
    instance_ = value;
    instanceIsSet_ = true;
}

bool CreateGaussDbInstanceResponse::instanceIsSet() const
{
    return instanceIsSet_;
}

void CreateGaussDbInstanceResponse::unsetinstance()
{
    instanceIsSet_ = false;
}

std::string CreateGaussDbInstanceResponse::getJobId() const
{
    return jobId_;
}

void CreateGaussDbInstanceResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool CreateGaussDbInstanceResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void CreateGaussDbInstanceResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string CreateGaussDbInstanceResponse::getOrderId() const
{
    return orderId_;
}

void CreateGaussDbInstanceResponse::setOrderId(const std::string& value)
{
    orderId_ = value;
    orderIdIsSet_ = true;
}

bool CreateGaussDbInstanceResponse::orderIdIsSet() const
{
    return orderIdIsSet_;
}

void CreateGaussDbInstanceResponse::unsetorderId()
{
    orderIdIsSet_ = false;
}

}
}
}
}
}


