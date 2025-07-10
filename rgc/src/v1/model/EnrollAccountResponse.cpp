

#include "huaweicloud/rgc/v1/model/EnrollAccountResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {




EnrollAccountResponse::EnrollAccountResponse()
{
    operationId_ = "";
    operationIdIsSet_ = false;
}

EnrollAccountResponse::~EnrollAccountResponse() = default;

void EnrollAccountResponse::validate()
{
}

web::json::value EnrollAccountResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(operationIdIsSet_) {
        val[utility::conversions::to_string_t("operation_id")] = ModelBase::toJson(operationId_);
    }

    return val;
}
bool EnrollAccountResponse::fromJson(const web::json::value& val)
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


std::string EnrollAccountResponse::getOperationId() const
{
    return operationId_;
}

void EnrollAccountResponse::setOperationId(const std::string& value)
{
    operationId_ = value;
    operationIdIsSet_ = true;
}

bool EnrollAccountResponse::operationIdIsSet() const
{
    return operationIdIsSet_;
}

void EnrollAccountResponse::unsetoperationId()
{
    operationIdIsSet_ = false;
}

}
}
}
}
}


