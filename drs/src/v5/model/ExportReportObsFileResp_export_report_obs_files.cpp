

#include "huaweicloud/drs/v5/model/ExportReportObsFileResp_export_report_obs_files.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ExportReportObsFileResp_export_report_obs_files::ExportReportObsFileResp_export_report_obs_files()
{
    fileName_ = "";
    fileNameIsSet_ = false;
    lastModified_ = "";
    lastModifiedIsSet_ = false;
}

ExportReportObsFileResp_export_report_obs_files::~ExportReportObsFileResp_export_report_obs_files() = default;

void ExportReportObsFileResp_export_report_obs_files::validate()
{
}

web::json::value ExportReportObsFileResp_export_report_obs_files::toJson() const
{
    web::json::value val = web::json::value::object();

    if(fileNameIsSet_) {
        val[utility::conversions::to_string_t("file_name")] = ModelBase::toJson(fileName_);
    }
    if(lastModifiedIsSet_) {
        val[utility::conversions::to_string_t("last_modified")] = ModelBase::toJson(lastModified_);
    }

    return val;
}
bool ExportReportObsFileResp_export_report_obs_files::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("last_modified"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_modified"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastModified(refVal);
        }
    }
    return ok;
}


std::string ExportReportObsFileResp_export_report_obs_files::getFileName() const
{
    return fileName_;
}

void ExportReportObsFileResp_export_report_obs_files::setFileName(const std::string& value)
{
    fileName_ = value;
    fileNameIsSet_ = true;
}

bool ExportReportObsFileResp_export_report_obs_files::fileNameIsSet() const
{
    return fileNameIsSet_;
}

void ExportReportObsFileResp_export_report_obs_files::unsetfileName()
{
    fileNameIsSet_ = false;
}

std::string ExportReportObsFileResp_export_report_obs_files::getLastModified() const
{
    return lastModified_;
}

void ExportReportObsFileResp_export_report_obs_files::setLastModified(const std::string& value)
{
    lastModified_ = value;
    lastModifiedIsSet_ = true;
}

bool ExportReportObsFileResp_export_report_obs_files::lastModifiedIsSet() const
{
    return lastModifiedIsSet_;
}

void ExportReportObsFileResp_export_report_obs_files::unsetlastModified()
{
    lastModifiedIsSet_ = false;
}

}
}
}
}
}


