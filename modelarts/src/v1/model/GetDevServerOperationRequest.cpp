

#include "huaweicloud/modelarts/v1/model/GetDevServerOperationRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




GetDevServerOperationRequest::GetDevServerOperationRequest()
{
    id_ = "";
    idIsSet_ = false;
    operationId_ = "";
    operationIdIsSet_ = false;
}

GetDevServerOperationRequest::~GetDevServerOperationRequest() = default;

void GetDevServerOperationRequest::validate()
{
}

web::json::value GetDevServerOperationRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(operationIdIsSet_) {
        val[utility::conversions::to_string_t("operation_id")] = ModelBase::toJson(operationId_);
    }

    return val;
}
bool GetDevServerOperationRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("operation_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operation_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperationId(refVal);
        }
    }
    return ok;
}


std::string GetDevServerOperationRequest::getId() const
{
    return id_;
}

void GetDevServerOperationRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool GetDevServerOperationRequest::idIsSet() const
{
    return idIsSet_;
}

void GetDevServerOperationRequest::unsetid()
{
    idIsSet_ = false;
}

std::string GetDevServerOperationRequest::getOperationId() const
{
    return operationId_;
}

void GetDevServerOperationRequest::setOperationId(const std::string& value)
{
    operationId_ = value;
    operationIdIsSet_ = true;
}

bool GetDevServerOperationRequest::operationIdIsSet() const
{
    return operationIdIsSet_;
}

void GetDevServerOperationRequest::unsetoperationId()
{
    operationIdIsSet_ = false;
}

}
}
}
}
}


