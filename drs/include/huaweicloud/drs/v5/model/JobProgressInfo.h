
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_JobProgressInfo_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_JobProgressInfo_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/drs/v5/model/ProgressCompleteInfo.h>
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
/// 任务进度信息。
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  JobProgressInfo
    : public ModelBase
{
public:
    JobProgressInfo();
    virtual ~JobProgressInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// JobProgressInfo members

    /// <summary>
    /// 迁移对比百分比。
    /// </summary>

    std::string getProgress() const;
    bool progressIsSet() const;
    void unsetprogress();
    void setProgress(const std::string& value);

    /// <summary>
    /// 增量迁移时延（单位：s）。
    /// </summary>

    std::string getIncrTransDelay() const;
    bool incrTransDelayIsSet() const;
    void unsetincrTransDelay();
    void setIncrTransDelay(const std::string& value);

    /// <summary>
    /// 增量迁移时延（单位：ms）。
    /// </summary>

    std::string getIncrTransDelayMillis() const;
    bool incrTransDelayMillisIsSet() const;
    void unsetincrTransDelayMillis();
    void setIncrTransDelayMillis(const std::string& value);

    /// <summary>
    /// 迁移模式。
    /// </summary>

    std::string getTaskMode() const;
    bool taskModeIsSet() const;
    void unsettaskMode();
    void setTaskMode(const std::string& value);

    /// <summary>
    /// 迁移状态。 CREATING:创建中 - CREATE_FAILED:创建失败 - CONFIGURATION:配置中 - STARTJOBING:启动中 - WAITING_FOR_START:等待启动中 - START_JOB_FAILED:启动失败 - PAUSING:已暂停 - FULL_TRANSFER_STARTED:全量开始,灾备场景下为初始化 - FULL_TRANSFER_FAILED:全量失败,灾备场景下为初始化失败 - FULL_TRANSFER_COMPLETE:全量完成,灾备场景下为初始化完成 - INCRE_TRANSFER_STARTED:增量开始,灾备场景下为灾备中 - INCRE_TRANSFER_FAILED:增量失败,灾备场景下为灾备异常 - RELEASE_RESOURCE_STARTED:结束任务中 - RELEASE_RESOURCE_FAILED:结束任务失败 - RELEASE_RESOURCE_COMPLETE:已结束 - REBUILD_NODE_STARTED:故障恢复中 - REBUILD_NODE_FAILED:故障恢复失败 - CHANGE_JOB_STARTED:任务变更中 - CHANGE_JOB_FAILED:任务变更失败 - DELETED:已删除 - CHILD_TRANSFER_STARTING:再编辑子任务启动中 - CHILD_TRANSFER_STARTED:再编辑子任务迁移中 - CHILD_TRANSFER_COMPLETE:再编辑子任务迁移完成 - CHILD_TRANSFER_FAILED:再编辑子任务迁移失败 - RELEASE_CHILD_TRANSFER_STARTED:再编辑子任务结束中 - RELEASE_CHILD_TRANSFER_COMPLETE:再编辑子任务已结束 - NODE_UPGRADE_START:升级开始 - NODE_UPGRADE_COMPLETE:升级完成 - NODE_UPGRADE_FAILED:升级失败
    /// </summary>

    std::string getTransferStatus() const;
    bool transferStatusIsSet() const;
    void unsettransferStatus();
    void setTransferStatus(const std::string& value);

    /// <summary>
    /// 迁移时间。
    /// </summary>

    std::string getProcessTime() const;
    bool processTimeIsSet() const;
    void unsetprocessTime();
    void setProcessTime(const std::string& value);

    /// <summary>
    /// 预计剩余时间。
    /// </summary>

    std::string getRemainingTime() const;
    bool remainingTimeIsSet() const;
    void unsetremainingTime();
    void setRemainingTime(const std::string& value);

    /// <summary>
    /// 全量迁移进度详情。
    /// </summary>

    std::map<std::string, ProgressCompleteInfo>& getProgressMap();
    bool progressMapIsSet() const;
    void unsetprogressMap();
    void setProgressMap(const std::map<std::string, ProgressCompleteInfo>& value);


protected:
    std::string progress_;
    bool progressIsSet_;
    std::string incrTransDelay_;
    bool incrTransDelayIsSet_;
    std::string incrTransDelayMillis_;
    bool incrTransDelayMillisIsSet_;
    std::string taskMode_;
    bool taskModeIsSet_;
    std::string transferStatus_;
    bool transferStatusIsSet_;
    std::string processTime_;
    bool processTimeIsSet_;
    std::string remainingTime_;
    bool remainingTimeIsSet_;
    std::map<std::string, ProgressCompleteInfo> progressMap_;
    bool progressMapIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_JobProgressInfo_H_
