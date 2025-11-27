
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_UpdateRecyclePolicyRequest_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_UpdateRecyclePolicyRequest_H_


#include <huaweicloud/evs/v2/EvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/evs/v2/model/ModifyRecycleBinPolicyRequestBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_EVS_V2_EXPORT  UpdateRecyclePolicyRequest
    : public ModelBase
{
public:
    UpdateRecyclePolicyRequest();
    virtual ~UpdateRecyclePolicyRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateRecyclePolicyRequest members

    /// <summary>
    /// 
    /// </summary>

    ModifyRecycleBinPolicyRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const ModifyRecycleBinPolicyRequestBody& value);


protected:
    ModifyRecycleBinPolicyRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateRecyclePolicyRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateRecyclePolicyRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_UpdateRecyclePolicyRequest_H_
