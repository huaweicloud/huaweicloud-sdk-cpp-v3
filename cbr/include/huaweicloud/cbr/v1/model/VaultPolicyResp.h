
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_VaultPolicyResp_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_VaultPolicyResp_H_


#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 绑定策略返回体
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  VaultPolicyResp
    : public ModelBase
{
public:
    VaultPolicyResp();
    virtual ~VaultPolicyResp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// VaultPolicyResp members

    /// <summary>
    /// 目标region的vault ID，仅设置复制策略时有。
    /// </summary>

    std::string getDestinationVaultId() const;
    bool destinationVaultIdIsSet() const;
    void unsetdestinationVaultId();
    void setDestinationVaultId(const std::string& value);

    /// <summary>
    /// 设置的策略ID
    /// </summary>

    std::string getPolicyId() const;
    bool policyIdIsSet() const;
    void unsetpolicyId();
    void setPolicyId(const std::string& value);

    /// <summary>
    /// 设置策略的vault ID
    /// </summary>

    std::string getVaultId() const;
    bool vaultIdIsSet() const;
    void unsetvaultId();
    void setVaultId(const std::string& value);


protected:
    std::string destinationVaultId_;
    bool destinationVaultIdIsSet_;
    std::string policyId_;
    bool policyIdIsSet_;
    std::string vaultId_;
    bool vaultIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_VaultPolicyResp_H_
