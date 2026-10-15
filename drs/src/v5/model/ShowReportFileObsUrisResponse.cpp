

#include "huaweicloud/drs/v5/model/ShowReportFileObsUrisResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ShowReportFileObsUrisResponse::ShowReportFileObsUrisResponse()
{
    count_ = 0;
    countIsSet_ = false;
    exportReportObsFilesIsSet_ = false;
}

ShowReportFileObsUrisResponse::~ShowReportFileObsUrisResponse() = default;

void ShowReportFileObsUrisResponse::validate()
{
}

web::json::value ShowReportFileObsUrisResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(exportReportObsFilesIsSet_) {
        val[utility::conversions::to_string_t("export_report_obs_files")] = ModelBase::toJson(exportReportObsFiles_);
    }

    return val;
}
bool ShowReportFileObsUrisResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("export_report_obs_files"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("export_report_obs_files"));
        if(!fieldValue.is_null())
        {
            std::vector<ExportReportObsTmpFileUrlResp> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExportReportObsFiles(refVal);
        }
    }
    return ok;
}


int32_t ShowReportFileObsUrisResponse::getCount() const
{
    return count_;
}

void ShowReportFileObsUrisResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ShowReportFileObsUrisResponse::countIsSet() const
{
    return countIsSet_;
}

void ShowReportFileObsUrisResponse::unsetcount()
{
    countIsSet_ = false;
}

std::vector<ExportReportObsTmpFileUrlResp>& ShowReportFileObsUrisResponse::getExportReportObsFiles()
{
    return exportReportObsFiles_;
}

void ShowReportFileObsUrisResponse::setExportReportObsFiles(const std::vector<ExportReportObsTmpFileUrlResp>& value)
{
    exportReportObsFiles_ = value;
    exportReportObsFilesIsSet_ = true;
}

bool ShowReportFileObsUrisResponse::exportReportObsFilesIsSet() const
{
    return exportReportObsFilesIsSet_;
}

void ShowReportFileObsUrisResponse::unsetexportReportObsFiles()
{
    exportReportObsFilesIsSet_ = false;
}

}
}
}
}
}


