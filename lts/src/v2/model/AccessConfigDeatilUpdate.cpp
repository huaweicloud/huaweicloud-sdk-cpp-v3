

#include "huaweicloud/lts/v2/model/AccessConfigDeatilUpdate.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




AccessConfigDeatilUpdate::AccessConfigDeatilUpdate()
{
    pathsIsSet_ = false;
    blackPathsIsSet_ = false;
    formatIsSet_ = false;
    windowsLogInfoIsSet_ = false;
    stdout_ = false;
    stdoutIsSet_ = false;
    stderr_ = false;
    stderrIsSet_ = false;
    pathType_ = "";
    pathTypeIsSet_ = false;
    namespaceRegex_ = "";
    namespaceRegexIsSet_ = false;
    podNameRegex_ = "";
    podNameRegexIsSet_ = false;
    containerNameRegex_ = "";
    containerNameRegexIsSet_ = false;
    includeLabelsIsSet_ = false;
    excludeLabelsIsSet_ = false;
    includeEnvsIsSet_ = false;
    excludeEnvsIsSet_ = false;
    logLabelsIsSet_ = false;
    logEnvsIsSet_ = false;
    includeK8sLabelsIsSet_ = false;
    excludeK8sLabelsIsSet_ = false;
    logK8sIsSet_ = false;
    systemFieldsIsSet_ = false;
    customKeyValueIsSet_ = false;
    includeLabelsLogical_ = "";
    includeLabelsLogicalIsSet_ = false;
    excludeLabelsLogical_ = "";
    excludeLabelsLogicalIsSet_ = false;
    includeK8sLabelsLogical_ = "";
    includeK8sLabelsLogicalIsSet_ = false;
    excludeK8sLabelsLogical_ = "";
    excludeK8sLabelsLogicalIsSet_ = false;
    includeEnvsLogical_ = "";
    includeEnvsLogicalIsSet_ = false;
    excludeEnvsLogical_ = "";
    excludeEnvsLogicalIsSet_ = false;
}

AccessConfigDeatilUpdate::~AccessConfigDeatilUpdate() = default;

void AccessConfigDeatilUpdate::validate()
{
}

