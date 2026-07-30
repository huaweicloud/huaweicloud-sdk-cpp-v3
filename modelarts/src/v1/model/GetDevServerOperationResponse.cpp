

#include "huaweicloud/modelarts/v1/model/GetDevServerOperationResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




GetDevServerOperationResponse::GetDevServerOperationResponse()
{
    operationId_ = "";
    operationIdIsSet_ = false;
    operationStatus_ = "";
    operationStatusIsSet_ = false;
    operationType_ = "";
    operationTypeIsSet_ = false;
    operationErrorIsSet_ = false;
}

GetDevServerOperationResponse::~GetDevServerOperationResponse() = default;

void GetDevServerOperationResponse::validate()
{
}

web::json::value GetDevServerOperationResponse::toJson() const
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
bool GetDevServerOperationResponse::fromJson(const web::json::value& val)
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


std::string GetDevServerOperationResponse::getOperationId() const
{
    return operationId_;
}

void GetDevServerOperationResponse::setOperationId(const std::string& value)
{
    operationId_ = value;
    operationIdIsSet_ = true;
}

bool GetDevServerOperationResponse::operationIdIsSet() const
{
    return operationIdIsSet_;
}

void GetDevServerOperationResponse::unsetoperationId()
{
    operationIdIsSet_ = false;
}

std::string GetDevServerOperationResponse::getOperationStatus() const
{
    return operationStatus_;
}

void GetDevServerOperationResponse::setOperationStatus(const std::string& value)
{
    operationStatus_ = value;
    operationStatusIsSet_ = true;
}

bool GetDevServerOperationResponse::operationStatusIsSet() const
{
    return operationStatusIsSet_;
}

void GetDevServerOperationResponse::unsetoperationStatus()
{
    operationStatusIsSet_ = false;
}

std::string GetDevServerOperationResponse::getOperationType() const
{
    return operationType_;
}

void GetDevServerOperationResponse::setOperationType(const std::string& value)
{
    operationType_ = value;
    operationTypeIsSet_ = true;
}

bool GetDevServerOperationResponse::operationTypeIsSet() const
{
    return operationTypeIsSet_;
}

void GetDevServerOperationResponse::unsetoperationType()
{
    operationTypeIsSet_ = false;
}

ServerOperationError GetDevServerOperationResponse::getOperationError() const
{
    return operationError_;
}

void GetDevServerOperationResponse::setOperationError(const ServerOperationError& value)
{
    operationError_ = value;
    operationErrorIsSet_ = true;
}

bool GetDevServerOperationResponse::operationErrorIsSet() const
{
    return operationErrorIsSet_;
}

void GetDevServerOperationResponse::unsetoperationError()
{
    operationErrorIsSet_ = false;
}

}
}
}
}
}


