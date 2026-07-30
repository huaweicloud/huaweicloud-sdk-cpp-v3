

#include "huaweicloud/modelarts/v1/model/LogExportPathResp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




LogExportPathResp::LogExportPathResp()
{
    obsUrl_ = "";
    obsUrlIsSet_ = false;
    hostPath_ = "";
    hostPathIsSet_ = false;
}

LogExportPathResp::~LogExportPathResp() = default;

void LogExportPathResp::validate()
{
}

web::json::value LogExportPathResp::toJson() const
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
bool LogExportPathResp::fromJson(const web::json::value& val)
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


std::string LogExportPathResp::getObsUrl() const
{
    return obsUrl_;
}

void LogExportPathResp::setObsUrl(const std::string& value)
{
    obsUrl_ = value;
    obsUrlIsSet_ = true;
}

bool LogExportPathResp::obsUrlIsSet() const
{
    return obsUrlIsSet_;
}

void LogExportPathResp::unsetobsUrl()
{
    obsUrlIsSet_ = false;
}

std::string LogExportPathResp::getHostPath() const
{
    return hostPath_;
}

void LogExportPathResp::setHostPath(const std::string& value)
{
    hostPath_ = value;
    hostPathIsSet_ = true;
}

bool LogExportPathResp::hostPathIsSet() const
{
    return hostPathIsSet_;
}

void LogExportPathResp::unsethostPath()
{
    hostPathIsSet_ = false;
}

}
}
}
}
}


