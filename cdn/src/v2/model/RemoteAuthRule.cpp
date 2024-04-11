

#include "huaweicloud/cdn/v2/model/RemoteAuthRule.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




RemoteAuthRule::RemoteAuthRule()
{
    authServer_ = "";
    authServerIsSet_ = false;
    requestMethod_ = "";
    requestMethodIsSet_ = false;
    fileTypeSetting_ = "";
    fileTypeSettingIsSet_ = false;
    specifiedFileType_ = "";
    specifiedFileTypeIsSet_ = false;
    reserveArgsSetting_ = "";
    reserveArgsSettingIsSet_ = false;
    reserveArgs_ = "";
    reserveArgsIsSet_ = false;
    addCustomArgsRulesIsSet_ = false;
    reserveHeadersSetting_ = "";
    reserveHeadersSettingIsSet_ = false;
    addCustomHeadersRulesIsSet_ = false;
    authSuccessStatus_ = "";
    authSuccessStatusIsSet_ = false;
    authFailedStatus_ = "";
    authFailedStatusIsSet_ = false;
    responseStatus_ = "";
    responseStatusIsSet_ = false;
    timeout_ = 0;
    timeoutIsSet_ = false;
    timeoutAction_ = "";
    timeoutActionIsSet_ = false;
    reserveHeaders_ = "";
    reserveHeadersIsSet_ = false;
}

RemoteAuthRule::~RemoteAuthRule() = default;

void RemoteAuthRule::validate()
{
}

