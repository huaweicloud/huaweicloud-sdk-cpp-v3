

#include "huaweicloud/gaussdb/v3/model/InvokeGaussMySqlInstanceSwitchOverRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




InvokeGaussMySqlInstanceSwitchOverRequest::InvokeGaussMySqlInstanceSwitchOverRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

InvokeGaussMySqlInstanceSwitchOverRequest::~InvokeGaussMySqlInstanceSwitchOverRequest() = default;

void InvokeGaussMySqlInstanceSwitchOverRequest::validate()
{
}

web::json::value InvokeGaussMySqlInstanceSwitchOverRequest::toJson() const
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

bool InvokeGaussMySqlInstanceSwitchOverRequest::fromJson(const web::json::value& val)
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
            TaurusSwitchoverRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string InvokeGaussMySqlInstanceSwitchOverRequest::getXLanguage() const
{
    return xLanguage_;
}

void InvokeGaussMySqlInstanceSwitchOverRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool InvokeGaussMySqlInstanceSwitchOverRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void InvokeGaussMySqlInstanceSwitchOverRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string InvokeGaussMySqlInstanceSwitchOverRequest::getInstanceId() const
{
    return instanceId_;
}

void InvokeGaussMySqlInstanceSwitchOverRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool InvokeGaussMySqlInstanceSwitchOverRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void InvokeGaussMySqlInstanceSwitchOverRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

TaurusSwitchoverRequest InvokeGaussMySqlInstanceSwitchOverRequest::getBody() const
{
    return body_;
}

void InvokeGaussMySqlInstanceSwitchOverRequest::setBody(const TaurusSwitchoverRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool InvokeGaussMySqlInstanceSwitchOverRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void InvokeGaussMySqlInstanceSwitchOverRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


