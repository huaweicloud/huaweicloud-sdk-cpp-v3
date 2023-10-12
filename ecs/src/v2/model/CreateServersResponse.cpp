

#include "huaweicloud/ecs/v2/model/CreateServersResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




CreateServersResponse::CreateServersResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    orderId_ = "";
    orderIdIsSet_ = false;
    serverIdsIsSet_ = false;
}

CreateServersResponse::~CreateServersResponse() = default;

void CreateServersResponse::validate()
{
}

web::json::value CreateServersResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(orderIdIsSet_) {
        val[utility::conversions::to_string_t("order_id")] = ModelBase::toJson(orderId_);
    }
    if(serverIdsIsSet_) {
        val[utility::conversions::to_string_t("serverIds")] = ModelBase::toJson(serverIds_);
    }

    return val;
}
bool CreateServersResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("serverIds"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("serverIds"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServerIds(refVal);
        }
    }
    return ok;
}


std::string CreateServersResponse::getJobId() const
{
    return jobId_;
}

void CreateServersResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool CreateServersResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void CreateServersResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string CreateServersResponse::getOrderId() const
{
    return orderId_;
}

void CreateServersResponse::setOrderId(const std::string& value)
{
    orderId_ = value;
    orderIdIsSet_ = true;
}

bool CreateServersResponse::orderIdIsSet() const
{
    return orderIdIsSet_;
}

void CreateServersResponse::unsetorderId()
{
    orderIdIsSet_ = false;
}

std::vector<std::string>& CreateServersResponse::getServerIds()
{
    return serverIds_;
}

void CreateServersResponse::setServerIds(const std::vector<std::string>& value)
{
    serverIds_ = value;
    serverIdsIsSet_ = true;
}

bool CreateServersResponse::serverIdsIsSet() const
{
    return serverIdsIsSet_;
}

void CreateServersResponse::unsetserverIds()
{
    serverIdsIsSet_ = false;
}

}
}
}
}
}


