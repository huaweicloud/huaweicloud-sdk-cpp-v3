

#include "huaweicloud/gaussdbforopengauss/v3/model/CreateDbInstanceResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




CreateDbInstanceResponse::CreateDbInstanceResponse()
{
    instanceIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
    orderId_ = "";
    orderIdIsSet_ = false;
}

CreateDbInstanceResponse::~CreateDbInstanceResponse() = default;

void CreateDbInstanceResponse::validate()
{
}

web::json::value CreateDbInstanceResponse::toJson() const
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

bool CreateDbInstanceResponse::fromJson(const web::json::value& val)
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

OpenGaussInstanceResult CreateDbInstanceResponse::getInstance() const
{
    return instance_;
}

void CreateDbInstanceResponse::setInstance(const OpenGaussInstanceResult& value)
{
    instance_ = value;
    instanceIsSet_ = true;
}

bool CreateDbInstanceResponse::instanceIsSet() const
{
    return instanceIsSet_;
}

void CreateDbInstanceResponse::unsetinstance()
{
    instanceIsSet_ = false;
}

std::string CreateDbInstanceResponse::getJobId() const
{
    return jobId_;
}

void CreateDbInstanceResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool CreateDbInstanceResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void CreateDbInstanceResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string CreateDbInstanceResponse::getOrderId() const
{
    return orderId_;
}

void CreateDbInstanceResponse::setOrderId(const std::string& value)
{
    orderId_ = value;
    orderIdIsSet_ = true;
}

bool CreateDbInstanceResponse::orderIdIsSet() const
{
    return orderIdIsSet_;
}

void CreateDbInstanceResponse::unsetorderId()
{
    orderIdIsSet_ = false;
}

}
}
}
}
}


