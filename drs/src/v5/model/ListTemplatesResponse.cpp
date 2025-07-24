

#include "huaweicloud/drs/v5/model/ListTemplatesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ListTemplatesResponse::ListTemplatesResponse()
{
    count_ = 0;
    countIsSet_ = false;
    exportReportObsFilesIsSet_ = false;
}

ListTemplatesResponse::~ListTemplatesResponse() = default;

void ListTemplatesResponse::validate()
{
}

web::json::value ListTemplatesResponse::toJson() const
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
bool ListTemplatesResponse::fromJson(const web::json::value& val)
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
            std::vector<ExportReportObsFileResp_export_report_obs_files> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExportReportObsFiles(refVal);
        }
    }
    return ok;
}


int32_t ListTemplatesResponse::getCount() const
{
    return count_;
}

void ListTemplatesResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ListTemplatesResponse::countIsSet() const
{
    return countIsSet_;
}

void ListTemplatesResponse::unsetcount()
{
    countIsSet_ = false;
}

std::vector<ExportReportObsFileResp_export_report_obs_files>& ListTemplatesResponse::getExportReportObsFiles()
{
    return exportReportObsFiles_;
}

void ListTemplatesResponse::setExportReportObsFiles(const std::vector<ExportReportObsFileResp_export_report_obs_files>& value)
{
    exportReportObsFiles_ = value;
    exportReportObsFilesIsSet_ = true;
}

bool ListTemplatesResponse::exportReportObsFilesIsSet() const
{
    return exportReportObsFilesIsSet_;
}

void ListTemplatesResponse::unsetexportReportObsFiles()
{
    exportReportObsFilesIsSet_ = false;
}

}
}
}
}
}


