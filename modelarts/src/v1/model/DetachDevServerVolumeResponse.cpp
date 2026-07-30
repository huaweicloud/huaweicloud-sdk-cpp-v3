

#include "huaweicloud/modelarts/v1/model/DetachDevServerVolumeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




DetachDevServerVolumeResponse::DetachDevServerVolumeResponse()
{
    operationId_ = "";
    operationIdIsSet_ = false;
    operationStatus_ = "";
    operationStatusIsSet_ = false;
    operationType_ = "";
    operationTypeIsSet_ = false;
    operationErrorIsSet_ = false;
}

DetachDevServerVolumeResponse::~DetachDevServerVolumeResponse() = default;

void DetachDevServerVolumeResponse::validate()
{
}

web::json::value DetachDevServerVolumeResponse::toJson() const
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
    if(operationErrorIsSet_) {
        val[utility::conversions::to_string_t("operation_error")] = ModelBase::toJson(operationError_);
    }

    return val;
}
bool DetachDevServerVolumeResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("operation_error"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operation_error"));
        if(!fieldValue.is_null())
        {
            ServerOperationError refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperationError(refVal);
        }
    }
    return ok;
}


std::string DetachDevServerVolumeResponse::getOperationId() const
{
    return operationId_;
}

void DetachDevServerVolumeResponse::setOperationId(const std::string& value)
{
    operationId_ = value;
    operationIdIsSet_ = true;
}

bool DetachDevServerVolumeResponse::operationIdIsSet() const
{
    return operationIdIsSet_;
}

void DetachDevServerVolumeResponse::unsetoperationId()
{
    operationIdIsSet_ = false;
}

std::string DetachDevServerVolumeResponse::getOperationStatus() const
{
    return operationStatus_;
}

void DetachDevServerVolumeResponse::setOperationStatus(const std::string& value)
{
    operationStatus_ = value;
    operationStatusIsSet_ = true;
}

bool DetachDevServerVolumeResponse::operationStatusIsSet() const
{
    return operationStatusIsSet_;
}

void DetachDevServerVolumeResponse::unsetoperationStatus()
{
    operationStatusIsSet_ = false;
}

std::string DetachDevServerVolumeResponse::getOperationType() const
{
    return operationType_;
}

void DetachDevServerVolumeResponse::setOperationType(const std::string& value)
{
    operationType_ = value;
    operationTypeIsSet_ = true;
}

bool DetachDevServerVolumeResponse::operationTypeIsSet() const
{
    return operationTypeIsSet_;
}

void DetachDevServerVolumeResponse::unsetoperationType()
{
    operationTypeIsSet_ = false;
}

ServerOperationError DetachDevServerVolumeResponse::getOperationError() const
{
    return operationError_;
}

void DetachDevServerVolumeResponse::setOperationError(const ServerOperationError& value)
{
    operationError_ = value;
    operationErrorIsSet_ = true;
}

bool DetachDevServerVolumeResponse::operationErrorIsSet() const
{
    return operationErrorIsSet_;
}

void DetachDevServerVolumeResponse::unsetoperationError()
{
    operationErrorIsSet_ = false;
}

}
}
}
}
}


