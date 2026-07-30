

#include "huaweicloud/modelarts/v1/model/LogExportPath.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




LogExportPath::LogExportPath()
{
    obsUrl_ = "";
    obsUrlIsSet_ = false;
    hostPath_ = "";
    hostPathIsSet_ = false;
}

LogExportPath::~LogExportPath() = default;

void LogExportPath::validate()
{
}

web::json::value LogExportPath::toJson() const
{
    web::json::value val = web::json::value::object();

    if(obsUrlIsSet_) {
        val[utility::conversions::to_string_t("obs_url")] = ModelBase::toJson(obsUrl_);
    }
    if(hostPathIsSet_) {
        val[utility::conversions::to_string_t("host_path")] = ModelBase::toJson(hostPath_);
    }

    return val;
}
bool LogExportPath::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("obs_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("obs_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObsUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("host_path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("host_path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHostPath(refVal);
        }
    }
    return ok;
}


std::string LogExportPath::getObsUrl() const
{
    return obsUrl_;
}

void LogExportPath::setObsUrl(const std::string& value)
{
    obsUrl_ = value;
    obsUrlIsSet_ = true;
}

bool LogExportPath::obsUrlIsSet() const
{
    return obsUrlIsSet_;
}

void LogExportPath::unsetobsUrl()
{
    obsUrlIsSet_ = false;
}

std::string LogExportPath::getHostPath() const
{
    return hostPath_;
}

void LogExportPath::setHostPath(const std::string& value)
{
    hostPath_ = value;
    hostPathIsSet_ = true;
}

bool LogExportPath::hostPathIsSet() const
{
    return hostPathIsSet_;
}

void LogExportPath::unsethostPath()
{
    hostPathIsSet_ = false;
}

}
}
}
}
}


