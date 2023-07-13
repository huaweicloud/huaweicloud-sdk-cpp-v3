
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_DisassociateVaultPolicyResponse_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_DisassociateVaultPolicyResponse_H_

#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cbr/v1/model/VaultPolicyResp.h>

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
class HUAWEICLOUD_CBR_V1_EXPORT  DisassociateVaultPolicyResponse
    : public ModelBase, public HttpResponse
{
public:
    DisassociateVaultPolicyResponse();
    virtual ~DisassociateVaultPolicyResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// DisassociateVaultPolicyResponse members

    /// <summary>
    /// 
    /// </summary>

    VaultPolicyResp getDissociatePolicy() const;
    bool dissociatePolicyIsSet() const;
    void unsetdissociatePolicy();
    void setDissociatePolicy(const VaultPolicyResp& value);


protected:
    VaultPolicyResp dissociatePolicy_;
    bool dissociatePolicyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_DisassociateVaultPolicyResponse_H_
