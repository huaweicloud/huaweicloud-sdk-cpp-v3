

#include "huaweicloud/cloudtest/v1/model/UpdateServiceResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




UpdateServiceResponse::UpdateServiceResponse()
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

UpdateServiceResponse::~UpdateServiceResponse() = default;

void UpdateServiceResponse::validate()
{
}

web::json::value UpdateServiceResponse::toJson() const
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
bool UpdateServiceResponse::fromJson(const web::json::value& val)
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


std::string UpdateServiceResponse::getServiceName() const
{
    return serviceName_;
}

void UpdateServiceResponse::setServiceName(const std::string& value)
{
    serviceName_ = value;
    serviceNameIsSet_ = true;
}

bool UpdateServiceResponse::serviceNameIsSet() const
{
    return serviceNameIsSet_;
}

void UpdateServiceResponse::unsetserviceName()
{
    serviceNameIsSet_ = false;
}

int32_t UpdateServiceResponse::getServiceId() const
{
    return serviceId_;
}

void UpdateServiceResponse::setServiceId(int32_t value)
{
    serviceId_ = value;
    serviceIdIsSet_ = true;
}

bool UpdateServiceResponse::serviceIdIsSet() const
{
    return serviceIdIsSet_;
}

void UpdateServiceResponse::unsetserviceId()
{
    serviceIdIsSet_ = false;
}

std::string UpdateServiceResponse::getErrorCode() const
{
    return errorCode_;
}

void UpdateServiceResponse::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool UpdateServiceResponse::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void UpdateServiceResponse::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string UpdateServiceResponse::getErrorMsg() const
{
    return errorMsg_;
}

void UpdateServiceResponse::setErrorMsg(const std::string& value)
{
    errorMsg_ = value;
    errorMsgIsSet_ = true;
}

bool UpdateServiceResponse::errorMsgIsSet() const
{
    return errorMsgIsSet_;
}

void UpdateServiceResponse::unseterrorMsg()
{
    errorMsgIsSet_ = false;
}

}
}
}
}
}


