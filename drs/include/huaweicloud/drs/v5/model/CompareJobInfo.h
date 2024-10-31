
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_CompareJobInfo_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_CompareJobInfo_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <map>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 对比列表信息体。
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  CompareJobInfo
    : public ModelBase
{
public:
    CompareJobInfo();
    virtual ~CompareJobInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CompareJobInfo members

    /// <summary>
    /// 对比任务ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 对比类型。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 开始时间。
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// 结束时间。
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);

    /// <summary>
    /// 对比任务的状态。取值： - RUNNING：运行中。 - WAITING_FOR_RUNNING：等待启动中。 - SUCCESSFUL：完成。 - FAILED：失败。 - CANCELLED：已取消。 - TIMEOUT_INTERRUPT：超时中断。 - FULL_DOING：全量校验中。 - INCRE_DOING：增量校验中。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 对比计算资源。
    /// </summary>

    std::string getComputeType() const;
    bool computeTypeIsSet() const;
    void unsetcomputeType();
    void setComputeType(const std::string& value);

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
    /// 对比任务的标签。
    /// </summary>

    std::map<std::string, std::string>& getCompareJobTag();
    bool compareJobTagIsSet() const;
    void unsetcompareJobTag();
    void setCompareJobTag(const std::map<std::string, std::string>& value);

    /// <summary>
    /// 对比任务选项。
    /// </summary>

    std::map<std::string, std::string>& getOptions();
    bool optionsIsSet() const;
    void unsetoptions();
    void setOptions(const std::map<std::string, std::string>& value);

    /// <summary>
    /// 失败原因。
    /// </summary>

    std::string getErrorMsg() const;
    bool errorMsgIsSet() const;
    void unseterrorMsg();
    void setErrorMsg(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string computeType_;
    bool computeTypeIsSet_;
    std::string exportStatus_;
    bool exportStatusIsSet_;
    int64_t reportRemainSeconds_;
    bool reportRemainSecondsIsSet_;
    std::map<std::string, std::string> compareJobTag_;
    bool compareJobTagIsSet_;
    std::map<std::string, std::string> options_;
    bool optionsIsSet_;
    std::string errorMsg_;
    bool errorMsgIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_CompareJobInfo_H_
