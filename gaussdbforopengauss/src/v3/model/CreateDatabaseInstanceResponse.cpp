

#include "huaweicloud/gaussdbforopengauss/v3/model/CreateDatabaseInstanceResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




CreateDatabaseInstanceResponse::CreateDatabaseInstanceResponse()
{
    instanceIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
    orderId_ = "";
    orderIdIsSet_ = false;
}

CreateDatabaseInstanceResponse::~CreateDatabaseInstanceResponse() = default;

void CreateDatabaseInstanceResponse::validate()
{
}

web::json::value CreateDatabaseInstanceResponse::toJson() const
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
bool CreateDatabaseInstanceResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance"));
        if(!fieldValue.is_null())
        {
            CreateDatabaseInstanceResult refVal;
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


CreateDatabaseInstanceResult CreateDatabaseInstanceResponse::getInstance() const
{
    return instance_;
}

void CreateDatabaseInstanceResponse::setInstance(const CreateDatabaseInstanceResult& value)
{
    instance_ = value;
    instanceIsSet_ = true;
}

bool CreateDatabaseInstanceResponse::instanceIsSet() const
{
    return instanceIsSet_;
}

void CreateDatabaseInstanceResponse::unsetinstance()
{
    instanceIsSet_ = false;
}

std::string CreateDatabaseInstanceResponse::getJobId() const
{
    return jobId_;
}

void CreateDatabaseInstanceResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool CreateDatabaseInstanceResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void CreateDatabaseInstanceResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string CreateDatabaseInstanceResponse::getOrderId() const
{
    return orderId_;
}

void CreateDatabaseInstanceResponse::setOrderId(const std::string& value)
{
    orderId_ = value;
    orderIdIsSet_ = true;
}

bool CreateDatabaseInstanceResponse::orderIdIsSet() const
{
    return orderIdIsSet_;
}

void CreateDatabaseInstanceResponse::unsetorderId()
{
    orderIdIsSet_ = false;
}

}
}
}
}
}


