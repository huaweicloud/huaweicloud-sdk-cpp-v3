
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_UpdateSlowlogSensitiveStatusRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_UpdateSlowlogSensitiveStatusRequestBody_H_


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
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  UpdateSlowlogSensitiveStatusRequestBody
    : public ModelBase
{
public:
    UpdateSlowlogSensitiveStatusRequestBody();
    virtual ~UpdateSlowlogSensitiveStatusRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateSlowlogSensitiveStatusRequestBody members

    /// <summary>
    /// **参数解释**：  慢日志开关状态。  **约束限制**：  不涉及。  **取值范围**： - true，开启。 - false，关闭。            **默认取值**：  不涉及。
    /// </summary>

    bool isOpenSlowLogSwitch() const;
    bool openSlowLogSwitchIsSet() const;
    void unsetopenSlowLogSwitch();
    void setOpenSlowLogSwitch(bool value);


protected:
    bool openSlowLogSwitch_;
    bool openSlowLogSwitchIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_UpdateSlowlogSensitiveStatusRequestBody_H_
