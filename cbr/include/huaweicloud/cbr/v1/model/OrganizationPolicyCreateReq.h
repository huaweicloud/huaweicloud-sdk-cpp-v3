
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_OrganizationPolicyCreateReq_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_OrganizationPolicyCreateReq_H_


#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cbr/v1/model/OrganizationPolicyCreate.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 组织策略请求体
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  OrganizationPolicyCreateReq
    : public ModelBase
{
public:
    OrganizationPolicyCreateReq();
    virtual ~OrganizationPolicyCreateReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// OrganizationPolicyCreateReq members

    /// <summary>
    /// 
    /// </summary>

    OrganizationPolicyCreate getPolicy() const;
    bool policyIsSet() const;
    void unsetpolicy();
    void setPolicy(const OrganizationPolicyCreate& value);


protected:
    OrganizationPolicyCreate policy_;
    bool policyIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_OrganizationPolicyCreateReq_H_
