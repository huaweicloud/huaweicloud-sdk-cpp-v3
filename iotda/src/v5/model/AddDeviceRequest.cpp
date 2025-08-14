

#include "huaweicloud/iotda/v5/model/AddDeviceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




AddDeviceRequest::AddDeviceRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

AddDeviceRequest::~AddDeviceRequest() = default;

void AddDeviceRequest::validate()
{
}

web::json::value AddDeviceRequest::toJson() const
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
bool AddDeviceRequest::fromJson(const web::json::value& val)
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
            AddDevice refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string AddDeviceRequest::getInstanceId() const
{
    return instanceId_;
}

void AddDeviceRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool AddDeviceRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void AddDeviceRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

AddDevice AddDeviceRequest::getBody() const
{
    return body_;
}

void AddDeviceRequest::setBody(const AddDevice& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AddDeviceRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AddDeviceRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


