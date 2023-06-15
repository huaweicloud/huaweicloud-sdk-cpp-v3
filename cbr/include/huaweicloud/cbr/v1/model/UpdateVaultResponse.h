
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_UpdateVaultResponse_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_UpdateVaultResponse_H_

#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cbr/v1/model/Vault.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  UpdateVaultResponse
    : public ModelBase, public HttpResponse
{
public:
    UpdateVaultResponse();
    virtual ~UpdateVaultResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// UpdateVaultResponse members

    /// <summary>
    /// 
    /// </summary>

    Vault getVault() const;
    bool vaultIsSet() const;
    void unsetvault();
    void setVault(const Vault& value);


protected:
    Vault vault_;
    bool vaultIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_UpdateVaultResponse_H_
