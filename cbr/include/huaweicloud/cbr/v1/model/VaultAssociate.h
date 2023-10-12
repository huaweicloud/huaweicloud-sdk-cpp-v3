
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_VaultAssociate_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_VaultAssociate_H_


#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  VaultAssociate
    : public ModelBase
{
public:
    VaultAssociate();
    virtual ~VaultAssociate();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// VaultAssociate members

    /// <summary>
    /// 目标vault ID , 只有设置复制策略时使用，而且必传
    /// </summary>

    std::string getDestinationVaultId() const;
    bool destinationVaultIdIsSet() const;
    void unsetdestinationVaultId();
    void setDestinationVaultId(const std::string& value);

    /// <summary>
    /// 策略ID。policy_id字段与add_policy_ids字段在一次请求中有且只有一个。
    /// </summary>

    std::string getPolicyId() const;
    bool policyIdIsSet() const;
    void unsetpolicyId();
    void setPolicyId(const std::string& value);

    /// <summary>
    /// 多策略场景下，绑定新策略的id列表。policy_id字段与add_policy_ids字段在一次请求中有且只有一个。
    /// </summary>

    std::vector<std::string>& getAddPolicyIds();
    bool addPolicyIdsIsSet() const;
    void unsetaddPolicyIds();
    void setAddPolicyIds(const std::vector<std::string>& value);


protected:
    std::string destinationVaultId_;
    bool destinationVaultIdIsSet_;
    std::string policyId_;
    bool policyIdIsSet_;
    std::vector<std::string> addPolicyIds_;
    bool addPolicyIdsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_VaultAssociate_H_
