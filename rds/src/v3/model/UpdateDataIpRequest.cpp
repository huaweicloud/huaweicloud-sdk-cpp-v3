

#include "huaweicloud/rds/v3/model/UpdateDataIpRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




UpdateDataIpRequest::UpdateDataIpRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateDataIpRequest::~UpdateDataIpRequest() = default;

void UpdateDataIpRequest::validate()
{
}

web::json::value UpdateDataIpRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateDataIpRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
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
            DataIpRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateDataIpRequest::getXLanguage() const
{
    return xLanguage_;
}

void UpdateDataIpRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool UpdateDataIpRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void UpdateDataIpRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string UpdateDataIpRequest::getInstanceId() const
{
    return instanceId_;
}

void UpdateDataIpRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdateDataIpRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdateDataIpRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

DataIpRequest UpdateDataIpRequest::getBody() const
{
    return body_;
}

void UpdateDataIpRequest::setBody(const DataIpRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateDataIpRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateDataIpRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


