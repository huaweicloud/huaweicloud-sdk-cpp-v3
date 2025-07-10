
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_SetTransferPolicyRequestBody_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_SetTransferPolicyRequestBody_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/TransferPolicyParam.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 转储策略请求体
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  SetTransferPolicyRequestBody
    : public ModelBase
{
public:
    SetTransferPolicyRequestBody();
    virtual ~SetTransferPolicyRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SetTransferPolicyRequestBody members

    /// <summary>
    /// 自动转储策略
    /// </summary>

    std::vector<TransferPolicyParam>& getPolicy();
    bool policyIsSet() const;
    void unsetpolicy();
    void setPolicy(const std::vector<TransferPolicyParam>& value);


protected:
    std::vector<TransferPolicyParam> policy_;
    bool policyIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_SetTransferPolicyRequestBody_H_
