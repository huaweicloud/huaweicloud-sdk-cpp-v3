

#include "huaweicloud/iotda/v5/model/AddHarmonySoftBusRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




AddHarmonySoftBusRequest::AddHarmonySoftBusRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

AddHarmonySoftBusRequest::~AddHarmonySoftBusRequest() = default;

void AddHarmonySoftBusRequest::validate()
{
}

web::json::value AddHarmonySoftBusRequest::toJson() const
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
bool AddHarmonySoftBusRequest::fromJson(const web::json::value& val)
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
            AddHarmonySoftBusDTO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string AddHarmonySoftBusRequest::getInstanceId() const
{
    return instanceId_;
}

void AddHarmonySoftBusRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool AddHarmonySoftBusRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void AddHarmonySoftBusRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

AddHarmonySoftBusDTO AddHarmonySoftBusRequest::getBody() const
{
    return body_;
}

void AddHarmonySoftBusRequest::setBody(const AddHarmonySoftBusDTO& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AddHarmonySoftBusRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AddHarmonySoftBusRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


