

#include "huaweicloud/modelarts/v1/model/AttachDevServerVolumeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




AttachDevServerVolumeResponse::AttachDevServerVolumeResponse()
{
    operationId_ = "";
    operationIdIsSet_ = false;
    operationStatus_ = "";
    operationStatusIsSet_ = false;
    operationType_ = "";
    operationTypeIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

AttachDevServerVolumeResponse::~AttachDevServerVolumeResponse() = default;

void AttachDevServerVolumeResponse::validate()
{
}

web::json::value AttachDevServerVolumeResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(operationIdIsSet_) {
        val[utility::conversions::to_string_t("operation_id")] = ModelBase::toJson(operationId_);
    }
    if(operationStatusIsSet_) {
        val[utility::conversions::to_string_t("operation_status")] = ModelBase::toJson(operationStatus_);
    }
    if(operationTypeIsSet_) {
        val[utility::conversions::to_string_t("operation_type")] = ModelBase::toJson(operationType_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool AttachDevServerVolumeResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("operation_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operation_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperationId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("operation_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operation_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperationStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("operation_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operation_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperationType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


std::string AttachDevServerVolumeResponse::getOperationId() const
{
    return operationId_;
}

void AttachDevServerVolumeResponse::setOperationId(const std::string& value)
{
    operationId_ = value;
    operationIdIsSet_ = true;
}

bool AttachDevServerVolumeResponse::operationIdIsSet() const
{
    return operationIdIsSet_;
}

void AttachDevServerVolumeResponse::unsetoperationId()
{
    operationIdIsSet_ = false;
}

std::string AttachDevServerVolumeResponse::getOperationStatus() const
{
    return operationStatus_;
}

void AttachDevServerVolumeResponse::setOperationStatus(const std::string& value)
{
    operationStatus_ = value;
    operationStatusIsSet_ = true;
}

bool AttachDevServerVolumeResponse::operationStatusIsSet() const
{
    return operationStatusIsSet_;
}

void AttachDevServerVolumeResponse::unsetoperationStatus()
{
    operationStatusIsSet_ = false;
}

std::string AttachDevServerVolumeResponse::getOperationType() const
{
    return operationType_;
}

void AttachDevServerVolumeResponse::setOperationType(const std::string& value)
{
    operationType_ = value;
    operationTypeIsSet_ = true;
}

bool AttachDevServerVolumeResponse::operationTypeIsSet() const
{
    return operationTypeIsSet_;
}

void AttachDevServerVolumeResponse::unsetoperationType()
{
    operationTypeIsSet_ = false;
}

std::string AttachDevServerVolumeResponse::getXRequestId() const
{
    return xRequestId_;
}

void AttachDevServerVolumeResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool AttachDevServerVolumeResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void AttachDevServerVolumeResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


