
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_ObjectsCompareTaskInfo_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_ObjectsCompareTaskInfo_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v5/model/ObjectsCompareOverviewInfo.h>
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
/// 对象级对比任务信息体。
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  ObjectsCompareTaskInfo
    : public ModelBase
{
public:
    ObjectsCompareTaskInfo();
    virtual ~ObjectsCompareTaskInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ObjectsCompareTaskInfo members

    /// <summary>
    /// 对比任务创建时间。
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);

    /// <summary>
    /// 对比结果。
    /// </summary>

    std::vector<ObjectsCompareOverviewInfo>& getCompareResults();
    bool compareResultsIsSet() const;
    void unsetcompareResults();
    void setCompareResults(const std::vector<ObjectsCompareOverviewInfo>& value);

    /// <summary>
    /// 对比任务开始时间。
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// 对比任务状态。取值： - RUNNING：运行中。 - WAITING_FOR_RUNNING：等待启动中。 - SUCCESSFUL：完成。 - FAILED：失败。 - CANCELLED：已取消。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 导出比对结果状态。
    /// </summary>

    std::string getExportStatus() const;
    bool exportStatusIsSet() const;
    void unsetexportStatus();
    void setExportStatus(const std::string& value);

    /// <summary>
    /// 导出比对结果有效期剩余时间。
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


protected:
    std::string createTime_;
    bool createTimeIsSet_;
    std::vector<ObjectsCompareOverviewInfo> compareResults_;
    bool compareResultsIsSet_;
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

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_ObjectsCompareTaskInfo_H_
