
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowTransferPolicyResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowTransferPolicyResponse_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/TransferPolicy.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ShowTransferPolicyResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowTransferPolicyResponse();
    virtual ~ShowTransferPolicyResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowTransferPolicyResponse members

    /// <summary>
    /// 转储策略列表
    /// </summary>

    std::vector<TransferPolicy>& getPolicies();
    bool policiesIsSet() const;
    void unsetpolicies();
    void setPolicies(const std::vector<TransferPolicy>& value);


protected:
    std::vector<TransferPolicy> policies_;
    bool policiesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowTransferPolicyResponse_H_