web::json::value RemoteAuthRule::toJson() const
{
    web::json::value val = web::json::value::object();

    if(authServerIsSet_) {
        val[utility::conversions::to_string_t("auth_server")] = ModelBase::toJson(authServer_);
    }
    if(requestMethodIsSet_) {
        val[utility::conversions::to_string_t("request_method")] = ModelBase::toJson(requestMethod_);
    }
    if(fileTypeSettingIsSet_) {
        val[utility::conversions::to_string_t("file_type_setting")] = ModelBase::toJson(fileTypeSetting_);
    }
    if(specifiedFileTypeIsSet_) {
        val[utility::conversions::to_string_t("specified_file_type")] = ModelBase::toJson(specifiedFileType_);
    }
    if(reserveArgsSettingIsSet_) {
        val[utility::conversions::to_string_t("reserve_args_setting")] = ModelBase::toJson(reserveArgsSetting_);
    }
    if(reserveArgsIsSet_) {
        val[utility::conversions::to_string_t("reserve_args")] = ModelBase::toJson(reserveArgs_);
    }
    if(addCustomArgsRulesIsSet_) {
        val[utility::conversions::to_string_t("add_custom_args_rules")] = ModelBase::toJson(addCustomArgsRules_);
    }
    if(reserveHeadersSettingIsSet_) {
        val[utility::conversions::to_string_t("reserve_headers_setting")] = ModelBase::toJson(reserveHeadersSetting_);
    }
    if(addCustomHeadersRulesIsSet_) {
        val[utility::conversions::to_string_t("add_custom_headers_rules")] = ModelBase::toJson(addCustomHeadersRules_);
    }
    if(authSuccessStatusIsSet_) {
        val[utility::conversions::to_string_t("auth_success_status")] = ModelBase::toJson(authSuccessStatus_);
    }
    if(authFailedStatusIsSet_) {
        val[utility::conversions::to_string_t("auth_failed_status")] = ModelBase::toJson(authFailedStatus_);
    }
    if(responseStatusIsSet_) {
        val[utility::conversions::to_string_t("response_status")] = ModelBase::toJson(responseStatus_);
    }
    if(timeoutIsSet_) {
        val[utility::conversions::to_string_t("timeout")] = ModelBase::toJson(timeout_);
    }
    if(timeoutActionIsSet_) {
        val[utility::conversions::to_string_t("timeout_action")] = ModelBase::toJson(timeoutAction_);
    }
    if(reserveHeadersIsSet_) {
        val[utility::conversions::to_string_t("reserve_headers")] = ModelBase::toJson(reserveHeaders_);
    }

    return val;
}
bool RemoteAuthRule::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("auth_server"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("auth_server"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthServer(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("request_method"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("request_method"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRequestMethod(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("file_type_setting"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_type_setting"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFileTypeSetting(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("specified_file_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("specified_file_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpecifiedFileType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("reserve_args_setting"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reserve_args_setting"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReserveArgsSetting(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("reserve_args"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reserve_args"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReserveArgs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("add_custom_args_rules"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("add_custom_args_rules"));
        if(!fieldValue.is_null())
        {
            std::vector<CustomArgs> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAddCustomArgsRules(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("reserve_headers_setting"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reserve_headers_setting"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReserveHeadersSetting(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("add_custom_headers_rules"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("add_custom_headers_rules"));
        if(!fieldValue.is_null())
        {
            std::vector<CustomArgs> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAddCustomHeadersRules(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("auth_success_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("auth_success_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthSuccessStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("auth_failed_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("auth_failed_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthFailedStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("response_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("response_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResponseStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("timeout"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("timeout"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTimeout(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("timeout_action"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("timeout_action"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTimeoutAction(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("reserve_headers"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reserve_headers"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReserveHeaders(refVal);
        }
    }
    return ok;
}


std::string RemoteAuthRule::getAuthServer() const
{
    return authServer_;
}

void RemoteAuthRule::setAuthServer(const std::string& value)
{
    authServer_ = value;
    authServerIsSet_ = true;
}

bool RemoteAuthRule::authServerIsSet() const
{
    return authServerIsSet_;
}

void RemoteAuthRule::unsetauthServer()
{
    authServerIsSet_ = false;
}

std::string RemoteAuthRule::getRequestMethod() const
{
    return requestMethod_;
}

void RemoteAuthRule::setRequestMethod(const std::string& value)
{
    requestMethod_ = value;
    requestMethodIsSet_ = true;
}

bool RemoteAuthRule::requestMethodIsSet() const
{
    return requestMethodIsSet_;
}

void RemoteAuthRule::unsetrequestMethod()
{
    requestMethodIsSet_ = false;
}

std::string RemoteAuthRule::getFileTypeSetting() const
{
    return fileTypeSetting_;
}

void RemoteAuthRule::setFileTypeSetting(const std::string& value)
{
    fileTypeSetting_ = value;
    fileTypeSettingIsSet_ = true;
}

bool RemoteAuthRule::fileTypeSettingIsSet() const
{
    return fileTypeSettingIsSet_;
}

void RemoteAuthRule::unsetfileTypeSetting()
{
    fileTypeSettingIsSet_ = false;
}

std::string RemoteAuthRule::getSpecifiedFileType() const
{
    return specifiedFileType_;
}

void RemoteAuthRule::setSpecifiedFileType(const std::string& value)
{
    specifiedFileType_ = value;
    specifiedFileTypeIsSet_ = true;
}

bool RemoteAuthRule::specifiedFileTypeIsSet() const
{
    return specifiedFileTypeIsSet_;
}

void RemoteAuthRule::unsetspecifiedFileType()
{
    specifiedFileTypeIsSet_ = false;
}

std::string RemoteAuthRule::getReserveArgsSetting() const
{
    return reserveArgsSetting_;
}

void RemoteAuthRule::setReserveArgsSetting(const std::string& value)
{
    reserveArgsSetting_ = value;
    reserveArgsSettingIsSet_ = true;
}

bool RemoteAuthRule::reserveArgsSettingIsSet() const
{
    return reserveArgsSettingIsSet_;
}

void RemoteAuthRule::unsetreserveArgsSetting()
{
    reserveArgsSettingIsSet_ = false;
}

std::string RemoteAuthRule::getReserveArgs() const
{
    return reserveArgs_;
}

void RemoteAuthRule::setReserveArgs(const std::string& value)
{
    reserveArgs_ = value;
    reserveArgsIsSet_ = true;
}

bool RemoteAuthRule::reserveArgsIsSet() const
{
    return reserveArgsIsSet_;
}

void RemoteAuthRule::unsetreserveArgs()
{
    reserveArgsIsSet_ = false;
}

std::vector<CustomArgs>& RemoteAuthRule::getAddCustomArgsRules()
{
    return addCustomArgsRules_;
}

void RemoteAuthRule::setAddCustomArgsRules(const std::vector<CustomArgs>& value)
{
    addCustomArgsRules_ = value;
    addCustomArgsRulesIsSet_ = true;
}

bool RemoteAuthRule::addCustomArgsRulesIsSet() const
{
    return addCustomArgsRulesIsSet_;
}

void RemoteAuthRule::unsetaddCustomArgsRules()
{
    addCustomArgsRulesIsSet_ = false;
}

std::string RemoteAuthRule::getReserveHeadersSetting() const
{
    return reserveHeadersSetting_;
}

void RemoteAuthRule::setReserveHeadersSetting(const std::string& value)
{
    reserveHeadersSetting_ = value;
    reserveHeadersSettingIsSet_ = true;
}

bool RemoteAuthRule::reserveHeadersSettingIsSet() const
{
    return reserveHeadersSettingIsSet_;
}

void RemoteAuthRule::unsetreserveHeadersSetting()
{
    reserveHeadersSettingIsSet_ = false;
}

std::vector<CustomArgs>& RemoteAuthRule::getAddCustomHeadersRules()
{
    return addCustomHeadersRules_;
}

void RemoteAuthRule::setAddCustomHeadersRules(const std::vector<CustomArgs>& value)
{
    addCustomHeadersRules_ = value;
    addCustomHeadersRulesIsSet_ = true;
}

bool RemoteAuthRule::addCustomHeadersRulesIsSet() const
{
    return addCustomHeadersRulesIsSet_;
}

void RemoteAuthRule::unsetaddCustomHeadersRules()
{
    addCustomHeadersRulesIsSet_ = false;
}

std::string RemoteAuthRule::getAuthSuccessStatus() const
{
    return authSuccessStatus_;
}

void RemoteAuthRule::setAuthSuccessStatus(const std::string& value)
{
    authSuccessStatus_ = value;
    authSuccessStatusIsSet_ = true;
}

bool RemoteAuthRule::authSuccessStatusIsSet() const
{
    return authSuccessStatusIsSet_;
}

void RemoteAuthRule::unsetauthSuccessStatus()
{
    authSuccessStatusIsSet_ = false;
}

std::string RemoteAuthRule::getAuthFailedStatus() const
{
    return authFailedStatus_;
}

void RemoteAuthRule::setAuthFailedStatus(const std::string& value)
{
    authFailedStatus_ = value;
    authFailedStatusIsSet_ = true;
}

bool RemoteAuthRule::authFailedStatusIsSet() const
{
    return authFailedStatusIsSet_;
}

void RemoteAuthRule::unsetauthFailedStatus()
{
    authFailedStatusIsSet_ = false;
}

std::string RemoteAuthRule::getResponseStatus() const
{
    return responseStatus_;
}

void RemoteAuthRule::setResponseStatus(const std::string& value)
{
    responseStatus_ = value;
    responseStatusIsSet_ = true;
}

bool RemoteAuthRule::responseStatusIsSet() const
{
    return responseStatusIsSet_;
}

void RemoteAuthRule::unsetresponseStatus()
{
    responseStatusIsSet_ = false;
}

int32_t RemoteAuthRule::getTimeout() const
{
    return timeout_;
}

void RemoteAuthRule::setTimeout(int32_t value)
{
    timeout_ = value;
    timeoutIsSet_ = true;
}

bool RemoteAuthRule::timeoutIsSet() const
{
    return timeoutIsSet_;
}

void RemoteAuthRule::unsettimeout()
{
    timeoutIsSet_ = false;
}

std::string RemoteAuthRule::getTimeoutAction() const
{
    return timeoutAction_;
}

void RemoteAuthRule::setTimeoutAction(const std::string& value)
{
    timeoutAction_ = value;
    timeoutActionIsSet_ = true;
}

bool RemoteAuthRule::timeoutActionIsSet() const
{
    return timeoutActionIsSet_;
}

void RemoteAuthRule::unsettimeoutAction()
{
    timeoutActionIsSet_ = false;
}

std::string RemoteAuthRule::getReserveHeaders() const
{
    return reserveHeaders_;
}

void RemoteAuthRule::setReserveHeaders(const std::string& value)
{
    reserveHeaders_ = value;
    reserveHeadersIsSet_ = true;
}

bool RemoteAuthRule::reserveHeadersIsSet() const
{
    return reserveHeadersIsSet_;
}

void RemoteAuthRule::unsetreserveHeaders()
{
    reserveHeadersIsSet_ = false;
}

}
}
}
}
}


