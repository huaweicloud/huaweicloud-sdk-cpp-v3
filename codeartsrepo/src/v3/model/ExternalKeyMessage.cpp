

#include "huaweicloud/codeartsrepo/v3/model/ExternalKeyMessage.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {




ExternalKeyMessage::ExternalKeyMessage()
{
    externalKeyMessage_ = "";
    externalKeyMessageIsSet_ = false;
    externalService_ = "";
    externalServiceIsSet_ = false;
}

ExternalKeyMessage::~ExternalKeyMessage() = default;

void ExternalKeyMessage::validate()
{
}

web::json::value ExternalKeyMessage::toJson() const
{
    web::json::value val = web::json::value::object();

    if(externalKeyMessageIsSet_) {
        val[utility::conversions::to_string_t("external_key_message")] = ModelBase::toJson(externalKeyMessage_);
    }
    if(externalServiceIsSet_) {
        val[utility::conversions::to_string_t("external_service")] = ModelBase::toJson(externalService_);
    }

    return val;
}
bool ExternalKeyMessage::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("external_key_message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("external_key_message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExternalKeyMessage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("external_service"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("external_service"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExternalService(refVal);
        }
    }
    return ok;
}


std::string ExternalKeyMessage::getExternalKeyMessage() const
{
    return externalKeyMessage_;
}

void ExternalKeyMessage::setExternalKeyMessage(const std::string& value)
{
    externalKeyMessage_ = value;
    externalKeyMessageIsSet_ = true;
}

bool ExternalKeyMessage::externalKeyMessageIsSet() const
{
    return externalKeyMessageIsSet_;
}

void ExternalKeyMessage::unsetexternalKeyMessage()
{
    externalKeyMessageIsSet_ = false;
}

std::string ExternalKeyMessage::getExternalService() const
{
    return externalService_;
}

void ExternalKeyMessage::setExternalService(const std::string& value)
{
    externalService_ = value;
    externalServiceIsSet_ = true;
}

bool ExternalKeyMessage::externalServiceIsSet() const
{
    return externalServiceIsSet_;
}

void ExternalKeyMessage::unsetexternalService()
{
    externalServiceIsSet_ = false;
}

}
}
}
}
}


