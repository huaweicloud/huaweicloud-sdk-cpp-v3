
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_UpdateVectorStorageConfigReq_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_UpdateVectorStorageConfigReq_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  UpdateVectorStorageConfigReq
    : public ModelBase
{
public:
    UpdateVectorStorageConfigReq();
    virtual ~UpdateVectorStorageConfigReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateVectorStorageConfigReq members

    /// <summary>
    /// **参数解释**：  向量存储开关。true表示开启向量存储，false表示关闭向量存储。  **约束限制**：  不涉及。  **取值范围**：  - true - false **默认取值**：  不涉及。
    /// </summary>

    bool isVectorStorageSwitch() const;
    bool vectorStorageSwitchIsSet() const;
    void unsetvectorStorageSwitch();
    void setVectorStorageSwitch(bool value);


protected:
    bool vectorStorageSwitch_;
    bool vectorStorageSwitchIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_UpdateVectorStorageConfigReq_H_
