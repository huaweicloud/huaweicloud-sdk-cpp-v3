
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_UpdateRecycleBinPolicyReq_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_UpdateRecycleBinPolicyReq_H_


#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ecs/v2/model/UpdateRecycleBinPolicyOption.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  UpdateRecycleBinPolicyReq
    : public ModelBase
{
public:
    UpdateRecycleBinPolicyReq();
    virtual ~UpdateRecycleBinPolicyReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateRecycleBinPolicyReq members

    /// <summary>
    /// 
    /// </summary>

    UpdateRecycleBinPolicyOption getPolicy() const;
    bool policyIsSet() const;
    void unsetpolicy();
    void setPolicy(const UpdateRecycleBinPolicyOption& value);


protected:
    UpdateRecycleBinPolicyOption policy_;
    bool policyIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_UpdateRecycleBinPolicyReq_H_
