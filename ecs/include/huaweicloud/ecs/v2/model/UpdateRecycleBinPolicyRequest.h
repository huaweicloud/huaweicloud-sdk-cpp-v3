
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_UpdateRecycleBinPolicyRequest_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_UpdateRecycleBinPolicyRequest_H_


#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ecs/v2/model/UpdateRecycleBinPolicyReq.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  UpdateRecycleBinPolicyRequest
    : public ModelBase
{
public:
    UpdateRecycleBinPolicyRequest();
    virtual ~UpdateRecycleBinPolicyRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateRecycleBinPolicyRequest members

    /// <summary>
    /// 
    /// </summary>

    UpdateRecycleBinPolicyReq getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const UpdateRecycleBinPolicyReq& value);


protected:
    UpdateRecycleBinPolicyReq body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateRecycleBinPolicyRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateRecycleBinPolicyRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_UpdateRecycleBinPolicyRequest_H_
