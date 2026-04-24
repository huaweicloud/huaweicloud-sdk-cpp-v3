
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowReplayReportExportStatusResponse_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowReplayReportExportStatusResponse_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

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
class HUAWEICLOUD_DRS_V5_EXPORT  ShowReplayReportExportStatusResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowReplayReportExportStatusResponse();
    virtual ~ShowReplayReportExportStatusResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowReplayReportExportStatusResponse members

    /// <summary>
    /// 导出状态。取值范围： - EXPORTING ：导出中 - EXPORT_COMPLETE ：导出完成 - EXPORT_COMMON_FAILED ：导出失败
    /// </summary>

    std::string getExportStatus() const;
    bool exportStatusIsSet() const;
    void unsetexportStatus();
    void setExportStatus(const std::string& value);

    /// <summary>
    /// 任务id
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// 导出的sql文件类型。取值范围： - abnormal_sql ：异常sql列表 - error_sql_detail ：异常sql详情 - slow_sql ：慢sql列表 - slow_sql_detail ： 慢sql详情
    /// </summary>

    std::string getFileType() const;
    bool fileTypeIsSet() const;
    void unsetfileType();
    void setFileType(const std::string& value);

    /// <summary>
    /// 失败原因
    /// </summary>

    std::string getFailedReason() const;
    bool failedReasonIsSet() const;
    void unsetfailedReason();
    void setFailedReason(const std::string& value);

    /// <summary>
    /// 导出的数据总量
    /// </summary>

    int64_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int64_t value);

    /// <summary>
    /// 当前已经处理数据量
    /// </summary>

    int64_t getCurrentCount() const;
    bool currentCountIsSet() const;
    void unsetcurrentCount();
    void setCurrentCount(int64_t value);

    /// <summary>
    /// 任务进度百分数
    /// </summary>

    int32_t getProgressPercentage() const;
    bool progressPercentageIsSet() const;
    void unsetprogressPercentage();
    void setProgressPercentage(int32_t value);

    /// <summary>
    /// 已经上传到obs的文件名称
    /// </summary>

    std::vector<std::string>& getUploadedFileNames();
    bool uploadedFileNamesIsSet() const;
    void unsetuploadedFileNames();
    void setUploadedFileNames(const std::vector<std::string>& value);


protected:
    std::string exportStatus_;
    bool exportStatusIsSet_;
    std::string jobId_;
    bool jobIdIsSet_;
    std::string fileType_;
    bool fileTypeIsSet_;
    std::string failedReason_;
    bool failedReasonIsSet_;
    int64_t totalCount_;
    bool totalCountIsSet_;
    int64_t currentCount_;
    bool currentCountIsSet_;
    int32_t progressPercentage_;
    bool progressPercentageIsSet_;
    std::vector<std::string> uploadedFileNames_;
    bool uploadedFileNamesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowReplayReportExportStatusResponse_H_
