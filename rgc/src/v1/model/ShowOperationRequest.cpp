

#include "huaweicloud/rgc/v1/model/ShowOperationRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {




ShowOperationRequest::ShowOperationRequest()
{
    operationId_ = "";
    operationIdIsSet_ = false;
}

ShowOperationRequest::~ShowOperationRequest() = default;

void ShowOperationRequest::validate()
{
}

web::json::value ShowOperationRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(operationIdIsSet_) {
        val[utility::conversions::to_string_t("operation_id")] = ModelBase::toJson(operationId_);
    }

    return val;
}
bool ShowOperationRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ShowOperationRequest::getOperationId() const
{
    return operationId_;
}

void ShowOperationRequest::setOperationId(const std::string& value)
{
    operationId_ = value;
    operationIdIsSet_ = true;
}

bool ShowOperationRequest::operationIdIsSet() const
{
    return operationIdIsSet_;
}

void ShowOperationRequest::unsetoperationId()
{
    operationIdIsSet_ = false;
}

}
}
}
}
}


