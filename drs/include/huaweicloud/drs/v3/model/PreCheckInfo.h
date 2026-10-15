
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_PreCheckInfo_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_PreCheckInfo_H_


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
/// 预检查信息体
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  PreCheckInfo
    : public ModelBase
{
public:
    PreCheckInfo();
    virtual ~PreCheckInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PreCheckInfo members

    /// <summary>
    /// **参数解释**：  迁移任务ID，用于唯一标识一个数据复制任务，在查询、修改、删除等操作中作为任务的识别凭证。  **约束限制**：  不涉及。  **取值范围**：  UUID格式字符串。  **默认取值**：  不涉及
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// **参数解释**：  预检查模式，指定执行预检查的场景类型。请按照任务对应的状态传值，否则可能导致预检查失败，影响任务启动。  **约束限制**：  不涉及。  **取值范围**：  - forStartJob：任务配置中首次启动时预检查 - forRetryJob：任务增量中编辑对象后预检查，或任务失败后重试时预检查  **默认取值**：  不涉及
    /// </summary>

    std::string getPrecheckMode() const;
    bool precheckModeIsSet() const;
    void unsetprecheckMode();
    void setPrecheckMode(const std::string& value);


protected:
    std::string jobId_;
    bool jobIdIsSet_;
    std::string precheckMode_;
    bool precheckModeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_PreCheckInfo_H_
