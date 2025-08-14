

#include "huaweicloud/iotda/v5/model/ResetBridgeSecretRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ResetBridgeSecretRequest::ResetBridgeSecretRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bridgeId_ = "";
    bridgeIdIsSet_ = false;
    bodyIsSet_ = false;
}

ResetBridgeSecretRequest::~ResetBridgeSecretRequest() = default;

void ResetBridgeSecretRequest::validate()
{
}

web::json::value ResetBridgeSecretRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("Instance-Id")] = ModelBase::toJson(instanceId_);
    }
    if(bridgeIdIsSet_) {
        val[utility::conversions::to_string_t("bridge_id")] = ModelBase::toJson(bridgeId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ResetBridgeSecretRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("Instance-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Instance-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bridge_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bridge_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBridgeId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ResetBridgeSecret refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ResetBridgeSecretRequest::getInstanceId() const
{
    return instanceId_;
}

void ResetBridgeSecretRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ResetBridgeSecretRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ResetBridgeSecretRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ResetBridgeSecretRequest::getBridgeId() const
{
    return bridgeId_;
}

void ResetBridgeSecretRequest::setBridgeId(const std::string& value)
{
    bridgeId_ = value;
    bridgeIdIsSet_ = true;
}

bool ResetBridgeSecretRequest::bridgeIdIsSet() const
{
    return bridgeIdIsSet_;
}

void ResetBridgeSecretRequest::unsetbridgeId()
{
    bridgeIdIsSet_ = false;
}

ResetBridgeSecret ResetBridgeSecretRequest::getBody() const
{
    return body_;
}

void ResetBridgeSecretRequest::setBody(const ResetBridgeSecret& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ResetBridgeSecretRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ResetBridgeSecretRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


