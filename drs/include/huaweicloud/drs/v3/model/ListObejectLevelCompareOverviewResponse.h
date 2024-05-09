
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_ListObejectLevelCompareOverviewResponse_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_ListObejectLevelCompareOverviewResponse_H_


#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v3/model/ObjectsCompareOverviewInfo.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  ListObejectLevelCompareOverviewResponse
    : public ModelBase, public HttpResponse
{
public:
    ListObejectLevelCompareOverviewResponse();
    virtual ~ListObejectLevelCompareOverviewResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListObejectLevelCompareOverviewResponse members

    /// <summary>
    /// 对比任务创建时间，UTC时间，例如：2024-04-09T07:00:57Z。
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);

    /// <summary>
    /// 对比任务开始时间，UTC时间，例如：2024-04-09T07:00:57Z。
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// 对比任务状态。 取值： - RUNNING：运行中。 - WAITING_FOR_RUNNING：等待启动中。 - SUCCESSFUL：完成。 - FAILED：失败。 - CANCELLED：已取消。 - TIMEOUT_INTERRUPT：超时中断。 - FULL_DOING：全量校验中。 - INCRE_DOING：增量校验中。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 生成对比结果报告文件的状态：  - INIT：初始状态。  - EXPORTING：对比结果导出中。  - EXPORT_COMPLETE：对比结果导出完成。  - EXPORT_COMMON_FAILED：对比结果导出失败。
    /// </summary>

    std::string getExportStatus() const;
    bool exportStatusIsSet() const;
    void unsetexportStatus();
    void setExportStatus(const std::string& value);

    /// <summary>
    /// 对比结果报告文件有效期剩余时间，单位秒，报告未生成时返回-1。
    /// </summary>

    int64_t getReportRemainSeconds() const;
    bool reportRemainSecondsIsSet() const;
    void unsetreportRemainSeconds();
    void setReportRemainSeconds(int64_t value);

    /// <summary>
    /// 对比任务ID。
    /// </summary>

    std::string getCompareJobId() const;
    bool compareJobIdIsSet() const;
    void unsetcompareJobId();
    void setCompareJobId(const std::string& value);

    /// <summary>
    /// 失败原因。
    /// </summary>

    std::string getErrorMsg() const;
    bool errorMsgIsSet() const;
    void unseterrorMsg();
    void setErrorMsg(const std::string& value);

    /// <summary>
    /// 对比结果。
    /// </summary>

    std::vector<ObjectsCompareOverviewInfo>& getCompareResult();
    bool compareResultIsSet() const;
    void unsetcompareResult();
    void setCompareResult(const std::vector<ObjectsCompareOverviewInfo>& value);


protected:
    std::string createTime_;
    bool createTimeIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string exportStatus_;
    bool exportStatusIsSet_;
    int64_t reportRemainSeconds_;
    bool reportRemainSecondsIsSet_;
    std::string compareJobId_;
    bool compareJobIdIsSet_;
    std::string errorMsg_;
    bool errorMsgIsSet_;
    std::vector<ObjectsCompareOverviewInfo> compareResult_;
    bool compareResultIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_ListObejectLevelCompareOverviewResponse_H_
