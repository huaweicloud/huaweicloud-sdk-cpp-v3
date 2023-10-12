

#include "huaweicloud/rds/v3/model/CreateInstanceResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




CreateInstanceResponse::CreateInstanceResponse()
{
    instanceIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
    orderId_ = "";
    orderIdIsSet_ = false;
}

CreateInstanceResponse::~CreateInstanceResponse() = default;

void CreateInstanceResponse::validate()
{
}

web::json::value CreateInstanceResponse::toJson() const
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
bool CreateInstanceResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance"));
        if(!fieldValue.is_null())
        {
            CreateInstanceRespItem refVal;
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


CreateInstanceRespItem CreateInstanceResponse::getInstance() const
{
    return instance_;
}

void CreateInstanceResponse::setInstance(const CreateInstanceRespItem& value)
{
    instance_ = value;
    instanceIsSet_ = true;
}

bool CreateInstanceResponse::instanceIsSet() const
{
    return instanceIsSet_;
}

void CreateInstanceResponse::unsetinstance()
{
    instanceIsSet_ = false;
}

std::string CreateInstanceResponse::getJobId() const
{
    return jobId_;
}

void CreateInstanceResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool CreateInstanceResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void CreateInstanceResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string CreateInstanceResponse::getOrderId() const
{
    return orderId_;
}

void CreateInstanceResponse::setOrderId(const std::string& value)
{
    orderId_ = value;
    orderIdIsSet_ = true;
}

bool CreateInstanceResponse::orderIdIsSet() const
{
    return orderIdIsSet_;
}

void CreateInstanceResponse::unsetorderId()
{
    orderIdIsSet_ = false;
}

}
}
}
}
}


