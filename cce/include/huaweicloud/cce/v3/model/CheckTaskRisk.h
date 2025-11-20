
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_CheckTaskRisk_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_CheckTaskRisk_H_


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
/// 
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  CheckTaskRisk
    : public ModelBase
{
public:
    CheckTaskRisk();
    virtual ~CheckTaskRisk();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CheckTaskRisk members

    /// <summary>
    /// **参数解释：** 风险项名称 **取值范围：** 不涉及 
    /// </summary>

    std::string getRiskName() const;
    bool riskNameIsSet() const;
    void unsetriskName();
    void setRiskName(const std::string& value);

    /// <summary>
    /// **参数解释：** 风险等级 **取值范围：** - Warning: 中危，允许跳过 - Fatal: 高危，不允许跳过  
    /// </summary>

    std::string getLevel() const;
    bool levelIsSet() const;
    void unsetlevel();
    void setLevel(const std::string& value);

    /// <summary>
    /// **参数解释：** 风险项检查状态 **取值范围：** - Init: 风险项检查状态，初始化 - Running: 风险项检查状态，检查中 - Failed: 风险项检查状态，检查完成有风险 - Success: 风险项检查状态，检查完成无风险  
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// **参数解释：** 风险检查结果说明 **取值范围：** 不涉及 
    /// </summary>

    std::string getMessage() const;
    bool messageIsSet() const;
    void unsetmessage();
    void setMessage(const std::string& value);


protected:
    std::string riskName_;
    bool riskNameIsSet_;
    std::string level_;
    bool levelIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string message_;
    bool messageIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_CheckTaskRisk_H_
