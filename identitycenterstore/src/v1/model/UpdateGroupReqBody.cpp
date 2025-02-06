

#include "huaweicloud/identitycenterstore/v1/model/UpdateGroupReqBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




UpdateGroupReqBody::UpdateGroupReqBody()
{
    operationsIsSet_ = false;
}

UpdateGroupReqBody::~UpdateGroupReqBody() = default;

void UpdateGroupReqBody::validate()
{
}

web::json::value UpdateGroupReqBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(operationsIsSet_) {
        val[utility::conversions::to_string_t("operations")] = ModelBase::toJson(operations_);
    }

    return val;
}
bool UpdateGroupReqBody::fromJson(const web::json::value& val)
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


std::vector<AttributeOperationDto>& UpdateGroupReqBody::getOperations()
{
    return operations_;
}

void UpdateGroupReqBody::setOperations(const std::vector<AttributeOperationDto>& value)
{
    operations_ = value;
    operationsIsSet_ = true;
}

bool UpdateGroupReqBody::operationsIsSet() const
{
    return operationsIsSet_;
}

void UpdateGroupReqBody::unsetoperations()
{
    operationsIsSet_ = false;
}

}
}
}
}
}


