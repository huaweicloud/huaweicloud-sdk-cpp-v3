
#ifndef HUAWEICLOUD_SDK_AAD_V1_MODEL_BatchTransferRuleBody_H_
#define HUAWEICLOUD_SDK_AAD_V1_MODEL_BatchTransferRuleBody_H_


#include <huaweicloud/aad/v1/AadExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/aad/v1/model/TransferRuleBody.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 批量转发规则
/// </summary>
class HUAWEICLOUD_AAD_V1_EXPORT  BatchTransferRuleBody
    : public ModelBase
{
public:
    BatchTransferRuleBody();
    virtual ~BatchTransferRuleBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchTransferRuleBody members

    /// <summary>
    /// 批量转发规则
    /// </summary>

    std::vector<TransferRuleBody>& getRules();
    bool rulesIsSet() const;
    void unsetrules();
    void setRules(const std::vector<TransferRuleBody>& value);


protected:
    std::vector<TransferRuleBody> rules_;
    bool rulesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_AAD_V1_MODEL_BatchTransferRuleBody_H_
