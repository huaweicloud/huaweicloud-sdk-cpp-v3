
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_StartInfo_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_StartInfo_H_


#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 启动任务请求体。
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  StartInfo
    : public ModelBase
{
public:
    StartInfo();
    virtual ~StartInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// StartInfo members

    /// <summary>
    /// **参数解释**：  迁移任务ID，用于唯一标识一个数据复制任务，在查询、修改、删除等操作中作为任务的识别凭证。  **约束限制**：  不涉及。  **取值范围**：  UUID格式字符串。  **默认取值**：  不涉及
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// **参数解释**：  是否只初始化任务，指定启动任务时是否仅执行初始化而不启动数据迁移。  **约束限制**：  - 仅支持白名单用户使用，需要提交工单申请才能使用。  **取值范围**：  - true：只初始化任务 - false：正常启动任务  **默认取值**：  false
    /// </summary>

    bool isIsOnlyInitTask() const;
    bool isOnlyInitTaskIsSet() const;
    void unsetisOnlyInitTask();
    void setIsOnlyInitTask(bool value);

    /// <summary>
    /// **参数解释**：  是否在任务结束时自动创建对比任务，指定任务完成后是否自动触发数据对比以验证迁移一致性。  **约束限制**：  不涉及。  **取值范围**：  - true：自动创建对比任务 - false：不自动创建对比任务  **默认取值**：  true
    /// </summary>

    bool isIsAutoCreateCompare() const;
    bool isAutoCreateCompareIsSet() const;
    void unsetisAutoCreateCompare();
    void setIsAutoCreateCompare(bool value);

    /// <summary>
    /// **参数解释**：  任务启动时间，指定任务开始执行的时间，时间戳格式精确到毫秒。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及，取值为空代表立即启动
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);


protected:
    std::string jobId_;
    bool jobIdIsSet_;
    bool isOnlyInitTask_;
    bool isOnlyInitTaskIsSet_;
    bool isAutoCreateCompare_;
    bool isAutoCreateCompareIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_StartInfo_H_
