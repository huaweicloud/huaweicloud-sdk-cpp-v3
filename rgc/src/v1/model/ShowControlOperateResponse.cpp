

#include "huaweicloud/rgc/v1/model/ShowControlOperateResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {




ShowControlOperateResponse::ShowControlOperateResponse()
{
    controlOperationIsSet_ = false;
}

ShowControlOperateResponse::~ShowControlOperateResponse() = default;

void ShowControlOperateResponse::validate()
{
}

web::json::value ShowControlOperateResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(controlOperationIsSet_) {
        val[utility::conversions::to_string_t("control_operation")] = ModelBase::toJson(controlOperation_);
    }

    return val;
}
bool ShowControlOperateResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("control_operation"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("control_operation"));
        if(!fieldValue.is_null())
        {
            ControlOperation refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setControlOperation(refVal);
        }
    }
    return ok;
}


ControlOperation ShowControlOperateResponse::getControlOperation() const
{
    return controlOperation_;
}

void ShowControlOperateResponse::setControlOperation(const ControlOperation& value)
{
    controlOperation_ = value;
    controlOperationIsSet_ = true;
}

bool ShowControlOperateResponse::controlOperationIsSet() const
{
    return controlOperationIsSet_;
}

void ShowControlOperateResponse::unsetcontrolOperation()
{
    controlOperationIsSet_ = false;
}

}
}
}
}
}


