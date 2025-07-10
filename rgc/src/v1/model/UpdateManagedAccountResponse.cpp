

#include "huaweicloud/rgc/v1/model/UpdateManagedAccountResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {




UpdateManagedAccountResponse::UpdateManagedAccountResponse()
{
    operationId_ = "";
    operationIdIsSet_ = false;
}

UpdateManagedAccountResponse::~UpdateManagedAccountResponse() = default;

void UpdateManagedAccountResponse::validate()
{
}

web::json::value UpdateManagedAccountResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(operationIdIsSet_) {
        val[utility::conversions::to_string_t("operation_id")] = ModelBase::toJson(operationId_);
    }

    return val;
}
bool UpdateManagedAccountResponse::fromJson(const web::json::value& val)
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


std::string UpdateManagedAccountResponse::getOperationId() const
{
    return operationId_;
}

void UpdateManagedAccountResponse::setOperationId(const std::string& value)
{
    operationId_ = value;
    operationIdIsSet_ = true;
}

bool UpdateManagedAccountResponse::operationIdIsSet() const
{
    return operationIdIsSet_;
}

void UpdateManagedAccountResponse::unsetoperationId()
{
    operationIdIsSet_ = false;
}

}
}
}
}
}


