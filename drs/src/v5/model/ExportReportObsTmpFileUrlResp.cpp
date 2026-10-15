

#include "huaweicloud/drs/v5/model/ExportReportObsTmpFileUrlResp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ExportReportObsTmpFileUrlResp::ExportReportObsTmpFileUrlResp()
{
    fileName_ = "";
    fileNameIsSet_ = false;
    obsTempUri_ = "";
    obsTempUriIsSet_ = false;
}

ExportReportObsTmpFileUrlResp::~ExportReportObsTmpFileUrlResp() = default;

void ExportReportObsTmpFileUrlResp::validate()
{
}

web::json::value ExportReportObsTmpFileUrlResp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(fileNameIsSet_) {
        val[utility::conversions::to_string_t("file_name")] = ModelBase::toJson(fileName_);
    }
    if(obsTempUriIsSet_) {
        val[utility::conversions::to_string_t("obs_temp_uri")] = ModelBase::toJson(obsTempUri_);
    }

    return val;
}
bool ExportReportObsTmpFileUrlResp::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("file_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFileName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("obs_temp_uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("obs_temp_uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObsTempUri(refVal);
        }
    }
    return ok;
}


std::string ExportReportObsTmpFileUrlResp::getFileName() const
{
    return fileName_;
}

void ExportReportObsTmpFileUrlResp::setFileName(const std::string& value)
{
    fileName_ = value;
    fileNameIsSet_ = true;
}

bool ExportReportObsTmpFileUrlResp::fileNameIsSet() const
{
    return fileNameIsSet_;
}

void ExportReportObsTmpFileUrlResp::unsetfileName()
{
    fileNameIsSet_ = false;
}

std::string ExportReportObsTmpFileUrlResp::getObsTempUri() const
{
    return obsTempUri_;
}

void ExportReportObsTmpFileUrlResp::setObsTempUri(const std::string& value)
{
    obsTempUri_ = value;
    obsTempUriIsSet_ = true;
}

bool ExportReportObsTmpFileUrlResp::obsTempUriIsSet() const
{
    return obsTempUriIsSet_;
}

void ExportReportObsTmpFileUrlResp::unsetobsTempUri()
{
    obsTempUriIsSet_ = false;
}

}
}
}
}
}


