

#include "huaweicloud/cdn/v1/model/RemoteAuthRuleVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




RemoteAuthRuleVo::RemoteAuthRuleVo()
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

RemoteAuthRuleVo::~RemoteAuthRuleVo() = default;

void RemoteAuthRuleVo::validate()
{
}

web::json::value RemoteAuthRuleVo::toJson() const
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
bool RemoteAuthRuleVo::fromJson(const web::json::value& val)
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


std::string RemoteAuthRuleVo::getAuthServer() const
{
    return authServer_;
}

void RemoteAuthRuleVo::setAuthServer(const std::string& value)
{
    authServer_ = value;
    authServerIsSet_ = true;
}

bool RemoteAuthRuleVo::authServerIsSet() const
{
    return authServerIsSet_;
}

void RemoteAuthRuleVo::unsetauthServer()
{
    authServerIsSet_ = false;
}

std::string RemoteAuthRuleVo::getRequestMethod() const
{
    return requestMethod_;
}

void RemoteAuthRuleVo::setRequestMethod(const std::string& value)
{
    requestMethod_ = value;
    requestMethodIsSet_ = true;
}

bool RemoteAuthRuleVo::requestMethodIsSet() const
{
    return requestMethodIsSet_;
}

void RemoteAuthRuleVo::unsetrequestMethod()
{
    requestMethodIsSet_ = false;
}

std::string RemoteAuthRuleVo::getFileTypeSetting() const
{
    return fileTypeSetting_;
}

void RemoteAuthRuleVo::setFileTypeSetting(const std::string& value)
{
    fileTypeSetting_ = value;
    fileTypeSettingIsSet_ = true;
}

bool RemoteAuthRuleVo::fileTypeSettingIsSet() const
{
    return fileTypeSettingIsSet_;
}

void RemoteAuthRuleVo::unsetfileTypeSetting()
{
    fileTypeSettingIsSet_ = false;
}

std::string RemoteAuthRuleVo::getSpecifiedFileType() const
{
    return specifiedFileType_;
}

void RemoteAuthRuleVo::setSpecifiedFileType(const std::string& value)
{
    specifiedFileType_ = value;
    specifiedFileTypeIsSet_ = true;
}

bool RemoteAuthRuleVo::specifiedFileTypeIsSet() const
{
    return specifiedFileTypeIsSet_;
}

void RemoteAuthRuleVo::unsetspecifiedFileType()
{
    specifiedFileTypeIsSet_ = false;
}

std::string RemoteAuthRuleVo::getReserveArgsSetting() const
{
    return reserveArgsSetting_;
}

void RemoteAuthRuleVo::setReserveArgsSetting(const std::string& value)
{
    reserveArgsSetting_ = value;
    reserveArgsSettingIsSet_ = true;
}

bool RemoteAuthRuleVo::reserveArgsSettingIsSet() const
{
    return reserveArgsSettingIsSet_;
}

void RemoteAuthRuleVo::unsetreserveArgsSetting()
{
    reserveArgsSettingIsSet_ = false;
}

std::string RemoteAuthRuleVo::getReserveArgs() const
{
    return reserveArgs_;
}

void RemoteAuthRuleVo::setReserveArgs(const std::string& value)
{
    reserveArgs_ = value;
    reserveArgsIsSet_ = true;
}

bool RemoteAuthRuleVo::reserveArgsIsSet() const
{
    return reserveArgsIsSet_;
}

void RemoteAuthRuleVo::unsetreserveArgs()
{
    reserveArgsIsSet_ = false;
}

std::vector<CustomArgs>& RemoteAuthRuleVo::getAddCustomArgsRules()
{
    return addCustomArgsRules_;
}

void RemoteAuthRuleVo::setAddCustomArgsRules(const std::vector<CustomArgs>& value)
{
    addCustomArgsRules_ = value;
    addCustomArgsRulesIsSet_ = true;
}

bool RemoteAuthRuleVo::addCustomArgsRulesIsSet() const
{
    return addCustomArgsRulesIsSet_;
}

void RemoteAuthRuleVo::unsetaddCustomArgsRules()
{
    addCustomArgsRulesIsSet_ = false;
}

std::string RemoteAuthRuleVo::getReserveHeadersSetting() const
{
    return reserveHeadersSetting_;
}

