

#include "huaweicloud/metastudio/v1/model/ShowTenantNoticeConfigurationResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowTenantNoticeConfigurationResponse::ShowTenantNoticeConfigurationResponse()
{
    type_ = "";
    typeIsSet_ = false;
    sendMsg_ = false;
    sendMsgIsSet_ = false;
    properties_ = "";
    propertiesIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ShowTenantNoticeConfigurationResponse::~ShowTenantNoticeConfigurationResponse() = default;

void ShowTenantNoticeConfigurationResponse::validate()
{
}

web::json::value ShowTenantNoticeConfigurationResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(sendMsgIsSet_) {
        val[utility::conversions::to_string_t("send_msg")] = ModelBase::toJson(sendMsg_);
    }
    if(propertiesIsSet_) {
        val[utility::conversions::to_string_t("properties")] = ModelBase::toJson(properties_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ShowTenantNoticeConfigurationResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("send_msg"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("send_msg"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSendMsg(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("properties"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("properties"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProperties(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


std::string ShowTenantNoticeConfigurationResponse::getType() const
{
    return type_;
}

void ShowTenantNoticeConfigurationResponse::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ShowTenantNoticeConfigurationResponse::typeIsSet() const
{
    return typeIsSet_;
}

void ShowTenantNoticeConfigurationResponse::unsettype()
{
    typeIsSet_ = false;
}

bool ShowTenantNoticeConfigurationResponse::isSendMsg() const
{
    return sendMsg_;
}

void ShowTenantNoticeConfigurationResponse::setSendMsg(bool value)
{
    sendMsg_ = value;
    sendMsgIsSet_ = true;
}

bool ShowTenantNoticeConfigurationResponse::sendMsgIsSet() const
{
    return sendMsgIsSet_;
}

void ShowTenantNoticeConfigurationResponse::unsetsendMsg()
{
    sendMsgIsSet_ = false;
}

std::string ShowTenantNoticeConfigurationResponse::getProperties() const
{
    return properties_;
}

void ShowTenantNoticeConfigurationResponse::setProperties(const std::string& value)
{
    properties_ = value;
    propertiesIsSet_ = true;
}

bool ShowTenantNoticeConfigurationResponse::propertiesIsSet() const
{
    return propertiesIsSet_;
}

void ShowTenantNoticeConfigurationResponse::unsetproperties()
{
    propertiesIsSet_ = false;
}

std::string ShowTenantNoticeConfigurationResponse::getXRequestId() const
{
    return xRequestId_;
}

void ShowTenantNoticeConfigurationResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ShowTenantNoticeConfigurationResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ShowTenantNoticeConfigurationResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


