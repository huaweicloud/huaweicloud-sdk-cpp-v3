
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_ExportReportObsFileResp_export_report_obs_files_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_ExportReportObsFileResp_export_report_obs_files_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  ExportReportObsFileResp_export_report_obs_files
    : public ModelBase
{
public:
    ExportReportObsFileResp_export_report_obs_files();
    virtual ~ExportReportObsFileResp_export_report_obs_files();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ExportReportObsFileResp_export_report_obs_files members

    /// <summary>
    /// 文件名称。
    /// </summary>

    std::string getFileName() const;
    bool fileNameIsSet() const;
    void unsetfileName();
    void setFileName(const std::string& value);

    /// <summary>
    /// 最后修改时间。
    /// </summary>

    std::string getLastModified() const;
    bool lastModifiedIsSet() const;
    void unsetlastModified();
    void setLastModified(const std::string& value);


protected:
    std::string fileName_;
    bool fileNameIsSet_;
    std::string lastModified_;
    bool lastModifiedIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_ExportReportObsFileResp_export_report_obs_files_H_
