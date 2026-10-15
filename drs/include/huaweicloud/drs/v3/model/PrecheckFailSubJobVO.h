
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_PrecheckFailSubJobVO_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_PrecheckFailSubJobVO_H_


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
/// 预检查失败子任务信息体
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  PrecheckFailSubJobVO
    : public ModelBase
{
public:
    PrecheckFailSubJobVO();
    virtual ~PrecheckFailSubJobVO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PrecheckFailSubJobVO members

    /// <summary>
    /// **参数解释**：  预检查失败子任务ID，用于唯一标识一个预检查失败的子任务。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释**：  预检查失败子任务的名称，用于标识失败的子任务。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**：  预检查失败子任务的检查结果，表示该子任务的检查是否通过。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及
    /// </summary>

    std::string getCheckResult() const;
    bool checkResultIsSet() const;
    void unsetcheckResult();
    void setCheckResult(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string checkResult_;
    bool checkResultIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_PrecheckFailSubJobVO_H_
