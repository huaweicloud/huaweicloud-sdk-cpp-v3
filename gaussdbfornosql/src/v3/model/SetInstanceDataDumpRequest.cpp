

#include "huaweicloud/gaussdbfornosql/v3/model/SetInstanceDataDumpRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




SetInstanceDataDumpRequest::SetInstanceDataDumpRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

SetInstanceDataDumpRequest::~SetInstanceDataDumpRequest() = default;

void SetInstanceDataDumpRequest::validate()
{
}

web::json::value SetInstanceDataDumpRequest::toJson() const
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
bool SetInstanceDataDumpRequest::fromJson(const web::json::value& val)
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
            SetInstanceDataDumpRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string SetInstanceDataDumpRequest::getInstanceId() const
{
    return instanceId_;
}

void SetInstanceDataDumpRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool SetInstanceDataDumpRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void SetInstanceDataDumpRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

SetInstanceDataDumpRequestBody SetInstanceDataDumpRequest::getBody() const
{
    return body_;
}

void SetInstanceDataDumpRequest::setBody(const SetInstanceDataDumpRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SetInstanceDataDumpRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SetInstanceDataDumpRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


