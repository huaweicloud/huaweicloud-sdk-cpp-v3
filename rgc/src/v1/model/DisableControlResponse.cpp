

#include "huaweicloud/rgc/v1/model/DisableControlResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {




DisableControlResponse::DisableControlResponse()
{
    controlOperateRequestId_ = "";
    controlOperateRequestIdIsSet_ = false;
}

DisableControlResponse::~DisableControlResponse() = default;

void DisableControlResponse::validate()
{
}

web::json::value DisableControlResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(controlOperateRequestIdIsSet_) {
        val[utility::conversions::to_string_t("control_operate_request_id")] = ModelBase::toJson(controlOperateRequestId_);
    }

    return val;
}
bool DisableControlResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("control_operate_request_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("control_operate_request_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setControlOperateRequestId(refVal);
        }
    }
    return ok;
}


std::string DisableControlResponse::getControlOperateRequestId() const
{
    return controlOperateRequestId_;
}

void DisableControlResponse::setControlOperateRequestId(const std::string& value)
{
    controlOperateRequestId_ = value;
    controlOperateRequestIdIsSet_ = true;
}

bool DisableControlResponse::controlOperateRequestIdIsSet() const
{
    return controlOperateRequestIdIsSet_;
}

void DisableControlResponse::unsetcontrolOperateRequestId()
{
    controlOperateRequestIdIsSet_ = false;
}

}
}
}
}
}


