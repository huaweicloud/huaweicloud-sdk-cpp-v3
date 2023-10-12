
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_AssociateVaultPolicyResponse_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_AssociateVaultPolicyResponse_H_


#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
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
class HUAWEICLOUD_CBR_V1_EXPORT  AssociateVaultPolicyResponse
    : public ModelBase, public HttpResponse
{
public:
    AssociateVaultPolicyResponse();
    virtual ~AssociateVaultPolicyResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AssociateVaultPolicyResponse members

    /// <summary>
    /// 
    /// </summary>

    VaultPolicyResp getAssociatePolicy() const;
    bool associatePolicyIsSet() const;
    void unsetassociatePolicy();
    void setAssociatePolicy(const VaultPolicyResp& value);


protected:
    VaultPolicyResp associatePolicy_;
    bool associatePolicyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_AssociateVaultPolicyResponse_H_
