
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_CreateVaultResponse_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_CreateVaultResponse_H_

#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cbr/v1/model/VaultCreateResource.h>

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
class HUAWEICLOUD_CBR_V1_EXPORT  CreateVaultResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateVaultResponse();
    virtual ~CreateVaultResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateVaultResponse members

    /// <summary>
    /// 
    /// </summary>

    VaultCreateResource getVault() const;
    bool vaultIsSet() const;
    void unsetvault();
    void setVault(const VaultCreateResource& value);


protected:
    VaultCreateResource vault_;
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

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_CreateVaultResponse_H_
