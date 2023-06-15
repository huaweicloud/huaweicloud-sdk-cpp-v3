
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_BatchUpdateVaultRequestBody_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_BatchUpdateVaultRequestBody_H_

#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cbr/v1/model/VaultBatchUpdate.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 存储库批量修改参数体
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  BatchUpdateVaultRequestBody
    : public ModelBase
{
public:
    BatchUpdateVaultRequestBody();
    virtual ~BatchUpdateVaultRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// BatchUpdateVaultRequestBody members

    /// <summary>
    /// 
    /// </summary>

    VaultBatchUpdate getVault() const;
    bool vaultIsSet() const;
    void unsetvault();
    void setVault(const VaultBatchUpdate& value);


protected:
    VaultBatchUpdate vault_;
    bool vaultIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_BatchUpdateVaultRequestBody_H_
