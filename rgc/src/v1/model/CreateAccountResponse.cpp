

#include "huaweicloud/rgc/v1/model/CreateAccountResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {




CreateAccountResponse::CreateAccountResponse()
{
    operationId_ = "";
    operationIdIsSet_ = false;
}

CreateAccountResponse::~CreateAccountResponse() = default;

void CreateAccountResponse::validate()
{
}

web::json::value CreateAccountResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(operationIdIsSet_) {
        val[utility::conversions::to_string_t("operation_id")] = ModelBase::toJson(operationId_);
    }

    return val;
}
bool CreateAccountResponse::fromJson(const web::json::value& val)
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


std::string CreateAccountResponse::getOperationId() const
{
    return operationId_;
}

void CreateAccountResponse::setOperationId(const std::string& value)
{
    operationId_ = value;
    operationIdIsSet_ = true;
}

bool CreateAccountResponse::operationIdIsSet() const
{
    return operationIdIsSet_;
}

void CreateAccountResponse::unsetoperationId()
{
    operationIdIsSet_ = false;
}

}
}
}
}
}


