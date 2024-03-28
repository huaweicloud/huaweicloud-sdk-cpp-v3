
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_OrganizationPolicyUpdateReq_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_OrganizationPolicyUpdateReq_H_


#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cbr/v1/model/OrganizationPolicyUpdate.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 更新组织策略请求体
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  OrganizationPolicyUpdateReq
    : public ModelBase
{
public:
    OrganizationPolicyUpdateReq();
    virtual ~OrganizationPolicyUpdateReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// OrganizationPolicyUpdateReq members

    /// <summary>
    /// 
    /// </summary>

    OrganizationPolicyUpdate getPolicy() const;
    bool policyIsSet() const;
    void unsetpolicy();
    void setPolicy(const OrganizationPolicyUpdate& value);


protected:
    OrganizationPolicyUpdate policy_;
    bool policyIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_OrganizationPolicyUpdateReq_H_
