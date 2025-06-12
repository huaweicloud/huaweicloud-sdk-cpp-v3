

#include "huaweicloud/metastudio/v1/model/AuditResult_system_audit_result_errors.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




AuditResult_system_audit_result_errors::AuditResult_system_audit_result_errors()
{
    audioName_ = "";
    audioNameIsSet_ = false;
    textName_ = "";
    textNameIsSet_ = false;
    errorCode_ = "";
    errorCodeIsSet_ = false;
    errorMessage_ = "";
    errorMessageIsSet_ = false;
}

AuditResult_system_audit_result_errors::~AuditResult_system_audit_result_errors() = default;

void AuditResult_system_audit_result_errors::validate()
{
}

web::json::value AuditResult_system_audit_result_errors::toJson() const
{
    web::json::value val = web::json::value::object();

    if(audioNameIsSet_) {
        val[utility::conversions::to_string_t("audio_name")] = ModelBase::toJson(audioName_);
    }
    if(textNameIsSet_) {
        val[utility::conversions::to_string_t("text_name")] = ModelBase::toJson(textName_);
    }
    if(errorCodeIsSet_) {
        val[utility::conversions::to_string_t("error_code")] = ModelBase::toJson(errorCode_);
    }
    if(errorMessageIsSet_) {
        val[utility::conversions::to_string_t("error_message")] = ModelBase::toJson(errorMessage_);
    }

    return val;
}
bool AuditResult_system_audit_result_errors::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("audio_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("audio_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAudioName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("text_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("text_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTextName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error_message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorMessage(refVal);
        }
    }
    return ok;
}


std::string AuditResult_system_audit_result_errors::getAudioName() const
{
    return audioName_;
}

void AuditResult_system_audit_result_errors::setAudioName(const std::string& value)
{
    audioName_ = value;
    audioNameIsSet_ = true;
}

bool AuditResult_system_audit_result_errors::audioNameIsSet() const
{
    return audioNameIsSet_;
}

void AuditResult_system_audit_result_errors::unsetaudioName()
{
    audioNameIsSet_ = false;
}

std::string AuditResult_system_audit_result_errors::getTextName() const
{
    return textName_;
}

void AuditResult_system_audit_result_errors::setTextName(const std::string& value)
{
    textName_ = value;
    textNameIsSet_ = true;
}

bool AuditResult_system_audit_result_errors::textNameIsSet() const
{
    return textNameIsSet_;
}

void AuditResult_system_audit_result_errors::unsettextName()
{
    textNameIsSet_ = false;
}

std::string AuditResult_system_audit_result_errors::getErrorCode() const
{
    return errorCode_;
}

void AuditResult_system_audit_result_errors::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool AuditResult_system_audit_result_errors::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void AuditResult_system_audit_result_errors::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string AuditResult_system_audit_result_errors::getErrorMessage() const
{
    return errorMessage_;
}

void AuditResult_system_audit_result_errors::setErrorMessage(const std::string& value)
{
    errorMessage_ = value;
    errorMessageIsSet_ = true;
}

bool AuditResult_system_audit_result_errors::errorMessageIsSet() const
{
    return errorMessageIsSet_;
}

void AuditResult_system_audit_result_errors::unseterrorMessage()
{
    errorMessageIsSet_ = false;
}

}
}
}
}
}


