

#include "huaweicloud/iotdm/v5/model/ChangeInstanceChargeModeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotdm {
namespace V5 {
namespace Model {




ChangeInstanceChargeModeRequest::ChangeInstanceChargeModeRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

ChangeInstanceChargeModeRequest::~ChangeInstanceChargeModeRequest() = default;

void ChangeInstanceChargeModeRequest::validate()
{
}

web::json::value ChangeInstanceChargeModeRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ChangeInstanceChargeModeRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ChangeInstanceChargeMode refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ChangeInstanceChargeModeRequest::getInstanceId() const
{
    return instanceId_;
}

void ChangeInstanceChargeModeRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ChangeInstanceChargeModeRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ChangeInstanceChargeModeRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

ChangeInstanceChargeMode ChangeInstanceChargeModeRequest::getBody() const
{
    return body_;
}

void ChangeInstanceChargeModeRequest::setBody(const ChangeInstanceChargeMode& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ChangeInstanceChargeModeRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ChangeInstanceChargeModeRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


