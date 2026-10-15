
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_QueryProgressResp_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_QueryProgressResp_H_


#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/drs/v3/model/ProgressInfo.h>
#include <map>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 获取指定任务迁移进度响应体
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  QueryProgressResp
    : public ModelBase
{
public:
    QueryProgressResp();
    virtual ~QueryProgressResp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// QueryProgressResp members

    /// <summary>
    /// **参数解释**：  迁移任务ID，用于唯一标识一个数据复制任务，在查询、修改、删除等操作中作为任务的识别凭证。  **约束限制**：  不涉及。  **取值范围**：  UUID格式字符串。  **默认取值**：  不涉及
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// **参数解释**：  迁移百分比，表示当前任务的数据迁移完成进度。  **约束限制**：  不涉及。  **取值范围**：  0-100。  **默认取值**：  不涉及
    /// </summary>

    std::string getProgress() const;
    bool progressIsSet() const;
    void unsetprogress();
    void setProgress(const std::string& value);

    /// <summary>
    /// **参数解释**：  增量迁移时延。当任务处于增量阶段时，该值表示源库与目标库之间的数据同步延迟。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及
    /// </summary>

    std::string getIncreTransDelay() const;
    bool increTransDelayIsSet() const;
    void unsetincreTransDelay();
    void setIncreTransDelay(const std::string& value);

    /// <summary>
    /// **参数解释**：  增量迁移时延，与incre_trans_delay含义相同，但以毫秒为单位提供更精确的时延信息。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及
    /// </summary>

    std::string getIncreTransDelayMillis() const;
    bool increTransDelayMillisIsSet() const;
    void unsetincreTransDelayMillis();
    void setIncreTransDelayMillis(const std::string& value);

    /// <summary>
    /// **参数解释**：  任务迁移模式，指定数据复制任务的执行方式。  **约束限制**：  单主灾备场景仅支持选择FULL_INCR_TRANS（全量+增量）。  **取值范围**：  - FULL_TRANS：全量迁移，仅迁移历史数据，迁移完成后任务结束 - INCR_TRANS：增量迁移，仅同步新增数据变更，适用于持续同步场景 - FULL_INCR_TRANS：全量+增量迁移，先迁移历史数据再持续同步增量，适用于平滑切换场景  **默认取值**：  不涉及
    /// </summary>

    std::string getTaskMode() const;
    bool taskModeIsSet() const;
    void unsettaskMode();
    void setTaskMode(const std::string& value);

    /// <summary>
    /// **参数解释**：  任务当前传输状态，表示数据迁移任务所处的运行阶段，可用于判断任务是否正常推进。  **约束限制**：  不涉及。  **取值范围**：  - CREATING：创建中 - CREATE_FAILED：创建失败 - CONFIGURATION：配置中 - WAITING_FOR_START：等待启动中 - RELEASE_RESOURCE_COMPLETE：已结束 - DELETED：已删除 - INCRE_TRANSFER_STARTED：增量迁移中 - INCRE_TRANSFER_FAILED：增量迁移失败 - FULL_TRANSFER_STARTED：全量迁移中 - FULL_TRANSFER_COMPLETE：全量迁移完成 - PAUSING：暂停中 - FULL_TRANSFER_FAILED：全量迁移失败  **默认取值**：  不涉及
    /// </summary>

    std::string getTransferStatus() const;
    bool transferStatusIsSet() const;
    void unsettransferStatus();
    void setTransferStatus(const std::string& value);

    /// <summary>
    /// **参数解释**：  迁移时间，格式为毫秒级Unix时间戳，表示任务最近一次进度更新时间。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及
    /// </summary>

    std::string getProcessTime() const;
    bool processTimeIsSet() const;
    void unsetprocessTime();
    void setProcessTime(const std::string& value);

    /// <summary>
    /// **参数解释**：  预计剩余完成时间，单位为秒。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及
    /// </summary>

    std::string getRemainingTime() const;
    bool remainingTimeIsSet() const;
    void unsetremainingTime();
    void setRemainingTime(const std::string& value);

    /// <summary>
    /// **参数解释**：  数据、结构、索引迁移进度信息体，详情请参见ProgressInfo定义。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及
    /// </summary>

    std::map<std::string, ProgressInfo>& getProgressMap();
    bool progressMapIsSet() const;
    void unsetprogressMap();
    void setProgressMap(const std::map<std::string, ProgressInfo>& value);

    /// <summary>
    /// **参数解释**：  错误码，当任务报错时返回的错误代码。  **约束限制**：  不涉及。  **取值范围**：  格式为DRS.XXXXXX。  **默认取值**：  不涉及
    /// </summary>

    std::string getErrorCode() const;
    bool errorCodeIsSet() const;
    void unseterrorCode();
    void setErrorCode(const std::string& value);

    /// <summary>
    /// **参数解释**：  错误详细信息，当任务执行失败时返回的具体错误描述。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及
    /// </summary>

    std::string getErrorMsg() const;
    bool errorMsgIsSet() const;
    void unseterrorMsg();
    void setErrorMsg(const std::string& value);

    /// <summary>
    /// **参数解释**：  增量迁移RPS。  **约束限制**：  值为-1时代表任务尚未进入到增量状态。  **取值范围**：  不涉及。  **默认取值**：  不涉及
    /// </summary>

    int64_t getApplyRowsRate() const;
    bool applyRowsRateIsSet() const;
    void unsetapplyRowsRate();
    void setApplyRowsRate(int64_t value);

    /// <summary>
    /// **参数解释**：  增量迁移网络流量。  **约束限制**：  值为-1时代表任务尚未进入到增量状态。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    int64_t getApplyBytesRate() const;
    bool applyBytesRateIsSet() const;
    void unsetapplyBytesRate();
    void setApplyBytesRate(int64_t value);


protected:
    std::string jobId_;
    bool jobIdIsSet_;
    std::string progress_;
    bool progressIsSet_;
    std::string increTransDelay_;
    bool increTransDelayIsSet_;
    std::string increTransDelayMillis_;
    bool increTransDelayMillisIsSet_;
    std::string taskMode_;
    bool taskModeIsSet_;
    std::string transferStatus_;
    bool transferStatusIsSet_;
    std::string processTime_;
    bool processTimeIsSet_;
    std::string remainingTime_;
    bool remainingTimeIsSet_;
    std::map<std::string, ProgressInfo> progressMap_;
    bool progressMapIsSet_;
    std::string errorCode_;
    bool errorCodeIsSet_;
    std::string errorMsg_;
    bool errorMsgIsSet_;
    int64_t applyRowsRate_;
    bool applyRowsRateIsSet_;
    int64_t applyBytesRate_;
    bool applyBytesRateIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_QueryProgressResp_H_
