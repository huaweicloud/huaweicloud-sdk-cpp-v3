

#include "huaweicloud/metastudio/v1/model/SetTenantNoticeConfigurationReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




SetTenantNoticeConfigurationReq::SetTenantNoticeConfigurationReq()
{
    type_ = "";
    typeIsSet_ = false;
    sendMsg_ = false;
    sendMsgIsSet_ = false;
    properties_ = "";
    propertiesIsSet_ = false;
}

SetTenantNoticeConfigurationReq::~SetTenantNoticeConfigurationReq() = default;

void SetTenantNoticeConfigurationReq::validate()
{
}

web::json::value SetTenantNoticeConfigurationReq::toJson() const
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

    return val;
}
bool SetTenantNoticeConfigurationReq::fromJson(const web::json::value& val)
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
    return ok;
}


std::string SetTenantNoticeConfigurationReq::getType() const
{
    return type_;
}

void SetTenantNoticeConfigurationReq::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool SetTenantNoticeConfigurationReq::typeIsSet() const
{
    return typeIsSet_;
}

void SetTenantNoticeConfigurationReq::unsettype()
{
    typeIsSet_ = false;
}

bool SetTenantNoticeConfigurationReq::isSendMsg() const
{
    return sendMsg_;
}

void SetTenantNoticeConfigurationReq::setSendMsg(bool value)
{
    sendMsg_ = value;
    sendMsgIsSet_ = true;
}

bool SetTenantNoticeConfigurationReq::sendMsgIsSet() const
{
    return sendMsgIsSet_;
}

void SetTenantNoticeConfigurationReq::unsetsendMsg()
{
    sendMsgIsSet_ = false;
}

std::string SetTenantNoticeConfigurationReq::getProperties() const
{
    return properties_;
}

void SetTenantNoticeConfigurationReq::setProperties(const std::string& value)
{
    properties_ = value;
    propertiesIsSet_ = true;
}

bool SetTenantNoticeConfigurationReq::propertiesIsSet() const
{
    return propertiesIsSet_;
}

void SetTenantNoticeConfigurationReq::unsetproperties()
{
    propertiesIsSet_ = false;
}

}
}
}
}
}


