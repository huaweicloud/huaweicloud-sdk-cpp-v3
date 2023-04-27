

#include "huaweicloud/lts/v2/model/AccessConfigDeatil.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




AccessConfigDeatil::AccessConfigDeatil()
{
    pathsIsSet_ = false;
    blackPathsIsSet_ = false;
    formatIsSet_ = false;
    windowsLogInfoIsSet_ = false;
}

AccessConfigDeatil::~AccessConfigDeatil() = default;

void AccessConfigDeatil::validate()
{
}

web::json::value AccessConfigDeatil::toJson() const
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

    return val;
}

bool AccessConfigDeatil::fromJson(const web::json::value& val)
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
            AccessConfigFormat refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFormat(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("windows_log_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("windows_log_info"));
        if(!fieldValue.is_null())
        {
            AccessConfigWindowsLogInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWindowsLogInfo(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& AccessConfigDeatil::getPaths()
{
    return paths_;
}

void AccessConfigDeatil::setPaths(const std::vector<std::string>& value)
{
    paths_ = value;
    pathsIsSet_ = true;
}

bool AccessConfigDeatil::pathsIsSet() const
{
    return pathsIsSet_;
}

void AccessConfigDeatil::unsetpaths()
{
    pathsIsSet_ = false;
}

std::vector<std::string>& AccessConfigDeatil::getBlackPaths()
{
    return blackPaths_;
}

void AccessConfigDeatil::setBlackPaths(const std::vector<std::string>& value)
{
    blackPaths_ = value;
    blackPathsIsSet_ = true;
}

bool AccessConfigDeatil::blackPathsIsSet() const
{
    return blackPathsIsSet_;
}

void AccessConfigDeatil::unsetblackPaths()
{
    blackPathsIsSet_ = false;
}

AccessConfigFormat AccessConfigDeatil::getFormat() const
{
    return format_;
}

void AccessConfigDeatil::setFormat(const AccessConfigFormat& value)
{
    format_ = value;
    formatIsSet_ = true;
}

bool AccessConfigDeatil::formatIsSet() const
{
    return formatIsSet_;
}

void AccessConfigDeatil::unsetformat()
{
    formatIsSet_ = false;
}

AccessConfigWindowsLogInfo AccessConfigDeatil::getWindowsLogInfo() const
{
    return windowsLogInfo_;
}

void AccessConfigDeatil::setWindowsLogInfo(const AccessConfigWindowsLogInfo& value)
{
    windowsLogInfo_ = value;
    windowsLogInfoIsSet_ = true;
}

bool AccessConfigDeatil::windowsLogInfoIsSet() const
{
    return windowsLogInfoIsSet_;
}

void AccessConfigDeatil::unsetwindowsLogInfo()
{
    windowsLogInfoIsSet_ = false;
}

}
}
}
}
}


