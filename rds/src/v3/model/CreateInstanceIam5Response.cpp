

#include "huaweicloud/rds/v3/model/CreateInstanceIam5Response.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




CreateInstanceIam5Response::CreateInstanceIam5Response()
{
    instanceIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
    orderId_ = "";
    orderIdIsSet_ = false;
}

CreateInstanceIam5Response::~CreateInstanceIam5Response() = default;

void CreateInstanceIam5Response::validate()
{
}

web::json::value CreateInstanceIam5Response::toJson() const
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
bool CreateInstanceIam5Response::fromJson(const web::json::value& val)
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


CreateInstanceRespItem CreateInstanceIam5Response::getInstance() const
{
    return instance_;
}

void CreateInstanceIam5Response::setInstance(const CreateInstanceRespItem& value)
{
    instance_ = value;
    instanceIsSet_ = true;
}

bool CreateInstanceIam5Response::instanceIsSet() const
{
    return instanceIsSet_;
}

void CreateInstanceIam5Response::unsetinstance()
{
    instanceIsSet_ = false;
}

std::string CreateInstanceIam5Response::getJobId() const
{
    return jobId_;
}

void CreateInstanceIam5Response::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool CreateInstanceIam5Response::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void CreateInstanceIam5Response::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string CreateInstanceIam5Response::getOrderId() const
{
    return orderId_;
}

void CreateInstanceIam5Response::setOrderId(const std::string& value)
{
    orderId_ = value;
    orderIdIsSet_ = true;
}

bool CreateInstanceIam5Response::orderIdIsSet() const
{
    return orderIdIsSet_;
}

void CreateInstanceIam5Response::unsetorderId()
{
    orderIdIsSet_ = false;
}

}
}
}
}
}


