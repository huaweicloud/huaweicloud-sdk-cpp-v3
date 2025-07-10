

#include "huaweicloud/rgc/v1/model/UnEnrollAccountResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {




UnEnrollAccountResponse::UnEnrollAccountResponse()
{
    operationId_ = "";
    operationIdIsSet_ = false;
}

UnEnrollAccountResponse::~UnEnrollAccountResponse() = default;

void UnEnrollAccountResponse::validate()
{
}

web::json::value UnEnrollAccountResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(operationIdIsSet_) {
        val[utility::conversions::to_string_t("operation_id")] = ModelBase::toJson(operationId_);
    }

    return val;
}
bool UnEnrollAccountResponse::fromJson(const web::json::value& val)
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


std::string UnEnrollAccountResponse::getOperationId() const
{
    return operationId_;
}

void UnEnrollAccountResponse::setOperationId(const std::string& value)
{
    operationId_ = value;
    operationIdIsSet_ = true;
}

bool UnEnrollAccountResponse::operationIdIsSet() const
{
    return operationIdIsSet_;
}

void UnEnrollAccountResponse::unsetoperationId()
{
    operationIdIsSet_ = false;
}

}
}
}
}
}


