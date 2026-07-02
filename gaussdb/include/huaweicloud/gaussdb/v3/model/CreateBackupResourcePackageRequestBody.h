
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CreateBackupResourcePackageRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CreateBackupResourcePackageRequestBody_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/gaussdb/v3/model/TaurusDbChargeInfo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**:  创建备份资源包请求体。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  CreateBackupResourcePackageRequestBody
    : public ModelBase
{
public:
    CreateBackupResourcePackageRequestBody();
    virtual ~CreateBackupResourcePackageRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateBackupResourcePackageRequestBody members

    /// <summary>
    /// **参数解释**：  备份资源包规格码。  **约束限制**：  不涉及。  **取值范围**：  备份资源包规格码可根据[查询备份资源包规格](https://support.huaweicloud.com/api-taurusdb/ShowBackupResourcePackageFlavors.html)接口获取。  **默认取值**：  不涉及。
    /// </summary>

    std::string getSpecCode() const;
    bool specCodeIsSet() const;
    void unsetspecCode();
    void setSpecCode(const std::string& value);

    /// <summary>
    /// **参数解释**：  备份资源包数量。  **约束限制**：  不涉及。  **取值范围**：  1-10。  **默认取值**：  不涉及。
    /// </summary>

    int32_t getNum() const;
    bool numIsSet() const;
    void unsetnum();
    void setNum(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    TaurusDbChargeInfo getChargeInfo() const;
    bool chargeInfoIsSet() const;
    void unsetchargeInfo();
    void setChargeInfo(const TaurusDbChargeInfo& value);


protected:
    std::string specCode_;
    bool specCodeIsSet_;
    int32_t num_;
    bool numIsSet_;
    TaurusDbChargeInfo chargeInfo_;
    bool chargeInfoIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CreateBackupResourcePackageRequestBody_H_
