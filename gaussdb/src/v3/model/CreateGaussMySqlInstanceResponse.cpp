

#include "huaweicloud/gaussdb/v3/model/CreateGaussMySqlInstanceResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




CreateGaussMySqlInstanceResponse::CreateGaussMySqlInstanceResponse()
{
    instanceIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
    orderId_ = "";
    orderIdIsSet_ = false;
}

CreateGaussMySqlInstanceResponse::~CreateGaussMySqlInstanceResponse() = default;

void CreateGaussMySqlInstanceResponse::validate()
{
}

web::json::value CreateGaussMySqlInstanceResponse::toJson() const
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
bool CreateGaussMySqlInstanceResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance"));
        if(!fieldValue.is_null())
        {
            MysqlInstanceResponse refVal;
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


MysqlInstanceResponse CreateGaussMySqlInstanceResponse::getInstance() const
{
    return instance_;
}

void CreateGaussMySqlInstanceResponse::setInstance(const MysqlInstanceResponse& value)
{
    instance_ = value;
    instanceIsSet_ = true;
}

bool CreateGaussMySqlInstanceResponse::instanceIsSet() const
{
    return instanceIsSet_;
}

void CreateGaussMySqlInstanceResponse::unsetinstance()
{
    instanceIsSet_ = false;
}

std::string CreateGaussMySqlInstanceResponse::getJobId() const
{
    return jobId_;
}

void CreateGaussMySqlInstanceResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool CreateGaussMySqlInstanceResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void CreateGaussMySqlInstanceResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string CreateGaussMySqlInstanceResponse::getOrderId() const
{
    return orderId_;
}

void CreateGaussMySqlInstanceResponse::setOrderId(const std::string& value)
{
    orderId_ = value;
    orderIdIsSet_ = true;
}

bool CreateGaussMySqlInstanceResponse::orderIdIsSet() const
{
    return orderIdIsSet_;
}

void CreateGaussMySqlInstanceResponse::unsetorderId()
{
    orderIdIsSet_ = false;
}

}
}
}
}
}


