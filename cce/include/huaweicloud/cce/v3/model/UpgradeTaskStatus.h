
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_UpgradeTaskStatus_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_UpgradeTaskStatus_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释：** 升级任务状态信息 **约束限制：** 不涉及 **取值范围：** 不涉及 **默认取值：** 不涉及 
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  UpgradeTaskStatus
    : public ModelBase
{
public:
    UpgradeTaskStatus();
    virtual ~UpgradeTaskStatus();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpgradeTaskStatus members

    /// <summary>
    /// **参数解释：** 升级任务状态 **约束限制：** 不涉及 **取值范围：** - Init：初始化 - Queuing：等待 - Running：运行中 - Pause：暂停 - Success：成功 - Failed：失败  **默认取值：** 不涉及 
    /// </summary>

    std::string getPhase() const;
    bool phaseIsSet() const;
    void unsetphase();
    void setPhase(const std::string& value);

    /// <summary>
    /// **参数解释：** 升级任务进度 **约束限制：** 不涉及 **取值范围：** 不涉及 **默认取值：** 不涉及 
    /// </summary>

    std::string getProgress() const;
    bool progressIsSet() const;
    void unsetprogress();
    void setProgress(const std::string& value);

    /// <summary>
    /// **参数解释：** 升级任务结束时间 **约束限制：** 不涉及 **取值范围：** 不涉及 **默认取值：** 不涉及 
    /// </summary>

    std::string getCompletionTime() const;
    bool completionTimeIsSet() const;
    void unsetcompletionTime();
    void setCompletionTime(const std::string& value);


protected:
    std::string phase_;
    bool phaseIsSet_;
    std::string progress_;
    bool progressIsSet_;
    std::string completionTime_;
    bool completionTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_UpgradeTaskStatus_H_