web::json::value AccessConfigDeatilUpdate::toJson() const
{
    web::json::value val = web::json::value::object();

    if(pathsIsSet_) {
        val[utility::conversions::to_string_t("paths")] = ModelBase::toJson(paths_);
    }
    if(blackPathsIsSet_) {
        val[utility::conversions::to_string_t("black_paths")] = ModelBase::toJson(blackPaths_);
    }
    if(formatIsSet_) {
        val[utility::conversions::to_string_t("format")] = ModelBase::toJson(format_);
    }
    if(windowsLogInfoIsSet_) {
        val[utility::conversions::to_string_t("windows_log_info")] = ModelBase::toJson(windowsLogInfo_);
    }
    if(stdoutIsSet_) {
        val[utility::conversions::to_string_t("stdout")] = ModelBase::toJson(stdout_);
    }
    if(stderrIsSet_) {
        val[utility::conversions::to_string_t("stderr")] = ModelBase::toJson(stderr_);
    }
    if(pathTypeIsSet_) {
        val[utility::conversions::to_string_t("pathType")] = ModelBase::toJson(pathType_);
    }
    if(namespaceRegexIsSet_) {
        val[utility::conversions::to_string_t("namespaceRegex")] = ModelBase::toJson(namespaceRegex_);
    }
    if(podNameRegexIsSet_) {
        val[utility::conversions::to_string_t("podNameRegex")] = ModelBase::toJson(podNameRegex_);
    }
    if(containerNameRegexIsSet_) {
        val[utility::conversions::to_string_t("containerNameRegex")] = ModelBase::toJson(containerNameRegex_);
    }
    if(includeLabelsIsSet_) {
        val[utility::conversions::to_string_t("includeLabels")] = ModelBase::toJson(includeLabels_);
    }
    if(excludeLabelsIsSet_) {
        val[utility::conversions::to_string_t("excludeLabels")] = ModelBase::toJson(excludeLabels_);
    }
    if(includeEnvsIsSet_) {
        val[utility::conversions::to_string_t("includeEnvs")] = ModelBase::toJson(includeEnvs_);
    }
    if(excludeEnvsIsSet_) {
        val[utility::conversions::to_string_t("excludeEnvs")] = ModelBase::toJson(excludeEnvs_);
    }
    if(logLabelsIsSet_) {
        val[utility::conversions::to_string_t("logLabels")] = ModelBase::toJson(logLabels_);
    }
    if(logEnvsIsSet_) {
        val[utility::conversions::to_string_t("logEnvs")] = ModelBase::toJson(logEnvs_);
    }
    if(includeK8sLabelsIsSet_) {
        val[utility::conversions::to_string_t("includeK8sLabels")] = ModelBase::toJson(includeK8sLabels_);
    }
    if(excludeK8sLabelsIsSet_) {
        val[utility::conversions::to_string_t("excludeK8sLabels")] = ModelBase::toJson(excludeK8sLabels_);
    }
    if(logK8sIsSet_) {
        val[utility::conversions::to_string_t("logK8s")] = ModelBase::toJson(logK8s_);
    }
    if(systemFieldsIsSet_) {
        val[utility::conversions::to_string_t("system_fields")] = ModelBase::toJson(systemFields_);
    }
    if(customKeyValueIsSet_) {
        val[utility::conversions::to_string_t("custom_key_value")] = ModelBase::toJson(customKeyValue_);
    }
    if(includeLabelsLogicalIsSet_) {
        val[utility::conversions::to_string_t("includeLabelsLogical")] = ModelBase::toJson(includeLabelsLogical_);
    }
    if(excludeLabelsLogicalIsSet_) {
        val[utility::conversions::to_string_t("excludeLabelsLogical")] = ModelBase::toJson(excludeLabelsLogical_);
    }
    if(includeK8sLabelsLogicalIsSet_) {
        val[utility::conversions::to_string_t("includeK8sLabelsLogical")] = ModelBase::toJson(includeK8sLabelsLogical_);
    }
    if(excludeK8sLabelsLogicalIsSet_) {
        val[utility::conversions::to_string_t("excludeK8sLabelsLogical")] = ModelBase::toJson(excludeK8sLabelsLogical_);
    }
    if(includeEnvsLogicalIsSet_) {
        val[utility::conversions::to_string_t("includeEnvsLogical")] = ModelBase::toJson(includeEnvsLogical_);
    }
    if(excludeEnvsLogicalIsSet_) {
        val[utility::conversions::to_string_t("excludeEnvsLogical")] = ModelBase::toJson(excludeEnvsLogical_);
    }

    return val;
}
bool AccessConfigDeatilUpdate::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("paths"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("paths"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPaths(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("black_paths"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("black_paths"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBlackPaths(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("format"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("format"));
        if(!fieldValue.is_null())
        {
            AccessConfigFormatUpdate refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFormat(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("windows_log_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("windows_log_info"));
        if(!fieldValue.is_null())
        {
            AccessConfigWindowsLogInfoUpdate refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWindowsLogInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("stdout"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("stdout"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStdout(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("stderr"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("stderr"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStderr(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pathType"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pathType"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPathType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("namespaceRegex"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("namespaceRegex"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNamespaceRegex(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("podNameRegex"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("podNameRegex"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPodNameRegex(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("containerNameRegex"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("containerNameRegex"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContainerNameRegex(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("includeLabels"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("includeLabels"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIncludeLabels(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("excludeLabels"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("excludeLabels"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExcludeLabels(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("includeEnvs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("includeEnvs"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIncludeEnvs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("excludeEnvs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("excludeEnvs"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExcludeEnvs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("logLabels"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("logLabels"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogLabels(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("logEnvs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("logEnvs"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogEnvs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("includeK8sLabels"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("includeK8sLabels"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIncludeK8sLabels(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("excludeK8sLabels"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("excludeK8sLabels"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExcludeK8sLabels(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("logK8s"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("logK8s"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogK8s(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("system_fields"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("system_fields"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSystemFields(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("custom_key_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("custom_key_value"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCustomKeyValue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("includeLabelsLogical"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("includeLabelsLogical"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIncludeLabelsLogical(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("excludeLabelsLogical"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("excludeLabelsLogical"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExcludeLabelsLogical(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("includeK8sLabelsLogical"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("includeK8sLabelsLogical"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIncludeK8sLabelsLogical(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("excludeK8sLabelsLogical"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("excludeK8sLabelsLogical"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExcludeK8sLabelsLogical(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("includeEnvsLogical"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("includeEnvsLogical"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIncludeEnvsLogical(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("excludeEnvsLogical"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("excludeEnvsLogical"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExcludeEnvsLogical(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& AccessConfigDeatilUpdate::getPaths()
{
    return paths_;
}

void AccessConfigDeatilUpdate::setPaths(const std::vector<std::string>& value)
{
    paths_ = value;
    pathsIsSet_ = true;
}

bool AccessConfigDeatilUpdate::pathsIsSet() const
{
    return pathsIsSet_;
}

void AccessConfigDeatilUpdate::unsetpaths()
{
    pathsIsSet_ = false;
}

std::vector<std::string>& AccessConfigDeatilUpdate::getBlackPaths()
{
    return blackPaths_;
}

void AccessConfigDeatilUpdate::setBlackPaths(const std::vector<std::string>& value)
{
    blackPaths_ = value;
    blackPathsIsSet_ = true;
}

bool AccessConfigDeatilUpdate::blackPathsIsSet() const
{
    return blackPathsIsSet_;
}

void AccessConfigDeatilUpdate::unsetblackPaths()
{
    blackPathsIsSet_ = false;
}

AccessConfigFormatUpdate AccessConfigDeatilUpdate::getFormat() const
{
    return format_;
}

void AccessConfigDeatilUpdate::setFormat(const AccessConfigFormatUpdate& value)
{
    format_ = value;
    formatIsSet_ = true;
}

bool AccessConfigDeatilUpdate::formatIsSet() const
{
    return formatIsSet_;
}

void AccessConfigDeatilUpdate::unsetformat()
{
    formatIsSet_ = false;
}

AccessConfigWindowsLogInfoUpdate AccessConfigDeatilUpdate::getWindowsLogInfo() const
{
    return windowsLogInfo_;
}

void AccessConfigDeatilUpdate::setWindowsLogInfo(const AccessConfigWindowsLogInfoUpdate& value)
{
    windowsLogInfo_ = value;
    windowsLogInfoIsSet_ = true;
}

bool AccessConfigDeatilUpdate::windowsLogInfoIsSet() const
{
    return windowsLogInfoIsSet_;
}

void AccessConfigDeatilUpdate::unsetwindowsLogInfo()
{
    windowsLogInfoIsSet_ = false;
}

bool AccessConfigDeatilUpdate::isStdout() const
{
    return stdout_;
}

void AccessConfigDeatilUpdate::setStdout(bool value)
{
    stdout_ = value;
    stdoutIsSet_ = true;
}

bool AccessConfigDeatilUpdate::stdoutIsSet() const
{
    return stdoutIsSet_;
}

void AccessConfigDeatilUpdate::unsetstdout()
{
    stdoutIsSet_ = false;
}

bool AccessConfigDeatilUpdate::isStderr() const
{
    return stderr_;
}

void AccessConfigDeatilUpdate::setStderr(bool value)
{
    stderr_ = value;
    stderrIsSet_ = true;
}

bool AccessConfigDeatilUpdate::stderrIsSet() const
{
    return stderrIsSet_;
}

void AccessConfigDeatilUpdate::unsetstderr()
{
    stderrIsSet_ = false;
}

std::string AccessConfigDeatilUpdate::getPathType() const
{
    return pathType_;
}

void AccessConfigDeatilUpdate::setPathType(const std::string& value)
{
    pathType_ = value;
    pathTypeIsSet_ = true;
}

bool AccessConfigDeatilUpdate::pathTypeIsSet() const
{
    return pathTypeIsSet_;
}

void AccessConfigDeatilUpdate::unsetpathType()
{
    pathTypeIsSet_ = false;
}

std::string AccessConfigDeatilUpdate::getNamespaceRegex() const
{
    return namespaceRegex_;
}

void AccessConfigDeatilUpdate::setNamespaceRegex(const std::string& value)
{
    namespaceRegex_ = value;
    namespaceRegexIsSet_ = true;
}

bool AccessConfigDeatilUpdate::namespaceRegexIsSet() const
{
    return namespaceRegexIsSet_;
}

void AccessConfigDeatilUpdate::unsetnamespaceRegex()
{
    namespaceRegexIsSet_ = false;
}

std::string AccessConfigDeatilUpdate::getPodNameRegex() const
{
    return podNameRegex_;
}

void AccessConfigDeatilUpdate::setPodNameRegex(const std::string& value)
{
    podNameRegex_ = value;
    podNameRegexIsSet_ = true;
}

bool AccessConfigDeatilUpdate::podNameRegexIsSet() const
{
    return podNameRegexIsSet_;
}

void AccessConfigDeatilUpdate::unsetpodNameRegex()
{
    podNameRegexIsSet_ = false;
}

std::string AccessConfigDeatilUpdate::getContainerNameRegex() const
{
    return containerNameRegex_;
}

void AccessConfigDeatilUpdate::setContainerNameRegex(const std::string& value)
{
    containerNameRegex_ = value;
    containerNameRegexIsSet_ = true;
}

bool AccessConfigDeatilUpdate::containerNameRegexIsSet() const
{
    return containerNameRegexIsSet_;
}

void AccessConfigDeatilUpdate::unsetcontainerNameRegex()
{
    containerNameRegexIsSet_ = false;
}

std::map<std::string, std::string>& AccessConfigDeatilUpdate::getIncludeLabels()
{
    return includeLabels_;
}

void AccessConfigDeatilUpdate::setIncludeLabels(const std::map<std::string, std::string>& value)
{
    includeLabels_ = value;
    includeLabelsIsSet_ = true;
}

bool AccessConfigDeatilUpdate::includeLabelsIsSet() const
{
    return includeLabelsIsSet_;
}

void AccessConfigDeatilUpdate::unsetincludeLabels()
{
    includeLabelsIsSet_ = false;
}

std::map<std::string, std::string>& AccessConfigDeatilUpdate::getExcludeLabels()
{
    return excludeLabels_;
}

void AccessConfigDeatilUpdate::setExcludeLabels(const std::map<std::string, std::string>& value)
{
    excludeLabels_ = value;
    excludeLabelsIsSet_ = true;
}

bool AccessConfigDeatilUpdate::excludeLabelsIsSet() const
{
    return excludeLabelsIsSet_;
}

void AccessConfigDeatilUpdate::unsetexcludeLabels()
{
    excludeLabelsIsSet_ = false;
}

std::map<std::string, std::string>& AccessConfigDeatilUpdate::getIncludeEnvs()
{
    return includeEnvs_;
}

void AccessConfigDeatilUpdate::setIncludeEnvs(const std::map<std::string, std::string>& value)
{
    includeEnvs_ = value;
    includeEnvsIsSet_ = true;
}

bool AccessConfigDeatilUpdate::includeEnvsIsSet() const
{
    return includeEnvsIsSet_;
}

void AccessConfigDeatilUpdate::unsetincludeEnvs()
{
    includeEnvsIsSet_ = false;
}

std::map<std::string, std::string>& AccessConfigDeatilUpdate::getExcludeEnvs()
{
    return excludeEnvs_;
}

void AccessConfigDeatilUpdate::setExcludeEnvs(const std::map<std::string, std::string>& value)
{
    excludeEnvs_ = value;
    excludeEnvsIsSet_ = true;
}

bool AccessConfigDeatilUpdate::excludeEnvsIsSet() const
{
    return excludeEnvsIsSet_;
}

void AccessConfigDeatilUpdate::unsetexcludeEnvs()
{
    excludeEnvsIsSet_ = false;
}

std::map<std::string, std::string>& AccessConfigDeatilUpdate::getLogLabels()
{
    return logLabels_;
}

void AccessConfigDeatilUpdate::setLogLabels(const std::map<std::string, std::string>& value)
{
    logLabels_ = value;
    logLabelsIsSet_ = true;
}

bool AccessConfigDeatilUpdate::logLabelsIsSet() const
{
    return logLabelsIsSet_;
}

void AccessConfigDeatilUpdate::unsetlogLabels()
{
    logLabelsIsSet_ = false;
}

std::map<std::string, std::string>& AccessConfigDeatilUpdate::getLogEnvs()
{
    return logEnvs_;
}

void AccessConfigDeatilUpdate::setLogEnvs(const std::map<std::string, std::string>& value)
{
    logEnvs_ = value;
    logEnvsIsSet_ = true;
}

bool AccessConfigDeatilUpdate::logEnvsIsSet() const
{
    return logEnvsIsSet_;
}

void AccessConfigDeatilUpdate::unsetlogEnvs()
{
    logEnvsIsSet_ = false;
}

std::map<std::string, std::string>& AccessConfigDeatilUpdate::getIncludeK8sLabels()
{
    return includeK8sLabels_;
}

void AccessConfigDeatilUpdate::setIncludeK8sLabels(const std::map<std::string, std::string>& value)
{
    includeK8sLabels_ = value;
    includeK8sLabelsIsSet_ = true;
}

bool AccessConfigDeatilUpdate::includeK8sLabelsIsSet() const
{
    return includeK8sLabelsIsSet_;
}

void AccessConfigDeatilUpdate::unsetincludeK8sLabels()
{
    includeK8sLabelsIsSet_ = false;
}

std::map<std::string, std::string>& AccessConfigDeatilUpdate::getExcludeK8sLabels()
{
    return excludeK8sLabels_;
}

void AccessConfigDeatilUpdate::setExcludeK8sLabels(const std::map<std::string, std::string>& value)
{
    excludeK8sLabels_ = value;
    excludeK8sLabelsIsSet_ = true;
}

bool AccessConfigDeatilUpdate::excludeK8sLabelsIsSet() const
{
    return excludeK8sLabelsIsSet_;
}

void AccessConfigDeatilUpdate::unsetexcludeK8sLabels()
{
    excludeK8sLabelsIsSet_ = false;
}

std::map<std::string, std::string>& AccessConfigDeatilUpdate::getLogK8s()
{
    return logK8s_;
}

void AccessConfigDeatilUpdate::setLogK8s(const std::map<std::string, std::string>& value)
{
    logK8s_ = value;
    logK8sIsSet_ = true;
}

bool AccessConfigDeatilUpdate::logK8sIsSet() const
{
    return logK8sIsSet_;
}

void AccessConfigDeatilUpdate::unsetlogK8s()
{
    logK8sIsSet_ = false;
}

std::vector<std::string>& AccessConfigDeatilUpdate::getSystemFields()
{
    return systemFields_;
}

void AccessConfigDeatilUpdate::setSystemFields(const std::vector<std::string>& value)
{
    systemFields_ = value;
    systemFieldsIsSet_ = true;
}

bool AccessConfigDeatilUpdate::systemFieldsIsSet() const
{
    return systemFieldsIsSet_;
}

void AccessConfigDeatilUpdate::unsetsystemFields()
{
    systemFieldsIsSet_ = false;
}

std::map<std::string, std::string>& AccessConfigDeatilUpdate::getCustomKeyValue()
{
    return customKeyValue_;
}

void AccessConfigDeatilUpdate::setCustomKeyValue(const std::map<std::string, std::string>& value)
{
    customKeyValue_ = value;
    customKeyValueIsSet_ = true;
}

bool AccessConfigDeatilUpdate::customKeyValueIsSet() const
{
    return customKeyValueIsSet_;
}

void AccessConfigDeatilUpdate::unsetcustomKeyValue()
{
    customKeyValueIsSet_ = false;
}

std::string AccessConfigDeatilUpdate::getIncludeLabelsLogical() const
{
    return includeLabelsLogical_;
}

void AccessConfigDeatilUpdate::setIncludeLabelsLogical(const std::string& value)
{
    includeLabelsLogical_ = value;
    includeLabelsLogicalIsSet_ = true;
}

bool AccessConfigDeatilUpdate::includeLabelsLogicalIsSet() const
{
    return includeLabelsLogicalIsSet_;
}

void AccessConfigDeatilUpdate::unsetincludeLabelsLogical()
{
    includeLabelsLogicalIsSet_ = false;
}

std::string AccessConfigDeatilUpdate::getExcludeLabelsLogical() const
{
    return excludeLabelsLogical_;
}

void AccessConfigDeatilUpdate::setExcludeLabelsLogical(const std::string& value)
{
    excludeLabelsLogical_ = value;
    excludeLabelsLogicalIsSet_ = true;
}

bool AccessConfigDeatilUpdate::excludeLabelsLogicalIsSet() const
{
    return excludeLabelsLogicalIsSet_;
}

void AccessConfigDeatilUpdate::unsetexcludeLabelsLogical()
{
    excludeLabelsLogicalIsSet_ = false;
}

std::string AccessConfigDeatilUpdate::getIncludeK8sLabelsLogical() const
{
    return includeK8sLabelsLogical_;
}

void AccessConfigDeatilUpdate::setIncludeK8sLabelsLogical(const std::string& value)
{
    includeK8sLabelsLogical_ = value;
    includeK8sLabelsLogicalIsSet_ = true;
}

bool AccessConfigDeatilUpdate::includeK8sLabelsLogicalIsSet() const
{
    return includeK8sLabelsLogicalIsSet_;
}

void AccessConfigDeatilUpdate::unsetincludeK8sLabelsLogical()
{
    includeK8sLabelsLogicalIsSet_ = false;
}

std::string AccessConfigDeatilUpdate::getExcludeK8sLabelsLogical() const
{
    return excludeK8sLabelsLogical_;
}

void AccessConfigDeatilUpdate::setExcludeK8sLabelsLogical(const std::string& value)
{
    excludeK8sLabelsLogical_ = value;
    excludeK8sLabelsLogicalIsSet_ = true;
}

bool AccessConfigDeatilUpdate::excludeK8sLabelsLogicalIsSet() const
{
    return excludeK8sLabelsLogicalIsSet_;
}

void AccessConfigDeatilUpdate::unsetexcludeK8sLabelsLogical()
{
    excludeK8sLabelsLogicalIsSet_ = false;
}

std::string AccessConfigDeatilUpdate::getIncludeEnvsLogical() const
{
    return includeEnvsLogical_;
}

void AccessConfigDeatilUpdate::setIncludeEnvsLogical(const std::string& value)
{
    includeEnvsLogical_ = value;
    includeEnvsLogicalIsSet_ = true;
}

bool AccessConfigDeatilUpdate::includeEnvsLogicalIsSet() const
{
    return includeEnvsLogicalIsSet_;
}

void AccessConfigDeatilUpdate::unsetincludeEnvsLogical()
{
    includeEnvsLogicalIsSet_ = false;
}

std::string AccessConfigDeatilUpdate::getExcludeEnvsLogical() const
{
    return excludeEnvsLogical_;
}

void AccessConfigDeatilUpdate::setExcludeEnvsLogical(const std::string& value)
{
    excludeEnvsLogical_ = value;
    excludeEnvsLogicalIsSet_ = true;
}

bool AccessConfigDeatilUpdate::excludeEnvsLogicalIsSet() const
{
    return excludeEnvsLogicalIsSet_;
}

void AccessConfigDeatilUpdate::unsetexcludeEnvsLogical()
{
    excludeEnvsLogicalIsSet_ = false;
}

}
}
}
}
}