void RemoteAuthRuleVo::setReserveHeadersSetting(const std::string& value)
{
    reserveHeadersSetting_ = value;
    reserveHeadersSettingIsSet_ = true;
}

bool RemoteAuthRuleVo::reserveHeadersSettingIsSet() const
{
    return reserveHeadersSettingIsSet_;
}

void RemoteAuthRuleVo::unsetreserveHeadersSetting()
{
    reserveHeadersSettingIsSet_ = false;
}

std::vector<CustomArgs>& RemoteAuthRuleVo::getAddCustomHeadersRules()
{
    return addCustomHeadersRules_;
}

void RemoteAuthRuleVo::setAddCustomHeadersRules(const std::vector<CustomArgs>& value)
{
    addCustomHeadersRules_ = value;
    addCustomHeadersRulesIsSet_ = true;
}

bool RemoteAuthRuleVo::addCustomHeadersRulesIsSet() const
{
    return addCustomHeadersRulesIsSet_;
}

void RemoteAuthRuleVo::unsetaddCustomHeadersRules()
{
    addCustomHeadersRulesIsSet_ = false;
}

std::string RemoteAuthRuleVo::getAuthSuccessStatus() const
{
    return authSuccessStatus_;
}

void RemoteAuthRuleVo::setAuthSuccessStatus(const std::string& value)
{
    authSuccessStatus_ = value;
    authSuccessStatusIsSet_ = true;
}

bool RemoteAuthRuleVo::authSuccessStatusIsSet() const
{
    return authSuccessStatusIsSet_;
}

void RemoteAuthRuleVo::unsetauthSuccessStatus()
{
    authSuccessStatusIsSet_ = false;
}

std::string RemoteAuthRuleVo::getAuthFailedStatus() const
{
    return authFailedStatus_;
}

void RemoteAuthRuleVo::setAuthFailedStatus(const std::string& value)
{
    authFailedStatus_ = value;
    authFailedStatusIsSet_ = true;
}

bool RemoteAuthRuleVo::authFailedStatusIsSet() const
{
    return authFailedStatusIsSet_;
}

void RemoteAuthRuleVo::unsetauthFailedStatus()
{
    authFailedStatusIsSet_ = false;
}

std::string RemoteAuthRuleVo::getResponseStatus() const
{
    return responseStatus_;
}

void RemoteAuthRuleVo::setResponseStatus(const std::string& value)
{
    responseStatus_ = value;
    responseStatusIsSet_ = true;
}

bool RemoteAuthRuleVo::responseStatusIsSet() const
{
    return responseStatusIsSet_;
}

void RemoteAuthRuleVo::unsetresponseStatus()
{
    responseStatusIsSet_ = false;
}

int32_t RemoteAuthRuleVo::getTimeout() const
{
    return timeout_;
}

void RemoteAuthRuleVo::setTimeout(int32_t value)
{
    timeout_ = value;
    timeoutIsSet_ = true;
}

bool RemoteAuthRuleVo::timeoutIsSet() const
{
    return timeoutIsSet_;
}

void RemoteAuthRuleVo::unsettimeout()
{
    timeoutIsSet_ = false;
}

std::string RemoteAuthRuleVo::getTimeoutAction() const
{
    return timeoutAction_;
}

void RemoteAuthRuleVo::setTimeoutAction(const std::string& value)
{
    timeoutAction_ = value;
    timeoutActionIsSet_ = true;
}

bool RemoteAuthRuleVo::timeoutActionIsSet() const
{
    return timeoutActionIsSet_;
}

void RemoteAuthRuleVo::unsettimeoutAction()
{
    timeoutActionIsSet_ = false;
}

std::string RemoteAuthRuleVo::getReserveHeaders() const
{
    return reserveHeaders_;
}

void RemoteAuthRuleVo::setReserveHeaders(const std::string& value)
{
    reserveHeaders_ = value;
    reserveHeadersIsSet_ = true;
}

bool RemoteAuthRuleVo::reserveHeadersIsSet() const
{
    return reserveHeadersIsSet_;
}

void RemoteAuthRuleVo::unsetreserveHeaders()
{
    reserveHeadersIsSet_ = false;
}

}
}
}
}
}


