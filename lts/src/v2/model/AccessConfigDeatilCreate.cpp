

#include "huaweicloud/lts/v2/model/AccessConfigDeatilCreate.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




AccessConfigDeatilCreate::AccessConfigDeatilCreate()
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
    repeatCollect_ = false;
    repeatCollectIsSet_ = false;
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

AccessConfigDeatilCreate::~AccessConfigDeatilCreate() = default;

void AccessConfigDeatilCreate::validate()
{
}

web::json::value AccessConfigDeatilCreate::toJson() const
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
    if(repeatCollectIsSet_) {
        val[utility::conversions::to_string_t("repeat_collect")] = ModelBase::toJson(repeatCollect_);
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
bool AccessConfigDeatilCreate::fromJson(const web::json::value& val)
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
            AccessConfigFormatCreate refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFormat(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("windows_log_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("windows_log_info"));
        if(!fieldValue.is_null())
        {
            AccessConfigWindowsLogInfoCreate refVal;
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
    if(val.has_field(utility::conversions::to_string_t("repeat_collect"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repeat_collect"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepeatCollect(refVal);
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


std::vector<std::string>& AccessConfigDeatilCreate::getPaths()
{
    return paths_;
}

void AccessConfigDeatilCreate::setPaths(const std::vector<std::string>& value)
{
    paths_ = value;
    pathsIsSet_ = true;
}

bool AccessConfigDeatilCreate::pathsIsSet() const
{
    return pathsIsSet_;
}

void AccessConfigDeatilCreate::unsetpaths()
{
    pathsIsSet_ = false;
}

std::vector<std::string>& AccessConfigDeatilCreate::getBlackPaths()
{
    return blackPaths_;
}

void AccessConfigDeatilCreate::setBlackPaths(const std::vector<std::string>& value)
{
    blackPaths_ = value;
    blackPathsIsSet_ = true;
}

bool AccessConfigDeatilCreate::blackPathsIsSet() const
{
    return blackPathsIsSet_;
}

void AccessConfigDeatilCreate::unsetblackPaths()
{
    blackPathsIsSet_ = false;
}

AccessConfigFormatCreate AccessConfigDeatilCreate::getFormat() const
{
    return format_;
}

void AccessConfigDeatilCreate::setFormat(const AccessConfigFormatCreate& value)
{
    format_ = value;
    formatIsSet_ = true;
}

bool AccessConfigDeatilCreate::formatIsSet() const
{
    return formatIsSet_;
}

void AccessConfigDeatilCreate::unsetformat()
{
    formatIsSet_ = false;
}

AccessConfigWindowsLogInfoCreate AccessConfigDeatilCreate::getWindowsLogInfo() const
{
    return windowsLogInfo_;
}

void AccessConfigDeatilCreate::setWindowsLogInfo(const AccessConfigWindowsLogInfoCreate& value)
{
    windowsLogInfo_ = value;
    windowsLogInfoIsSet_ = true;
}

bool AccessConfigDeatilCreate::windowsLogInfoIsSet() const
{
    return windowsLogInfoIsSet_;
}

void AccessConfigDeatilCreate::unsetwindowsLogInfo()
{
    windowsLogInfoIsSet_ = false;
}

bool AccessConfigDeatilCreate::isStdout() const
{
    return stdout_;
}

void AccessConfigDeatilCreate::setStdout(bool value)
{
    stdout_ = value;
    stdoutIsSet_ = true;
}

bool AccessConfigDeatilCreate::stdoutIsSet() const
{
    return stdoutIsSet_;
}

void AccessConfigDeatilCreate::unsetstdout()
{
    stdoutIsSet_ = false;
}

bool AccessConfigDeatilCreate::isStderr() const
{
    return stderr_;
}

void AccessConfigDeatilCreate::setStderr(bool value)
{
    stderr_ = value;
    stderrIsSet_ = true;
}

bool AccessConfigDeatilCreate::stderrIsSet() const
{
    return stderrIsSet_;
}

void AccessConfigDeatilCreate::unsetstderr()
{
    stderrIsSet_ = false;
}

std::string AccessConfigDeatilCreate::getPathType() const
{
    return pathType_;
}

void AccessConfigDeatilCreate::setPathType(const std::string& value)
{
    pathType_ = value;
    pathTypeIsSet_ = true;
}

bool AccessConfigDeatilCreate::pathTypeIsSet() const
{
    return pathTypeIsSet_;
}

void AccessConfigDeatilCreate::unsetpathType()
{
    pathTypeIsSet_ = false;
}

std::string AccessConfigDeatilCreate::getNamespaceRegex() const
{
    return namespaceRegex_;
}

void AccessConfigDeatilCreate::setNamespaceRegex(const std::string& value)
{
    namespaceRegex_ = value;
    namespaceRegexIsSet_ = true;
}

bool AccessConfigDeatilCreate::namespaceRegexIsSet() const
{
    return namespaceRegexIsSet_;
}

void AccessConfigDeatilCreate::unsetnamespaceRegex()
{
    namespaceRegexIsSet_ = false;
}

std::string AccessConfigDeatilCreate::getPodNameRegex() const
{
    return podNameRegex_;
}

void AccessConfigDeatilCreate::setPodNameRegex(const std::string& value)
{
    podNameRegex_ = value;
    podNameRegexIsSet_ = true;
}

bool AccessConfigDeatilCreate::podNameRegexIsSet() const
{
    return podNameRegexIsSet_;
}

void AccessConfigDeatilCreate::unsetpodNameRegex()
{
    podNameRegexIsSet_ = false;
}

std::string AccessConfigDeatilCreate::getContainerNameRegex() const
{
    return containerNameRegex_;
}

void AccessConfigDeatilCreate::setContainerNameRegex(const std::string& value)
{
    containerNameRegex_ = value;
    containerNameRegexIsSet_ = true;
}

bool AccessConfigDeatilCreate::containerNameRegexIsSet() const
{
    return containerNameRegexIsSet_;
}

void AccessConfigDeatilCreate::unsetcontainerNameRegex()
{
    containerNameRegexIsSet_ = false;
}

std::map<std::string, std::string>& AccessConfigDeatilCreate::getIncludeLabels()
{
    return includeLabels_;
}

void AccessConfigDeatilCreate::setIncludeLabels(const std::map<std::string, std::string>& value)
{
    includeLabels_ = value;
    includeLabelsIsSet_ = true;
}

bool AccessConfigDeatilCreate::includeLabelsIsSet() const
{
    return includeLabelsIsSet_;
}

void AccessConfigDeatilCreate::unsetincludeLabels()
{
    includeLabelsIsSet_ = false;
}

std::map<std::string, std::string>& AccessConfigDeatilCreate::getExcludeLabels()
{
    return excludeLabels_;
}

void AccessConfigDeatilCreate::setExcludeLabels(const std::map<std::string, std::string>& value)
{
    excludeLabels_ = value;
    excludeLabelsIsSet_ = true;
}

bool AccessConfigDeatilCreate::excludeLabelsIsSet() const
{
    return excludeLabelsIsSet_;
}

void AccessConfigDeatilCreate::unsetexcludeLabels()
{
    excludeLabelsIsSet_ = false;
}

std::map<std::string, std::string>& AccessConfigDeatilCreate::getIncludeEnvs()
{
    return includeEnvs_;
}

void AccessConfigDeatilCreate::setIncludeEnvs(const std::map<std::string, std::string>& value)
{
    includeEnvs_ = value;
    includeEnvsIsSet_ = true;
}

bool AccessConfigDeatilCreate::includeEnvsIsSet() const
{
    return includeEnvsIsSet_;
}

void AccessConfigDeatilCreate::unsetincludeEnvs()
{
    includeEnvsIsSet_ = false;
}

std::map<std::string, std::string>& AccessConfigDeatilCreate::getExcludeEnvs()
{
    return excludeEnvs_;
}

void AccessConfigDeatilCreate::setExcludeEnvs(const std::map<std::string, std::string>& value)
{
    excludeEnvs_ = value;
    excludeEnvsIsSet_ = true;
}

bool AccessConfigDeatilCreate::excludeEnvsIsSet() const
{
    return excludeEnvsIsSet_;
}

void AccessConfigDeatilCreate::unsetexcludeEnvs()
{
    excludeEnvsIsSet_ = false;
}

std::map<std::string, std::string>& AccessConfigDeatilCreate::getLogLabels()
{
    return logLabels_;
}

void AccessConfigDeatilCreate::setLogLabels(const std::map<std::string, std::string>& value)
{
    logLabels_ = value;
    logLabelsIsSet_ = true;
}

bool AccessConfigDeatilCreate::logLabelsIsSet() const
{
    return logLabelsIsSet_;
}

void AccessConfigDeatilCreate::unsetlogLabels()
{
    logLabelsIsSet_ = false;
}

std::map<std::string, std::string>& AccessConfigDeatilCreate::getLogEnvs()
{
    return logEnvs_;
}

void AccessConfigDeatilCreate::setLogEnvs(const std::map<std::string, std::string>& value)
{
    logEnvs_ = value;
    logEnvsIsSet_ = true;
}

bool AccessConfigDeatilCreate::logEnvsIsSet() const
{
    return logEnvsIsSet_;
}

void AccessConfigDeatilCreate::unsetlogEnvs()
{
    logEnvsIsSet_ = false;
}

std::map<std::string, std::string>& AccessConfigDeatilCreate::getIncludeK8sLabels()
{
    return includeK8sLabels_;
}

void AccessConfigDeatilCreate::setIncludeK8sLabels(const std::map<std::string, std::string>& value)
{
    includeK8sLabels_ = value;
    includeK8sLabelsIsSet_ = true;
}

bool AccessConfigDeatilCreate::includeK8sLabelsIsSet() const
{
    return includeK8sLabelsIsSet_;
}

void AccessConfigDeatilCreate::unsetincludeK8sLabels()
{
    includeK8sLabelsIsSet_ = false;
}

std::map<std::string, std::string>& AccessConfigDeatilCreate::getExcludeK8sLabels()
{
    return excludeK8sLabels_;
}

void AccessConfigDeatilCreate::setExcludeK8sLabels(const std::map<std::string, std::string>& value)
{
    excludeK8sLabels_ = value;
    excludeK8sLabelsIsSet_ = true;
}

bool AccessConfigDeatilCreate::excludeK8sLabelsIsSet() const
{
    return excludeK8sLabelsIsSet_;
}

void AccessConfigDeatilCreate::unsetexcludeK8sLabels()
{
    excludeK8sLabelsIsSet_ = false;
}

std::map<std::string, std::string>& AccessConfigDeatilCreate::getLogK8s()
{
    return logK8s_;
}

void AccessConfigDeatilCreate::setLogK8s(const std::map<std::string, std::string>& value)
{
    logK8s_ = value;
    logK8sIsSet_ = true;
}

bool AccessConfigDeatilCreate::logK8sIsSet() const
{
    return logK8sIsSet_;
}

void AccessConfigDeatilCreate::unsetlogK8s()
{
    logK8sIsSet_ = false;
}

bool AccessConfigDeatilCreate::isRepeatCollect() const
{
    return repeatCollect_;
}

void AccessConfigDeatilCreate::setRepeatCollect(bool value)
{
    repeatCollect_ = value;
    repeatCollectIsSet_ = true;
}

bool AccessConfigDeatilCreate::repeatCollectIsSet() const
{
    return repeatCollectIsSet_;
}

void AccessConfigDeatilCreate::unsetrepeatCollect()
{
    repeatCollectIsSet_ = false;
}

std::vector<std::string>& AccessConfigDeatilCreate::getSystemFields()
{
    return systemFields_;
}

void AccessConfigDeatilCreate::setSystemFields(const std::vector<std::string>& value)
{
    systemFields_ = value;
    systemFieldsIsSet_ = true;
}

bool AccessConfigDeatilCreate::systemFieldsIsSet() const
{
    return systemFieldsIsSet_;
}

void AccessConfigDeatilCreate::unsetsystemFields()
{
    systemFieldsIsSet_ = false;
}

std::map<std::string, std::string>& AccessConfigDeatilCreate::getCustomKeyValue()
{
    return customKeyValue_;
}

void AccessConfigDeatilCreate::setCustomKeyValue(const std::map<std::string, std::string>& value)
{
    customKeyValue_ = value;
    customKeyValueIsSet_ = true;
}

bool AccessConfigDeatilCreate::customKeyValueIsSet() const
{
    return customKeyValueIsSet_;
}

void AccessConfigDeatilCreate::unsetcustomKeyValue()
{
    customKeyValueIsSet_ = false;
}

std::string AccessConfigDeatilCreate::getIncludeLabelsLogical() const
{
    return includeLabelsLogical_;
}

void AccessConfigDeatilCreate::setIncludeLabelsLogical(const std::string& value)
{
    includeLabelsLogical_ = value;
    includeLabelsLogicalIsSet_ = true;
}

bool AccessConfigDeatilCreate::includeLabelsLogicalIsSet() const
{
    return includeLabelsLogicalIsSet_;
}

void AccessConfigDeatilCreate::unsetincludeLabelsLogical()
{
    includeLabelsLogicalIsSet_ = false;
}

std::string AccessConfigDeatilCreate::getExcludeLabelsLogical() const
{
    return excludeLabelsLogical_;
}

void AccessConfigDeatilCreate::setExcludeLabelsLogical(const std::string& value)
{
    excludeLabelsLogical_ = value;
    excludeLabelsLogicalIsSet_ = true;
}

bool AccessConfigDeatilCreate::excludeLabelsLogicalIsSet() const
{
    return excludeLabelsLogicalIsSet_;
}

void AccessConfigDeatilCreate::unsetexcludeLabelsLogical()
{
    excludeLabelsLogicalIsSet_ = false;
}

std::string AccessConfigDeatilCreate::getIncludeK8sLabelsLogical() const
{
    return includeK8sLabelsLogical_;
}

void AccessConfigDeatilCreate::setIncludeK8sLabelsLogical(const std::string& value)
{
    includeK8sLabelsLogical_ = value;
    includeK8sLabelsLogicalIsSet_ = true;
}

bool AccessConfigDeatilCreate::includeK8sLabelsLogicalIsSet() const
{
    return includeK8sLabelsLogicalIsSet_;
}

void AccessConfigDeatilCreate::unsetincludeK8sLabelsLogical()
{
    includeK8sLabelsLogicalIsSet_ = false;
}

std::string AccessConfigDeatilCreate::getExcludeK8sLabelsLogical() const
{
    return excludeK8sLabelsLogical_;
}

void AccessConfigDeatilCreate::setExcludeK8sLabelsLogical(const std::string& value)
{
    excludeK8sLabelsLogical_ = value;
    excludeK8sLabelsLogicalIsSet_ = true;
}

bool AccessConfigDeatilCreate::excludeK8sLabelsLogicalIsSet() const
{
    return excludeK8sLabelsLogicalIsSet_;
}

void AccessConfigDeatilCreate::unsetexcludeK8sLabelsLogical()
{
    excludeK8sLabelsLogicalIsSet_ = false;
}

std::string AccessConfigDeatilCreate::getIncludeEnvsLogical() const
{
    return includeEnvsLogical_;
}

void AccessConfigDeatilCreate::setIncludeEnvsLogical(const std::string& value)
{
    includeEnvsLogical_ = value;
    includeEnvsLogicalIsSet_ = true;
}

bool AccessConfigDeatilCreate::includeEnvsLogicalIsSet() const
{
    return includeEnvsLogicalIsSet_;
}

void AccessConfigDeatilCreate::unsetincludeEnvsLogical()
{
    includeEnvsLogicalIsSet_ = false;
}

std::string AccessConfigDeatilCreate::getExcludeEnvsLogical() const
{
    return excludeEnvsLogical_;
}

void AccessConfigDeatilCreate::setExcludeEnvsLogical(const std::string& value)
{
    excludeEnvsLogical_ = value;
    excludeEnvsLogicalIsSet_ = true;
}

bool AccessConfigDeatilCreate::excludeEnvsLogicalIsSet() const
{
    return excludeEnvsLogicalIsSet_;
}

void AccessConfigDeatilCreate::unsetexcludeEnvsLogical()
{
    excludeEnvsLogicalIsSet_ = false;
}

}
}
}
}
}


