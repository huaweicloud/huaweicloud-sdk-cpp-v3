

#include "huaweicloud/cloudtest/v1/model/CreateServiceResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




CreateServiceResponse::CreateServiceResponse()
{
    serviceName_ = "";
    serviceNameIsSet_ = false;
    serviceId_ = 0;
    serviceIdIsSet_ = false;
    errorCode_ = "";
    errorCodeIsSet_ = false;
    errorMsg_ = "";
    errorMsgIsSet_ = false;
}

CreateServiceResponse::~CreateServiceResponse() = default;

void CreateServiceResponse::validate()
{
}

web::json::value CreateServiceResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serviceNameIsSet_) {
        val[utility::conversions::to_string_t("service_name")] = ModelBase::toJson(serviceName_);
    }
    if(serviceIdIsSet_) {
        val[utility::conversions::to_string_t("service_id")] = ModelBase::toJson(serviceId_);
    }
    if(errorCodeIsSet_) {
        val[utility::conversions::to_string_t("error_code")] = ModelBase::toJson(errorCode_);
    }
    if(errorMsgIsSet_) {
        val[utility::conversions::to_string_t("error_msg")] = ModelBase::toJson(errorMsg_);
    }

    return val;
}
bool CreateServiceResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("service_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("service_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error_msg"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_msg"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorMsg(refVal);
        }
    }
    return ok;
}


std::string CreateServiceResponse::getServiceName() const
{
    return serviceName_;
}

void CreateServiceResponse::setServiceName(const std::string& value)
{
    serviceName_ = value;
    serviceNameIsSet_ = true;
}

bool CreateServiceResponse::serviceNameIsSet() const
{
    return serviceNameIsSet_;
}

void CreateServiceResponse::unsetserviceName()
{
    serviceNameIsSet_ = false;
}

int32_t CreateServiceResponse::getServiceId() const
{
    return serviceId_;
}

void CreateServiceResponse::setServiceId(int32_t value)
{
    serviceId_ = value;
    serviceIdIsSet_ = true;
}

bool CreateServiceResponse::serviceIdIsSet() const
{
    return serviceIdIsSet_;
}

void CreateServiceResponse::unsetserviceId()
{
    serviceIdIsSet_ = false;
}

std::string CreateServiceResponse::getErrorCode() const
{
    return errorCode_;
}

void CreateServiceResponse::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool CreateServiceResponse::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void CreateServiceResponse::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string CreateServiceResponse::getErrorMsg() const
{
    return errorMsg_;
}

void CreateServiceResponse::setErrorMsg(const std::string& value)
{
    errorMsg_ = value;
    errorMsgIsSet_ = true;
}

bool CreateServiceResponse::errorMsgIsSet() const
{
    return errorMsgIsSet_;
}

void CreateServiceResponse::unseterrorMsg()
{
    errorMsgIsSet_ = false;
}

}
}
}
}
}


