

#include "huaweicloud/cfw/v1/model/EipBypassDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




EipBypassDto::EipBypassDto()
{
    bypassOperation_ = 0;
    bypassOperationIsSet_ = false;
}

EipBypassDto::~EipBypassDto() = default;

void EipBypassDto::validate()
{
}

web::json::value EipBypassDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bypassOperationIsSet_) {
        val[utility::conversions::to_string_t("bypass_operation")] = ModelBase::toJson(bypassOperation_);
    }

    return val;
}
bool EipBypassDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("bypass_operation"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bypass_operation"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBypassOperation(refVal);
        }
    }
    return ok;
}


int32_t EipBypassDto::getBypassOperation() const
{
    return bypassOperation_;
}

void EipBypassDto::setBypassOperation(int32_t value)
{
    bypassOperation_ = value;
    bypassOperationIsSet_ = true;
}

bool EipBypassDto::bypassOperationIsSet() const
{
    return bypassOperationIsSet_;
}

void EipBypassDto::unsetbypassOperation()
{
    bypassOperationIsSet_ = false;
}

}
}
}
}
}


