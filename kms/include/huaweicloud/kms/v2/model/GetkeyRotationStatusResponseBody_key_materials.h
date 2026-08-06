
#ifndef HUAWEICLOUD_SDK_KMS_V2_MODEL_GetkeyRotationStatusResponseBody_key_materials_H_
#define HUAWEICLOUD_SDK_KMS_V2_MODEL_GetkeyRotationStatusResponseBody_key_materials_H_


#include <huaweicloud/kms/v2/KmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_KMS_V2_EXPORT  GetkeyRotationStatusResponseBody_key_materials
    : public ModelBase
{
public:
    GetkeyRotationStatusResponseBody_key_materials();
    virtual ~GetkeyRotationStatusResponseBody_key_materials();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// GetkeyRotationStatusResponseBody_key_materials members

    /// <summary>
    /// **参数解释：** 密钥材料ID **取值范围：** uuid格式
    /// </summary>

    std::string getMaterialId() const;
    bool materialIdIsSet() const;
    void unsetmaterialId();
    void setMaterialId(const std::string& value);

    /// <summary>
    /// **参数解释：** 计费ID **取值范围：** 不涉及
    /// </summary>

    std::string getChargeId() const;
    bool chargeIdIsSet() const;
    void unsetchargeId();
    void setChargeId(const std::string& value);

    /// <summary>
    /// **参数解释：** 密钥材料创建时间 **取值范围：** 不涉及
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);

    /// <summary>
    /// **参数解释：** 密钥材料过期时间 **取值范围：** 不涉及
    /// </summary>

    std::string getExpirationTime() const;
    bool expirationTimeIsSet() const;
    void unsetexpirationTime();
    void setExpirationTime(const std::string& value);

    /// <summary>
    /// **参数解释：** 密钥材料状态 **取值范围：** 0：等待轮转状态；2：启用状态
    /// </summary>

    int32_t getState() const;
    bool stateIsSet() const;
    void unsetstate();
    void setState(int32_t value);


protected:
    std::string materialId_;
    bool materialIdIsSet_;
    std::string chargeId_;
    bool chargeIdIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;
    std::string expirationTime_;
    bool expirationTimeIsSet_;
    int32_t state_;
    bool stateIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KMS_V2_MODEL_GetkeyRotationStatusResponseBody_key_materials_H_
