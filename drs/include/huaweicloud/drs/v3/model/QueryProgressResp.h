
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
    /// 任务Id
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// 迁移百分比
    /// </summary>

    std::string getProgress() const;
    bool progressIsSet() const;
    void unsetprogress();
    void setProgress(const std::string& value);

    /// <summary>
    /// 增量迁移时延。单位：s
    /// </summary>

    std::string getIncreTransDelay() const;
    bool increTransDelayIsSet() const;
    void unsetincreTransDelay();
    void setIncreTransDelay(const std::string& value);

    /// <summary>
    /// 增量迁移时延。单位：ms
    /// </summary>

    std::string getIncreTransDelayMillis() const;
    bool increTransDelayMillisIsSet() const;
    void unsetincreTransDelayMillis();
    void setIncreTransDelayMillis(const std::string& value);

    /// <summary>
    /// 迁移模式。 - FULL_TRANS: 全量 - INCR_TRANS: 增量 - FULL_INCR_TRANS: 全量+增量
    /// </summary>

    std::string getTaskMode() const;
    bool taskModeIsSet() const;
    void unsettaskMode();
    void setTaskMode(const std::string& value);

    /// <summary>
    /// 任务状态 CREATING：创建中，CREATE_FAILED：创建失败，CONFIGURATION：配置中，WAITING_FOR_START：等待启动中，RELEASE_RESOURCE_COMPLETE：已结束，DELETED：已删除，INCRE_TRANSFER_STARTED：增量迁移中，INCRE_TRANSFER_FAILED：增量迁移失败，FULL_TRANSFER_STARTED：全量迁移中，FULL_TRANSFER_COMPLETE：全量迁移完成，PAUSING：暂停中，FULL_TRANSFER_FAILED：全量迁移失败
    /// </summary>

    std::string getTransferStatus() const;
    bool transferStatusIsSet() const;
    void unsettransferStatus();
    void setTransferStatus(const std::string& value);

    /// <summary>
    /// 迁移时间，时间戳
    /// </summary>

    std::string getProcessTime() const;
    bool processTimeIsSet() const;
    void unsetprocessTime();
    void setProcessTime(const std::string& value);

    /// <summary>
    /// 预计剩余时间
    /// </summary>

    std::string getRemainingTime() const;
    bool remainingTimeIsSet() const;
    void unsetremainingTime();
    void setRemainingTime(const std::string& value);

    /// <summary>
    /// 数据，结构，索引迁移进度信息体
    /// </summary>

    std::map<std::string, ProgressInfo>& getProgressMap();
    bool progressMapIsSet() const;
    void unsetprogressMap();
    void setProgressMap(const std::map<std::string, ProgressInfo>& value);

    /// <summary>
    /// 错误码
    /// </summary>

    std::string getErrorCode() const;
    bool errorCodeIsSet() const;
    void unseterrorCode();
    void setErrorCode(const std::string& value);

    /// <summary>
    /// 错误信息
    /// </summary>

    std::string getErrorMsg() const;
    bool errorMsgIsSet() const;
    void unseterrorMsg();
    void setErrorMsg(const std::string& value);


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

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_QueryProgressResp_H_
