

#include "huaweicloud/iotda/v5/model/AddBridgeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




AddBridgeRequest::AddBridgeRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

AddBridgeRequest::~AddBridgeRequest() = default;

void AddBridgeRequest::validate()
{
}

web::json::value AddBridgeRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("Instance-Id")] = ModelBase::toJson(instanceId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool AddBridgeRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            AddBridge refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string AddBridgeRequest::getInstanceId() const
{
    return instanceId_;
}

void AddBridgeRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool AddBridgeRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void AddBridgeRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

AddBridge AddBridgeRequest::getBody() const
{
    return body_;
}

void AddBridgeRequest::setBody(const AddBridge& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AddBridgeRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AddBridgeRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


