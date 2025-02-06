

#include "huaweicloud/identitycenterstore/v1/model/UpdateUserReqBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




UpdateUserReqBody::UpdateUserReqBody()
{
    operationsIsSet_ = false;
}

UpdateUserReqBody::~UpdateUserReqBody() = default;

void UpdateUserReqBody::validate()
{
}

web::json::value UpdateUserReqBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(operationsIsSet_) {
        val[utility::conversions::to_string_t("operations")] = ModelBase::toJson(operations_);
    }

    return val;
}
bool UpdateUserReqBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("operations"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operations"));
        if(!fieldValue.is_null())
        {
            std::vector<AttributeOperationDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperations(refVal);
        }
    }
    return ok;
}


std::vector<AttributeOperationDto>& UpdateUserReqBody::getOperations()
{
    return operations_;
}

void UpdateUserReqBody::setOperations(const std::vector<AttributeOperationDto>& value)
{
    operations_ = value;
    operationsIsSet_ = true;
}

bool UpdateUserReqBody::operationsIsSet() const
{
    return operationsIsSet_;
}

void UpdateUserReqBody::unsetoperations()
{
    operationsIsSet_ = false;
}

}
}
}
}
}


