
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_ListTemplatesResponse_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_ListTemplatesResponse_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/drs/v5/model/ExportReportObsFileResp_export_report_obs_files.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  ListTemplatesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListTemplatesResponse();
    virtual ~ListTemplatesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListTemplatesResponse members

    /// <summary>
    /// 总数。
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);

    /// <summary>
    /// 文件列表。
    /// </summary>

    std::vector<ExportReportObsFileResp_export_report_obs_files>& getExportReportObsFiles();
    bool exportReportObsFilesIsSet() const;
    void unsetexportReportObsFiles();
    void setExportReportObsFiles(const std::vector<ExportReportObsFileResp_export_report_obs_files>& value);


protected:
    int32_t count_;
    bool countIsSet_;
    std::vector<ExportReportObsFileResp_export_report_obs_files> exportReportObsFiles_;
    bool exportReportObsFilesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_ListTemplatesResponse_H_
