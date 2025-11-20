
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_CheckTaskStatus_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_CheckTaskStatus_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cce/v3/model/CheckTaskRisk.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  CheckTaskStatus
    : public ModelBase
{
public:
    CheckTaskStatus();
    virtual ~CheckTaskStatus();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CheckTaskStatus members

    /// <summary>
    /// **参数解释：** 插件检查状态 **取值范围：** - Init: 插件检查状态，初始化 - Running: 插件检查状态，检查中 - Failed: 插件检查状态，检查完成有风险 - Success: 插件检查状态，检查完成无风险  
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// **参数解释：** 插件检查结果信息 **取值范围：** 不涉及 
    /// </summary>

    std::string getMessage() const;
    bool messageIsSet() const;
    void unsetmessage();
    void setMessage(const std::string& value);

    /// <summary>
    /// **参数解释：** 插件检查风险项列表，不同插件对应的风险检查项不同。 **约束限制：** 不涉及 
    /// </summary>

    std::vector<CheckTaskRisk>& getRiskList();
    bool riskListIsSet() const;
    void unsetriskList();
    void setRiskList(const std::vector<CheckTaskRisk>& value);


protected:
    std::string status_;
    bool statusIsSet_;
    std::string message_;
    bool messageIsSet_;
    std::vector<CheckTaskRisk> riskList_;
    bool riskListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_CheckTaskStatus_H_
