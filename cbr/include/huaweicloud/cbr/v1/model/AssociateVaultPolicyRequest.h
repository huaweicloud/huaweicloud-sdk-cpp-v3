
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_AssociateVaultPolicyRequest_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_AssociateVaultPolicyRequest_H_


#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cbr/v1/model/VaultAssociate.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  AssociateVaultPolicyRequest
    : public ModelBase
{
public:
    AssociateVaultPolicyRequest();
    virtual ~AssociateVaultPolicyRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AssociateVaultPolicyRequest members

    /// <summary>
    /// 存储库ID
    /// </summary>

    std::string getVaultId() const;
    bool vaultIdIsSet() const;
    void unsetvaultId();
    void setVaultId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    VaultAssociate getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const VaultAssociate& value);


protected:
    std::string vaultId_;
    bool vaultIdIsSet_;
    VaultAssociate body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    AssociateVaultPolicyRequest& dereference_from_shared_ptr(std::shared_ptr<AssociateVaultPolicyRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_AssociateVaultPolicyRequest_H_
