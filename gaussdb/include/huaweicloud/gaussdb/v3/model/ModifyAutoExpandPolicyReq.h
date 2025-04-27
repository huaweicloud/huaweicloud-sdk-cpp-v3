
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ModifyAutoExpandPolicyReq_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ModifyAutoExpandPolicyReq_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ModifyAutoExpandPolicyReq
    : public ModelBase
{
public:
    ModifyAutoExpandPolicyReq();
    virtual ~ModifyAutoExpandPolicyReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ModifyAutoExpandPolicyReq members

    /// <summary>
    /// **参数解释**：  自动扩容策略开关。  **取值范围**：  - true：表示开启。 - false：表示关闭。
    /// </summary>

    bool isSwitchOption() const;
    bool switchOptionIsSet() const;
    void unsetswitchOption();
    void setSwitchOption(bool value);

    /// <summary>
    /// **参数解释**：  存储自动扩容上限，需要为10的倍数，单位GB。  **取值范围**：  10 - 最大容量上限。  示例：500
    /// </summary>

    int32_t getLimitSize() const;
    bool limitSizeIsSet() const;
    void unsetlimitSize();
    void setLimitSize(int32_t value);

    /// <summary>
    /// **参数解释**：  可用存储空间率。  **取值范围**：  - 10 - 15 - 20
    /// </summary>

    int32_t getTriggerAvailablePercent() const;
    bool triggerAvailablePercentIsSet() const;
    void unsettriggerAvailablePercent();
    void setTriggerAvailablePercent(int32_t value);

    /// <summary>
    /// **参数解释**：  扩容步长百分比。  **取值范围**:   5 - 50
    /// </summary>

    int32_t getStepPercent() const;
    bool stepPercentIsSet() const;
    void unsetstepPercent();
    void setStepPercent(int32_t value);


protected:
    bool switchOption_;
    bool switchOptionIsSet_;
    int32_t limitSize_;
    bool limitSizeIsSet_;
    int32_t triggerAvailablePercent_;
    bool triggerAvailablePercentIsSet_;
    int32_t stepPercent_;
    bool stepPercentIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ModifyAutoExpandPolicyReq_H_
