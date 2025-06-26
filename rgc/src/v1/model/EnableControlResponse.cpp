

#include "huaweicloud/rgc/v1/model/EnableControlResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {




EnableControlResponse::EnableControlResponse()
{
    controlOperateRequestId_ = "";
    controlOperateRequestIdIsSet_ = false;
}

EnableControlResponse::~EnableControlResponse() = default;

void EnableControlResponse::validate()
{
}

web::json::value EnableControlResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(controlOperateRequestIdIsSet_) {
        val[utility::conversions::to_string_t("control_operate_request_id")] = ModelBase::toJson(controlOperateRequestId_);
    }

    return val;
}
bool EnableControlResponse::fromJson(const web::json::value& val)
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


std::string EnableControlResponse::getControlOperateRequestId() const
{
    return controlOperateRequestId_;
}

void EnableControlResponse::setControlOperateRequestId(const std::string& value)
{
    controlOperateRequestId_ = value;
    controlOperateRequestIdIsSet_ = true;
}

bool EnableControlResponse::controlOperateRequestIdIsSet() const
{
    return controlOperateRequestIdIsSet_;
}

void EnableControlResponse::unsetcontrolOperateRequestId()
{
    controlOperateRequestIdIsSet_ = false;
}

}
}
}
}
}


