

#include "huaweicloud/rds/v3/model/CreateSupabaseApplicationResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




CreateSupabaseApplicationResponse::CreateSupabaseApplicationResponse()
{
    orderId_ = "";
    orderIdIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
    applicationId_ = "";
    applicationIdIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    instanceJobId_ = "";
    instanceJobIdIsSet_ = false;
}

CreateSupabaseApplicationResponse::~CreateSupabaseApplicationResponse() = default;

void CreateSupabaseApplicationResponse::validate()
{
}

web::json::value CreateSupabaseApplicationResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(orderIdIsSet_) {
        val[utility::conversions::to_string_t("order_id")] = ModelBase::toJson(orderId_);
    }
    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(applicationIdIsSet_) {
        val[utility::conversions::to_string_t("application_id")] = ModelBase::toJson(applicationId_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(instanceJobIdIsSet_) {
        val[utility::conversions::to_string_t("instance_job_id")] = ModelBase::toJson(instanceJobId_);
    }

    return val;
}
bool CreateSupabaseApplicationResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("order_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("order_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrderId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("application_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("application_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApplicationId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceJobId(refVal);
        }
    }
    return ok;
}


std::string CreateSupabaseApplicationResponse::getOrderId() const
{
    return orderId_;
}

void CreateSupabaseApplicationResponse::setOrderId(const std::string& value)
{
    orderId_ = value;
    orderIdIsSet_ = true;
}

bool CreateSupabaseApplicationResponse::orderIdIsSet() const
{
    return orderIdIsSet_;
}

void CreateSupabaseApplicationResponse::unsetorderId()
{
    orderIdIsSet_ = false;
}

std::string CreateSupabaseApplicationResponse::getJobId() const
{
    return jobId_;
}

void CreateSupabaseApplicationResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool CreateSupabaseApplicationResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void CreateSupabaseApplicationResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string CreateSupabaseApplicationResponse::getApplicationId() const
{
    return applicationId_;
}

void CreateSupabaseApplicationResponse::setApplicationId(const std::string& value)
{
    applicationId_ = value;
    applicationIdIsSet_ = true;
}

bool CreateSupabaseApplicationResponse::applicationIdIsSet() const
{
    return applicationIdIsSet_;
}

void CreateSupabaseApplicationResponse::unsetapplicationId()
{
    applicationIdIsSet_ = false;
}

std::string CreateSupabaseApplicationResponse::getInstanceId() const
{
    return instanceId_;
}

void CreateSupabaseApplicationResponse::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool CreateSupabaseApplicationResponse::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void CreateSupabaseApplicationResponse::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string CreateSupabaseApplicationResponse::getInstanceJobId() const
{
    return instanceJobId_;
}

void CreateSupabaseApplicationResponse::setInstanceJobId(const std::string& value)
{
    instanceJobId_ = value;
    instanceJobIdIsSet_ = true;
}

bool CreateSupabaseApplicationResponse::instanceJobIdIsSet() const
{
    return instanceJobIdIsSet_;
}

void CreateSupabaseApplicationResponse::unsetinstanceJobId()
{
    instanceJobIdIsSet_ = false;
}

}
}
}
}
}


