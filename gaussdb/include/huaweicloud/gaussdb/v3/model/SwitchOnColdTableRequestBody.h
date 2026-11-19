
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_SwitchOnColdTableRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_SwitchOnColdTableRequestBody_H_


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
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  SwitchOnColdTableRequestBody
    : public ModelBase
{
public:
    SwitchOnColdTableRequestBody();
    virtual ~SwitchOnColdTableRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SwitchOnColdTableRequestBody members

    /// <summary>
    /// **参数解释**：  冷热分离开关状态。  **约束限制**：  开启冷热数据分离功能后，暂不支持关闭。  **取值范围**：  true：开启。  **默认取值**：  不涉及。
    /// </summary>

    bool isSwitchOn() const;
    bool switchOnIsSet() const;
    void unsetswitchOn();
    void setSwitchOn(bool value);


protected:
    bool switchOn_;
    bool switchOnIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_SwitchOnColdTableRequestBody_H_
