

#include "huaweicloud/modelarts/v1/model/GetHyperinstanceOperationRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




GetHyperinstanceOperationRequest::GetHyperinstanceOperationRequest()
{
    id_ = "";
    idIsSet_ = false;
    operationId_ = "";
    operationIdIsSet_ = false;
}

GetHyperinstanceOperationRequest::~GetHyperinstanceOperationRequest() = default;

void GetHyperinstanceOperationRequest::validate()
{
}

web::json::value GetHyperinstanceOperationRequest::toJson() const
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
bool GetHyperinstanceOperationRequest::fromJson(const web::json::value& val)
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


std::string GetHyperinstanceOperationRequest::getId() const
{
    return id_;
}

void GetHyperinstanceOperationRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool GetHyperinstanceOperationRequest::idIsSet() const
{
    return idIsSet_;
}

void GetHyperinstanceOperationRequest::unsetid()
{
    idIsSet_ = false;
}

std::string GetHyperinstanceOperationRequest::getOperationId() const
{
    return operationId_;
}

void GetHyperinstanceOperationRequest::setOperationId(const std::string& value)
{
    operationId_ = value;
    operationIdIsSet_ = true;
}

bool GetHyperinstanceOperationRequest::operationIdIsSet() const
{
    return operationIdIsSet_;
}

void GetHyperinstanceOperationRequest::unsetoperationId()
{
    operationIdIsSet_ = false;
}

}
}
}
}
}


