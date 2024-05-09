
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_ActionParams_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_ActionParams_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v5/model/CompareTaskParams.h>
#include <huaweicloud/drs/v5/model/JobEndpointInfo.h>
#include <string>
#include <huaweicloud/drs/v5/model/ReplayConfigInfo.h>
#include <huaweicloud/drs/v5/model/SkipPreCheckInfo.h>
#include <vector>
#include <huaweicloud/drs/v5/model/PublicIpConfig.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 操作任务动作参数。
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  ActionParams
    : public ModelBase
{
public:
    ActionParams();
    virtual ~ActionParams();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ActionParams members

    /// <summary>
    /// 测试连接数据库信息。
    /// </summary>

    std::vector<JobEndpointInfo>& getEndpoints();
    bool endpointsIsSet() const;
    void unsetendpoints();
    void setEndpoints(const std::vector<JobEndpointInfo>& value);

    /// <summary>
    /// 预检查模式。
    /// </summary>

    std::string getPrecheckMode() const;
    bool precheckModeIsSet() const;
    void unsetprecheckMode();
    void setPrecheckMode(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    SkipPreCheckInfo getSkipPrecheckInfo() const;
    bool skipPrecheckInfoIsSet() const;
    void unsetskipPrecheckInfo();
    void setSkipPrecheckInfo(const SkipPreCheckInfo& value);

    /// <summary>
    /// 任务暂停模式。
    /// </summary>

    std::string getPauseMode() const;
    bool pauseModeIsSet() const;
    void unsetpauseMode();
    void setPauseMode(const std::string& value);

    /// <summary>
    /// 任务定时启动时间。
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    CompareTaskParams getCompareTaskParam() const;
    bool compareTaskParamIsSet() const;
    void unsetcompareTaskParam();
    void setCompareTaskParam(const CompareTaskParams& value);

    /// <summary>
    /// 再编辑任务启动时取值true。
    /// </summary>

    bool isIsSyncReEdit() const;
    bool isSyncReEditIsSet() const;
    void unsetisSyncReEdit();
    void setIsSyncReEdit(bool value);

    /// <summary>
    /// 强制结束时取值为true。
    /// </summary>

    bool isForceDelete() const;
    bool forceDeleteIsSet() const;
    void unsetforceDelete();
    void setForceDelete(bool value);

    /// <summary>
    /// 
    /// </summary>

    PublicIpConfig getPublicIpConfig() const;
    bool publicIpConfigIsSet() const;
    void unsetpublicIpConfig();
    void setPublicIpConfig(const PublicIpConfig& value);

    /// <summary>
    /// 
    /// </summary>

    ReplayConfigInfo getReplayConfig() const;
    bool replayConfigIsSet() const;
    void unsetreplayConfig();
    void setReplayConfig(const ReplayConfigInfo& value);


protected:
    std::vector<JobEndpointInfo> endpoints_;
    bool endpointsIsSet_;
    std::string precheckMode_;
    bool precheckModeIsSet_;
    SkipPreCheckInfo skipPrecheckInfo_;
    bool skipPrecheckInfoIsSet_;
    std::string pauseMode_;
    bool pauseModeIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;
    CompareTaskParams compareTaskParam_;
    bool compareTaskParamIsSet_;
    bool isSyncReEdit_;
    bool isSyncReEditIsSet_;
    bool forceDelete_;
    bool forceDeleteIsSet_;
    PublicIpConfig publicIpConfig_;
    bool publicIpConfigIsSet_;
    ReplayConfigInfo replayConfig_;
    bool replayConfigIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_ActionParams_H_
