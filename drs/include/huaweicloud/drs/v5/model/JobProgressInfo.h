
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_JobProgressInfo_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_JobProgressInfo_H_

#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
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
    /// 迁移状态。
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
