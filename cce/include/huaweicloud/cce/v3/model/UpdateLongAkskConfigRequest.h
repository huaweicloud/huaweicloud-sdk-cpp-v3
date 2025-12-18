
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_UpdateLongAkskConfigRequest_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_UpdateLongAkskConfigRequest_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/UpdateLongAKSKConfigRequestBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  UpdateLongAkskConfigRequest
    : public ModelBase
{
public:
    UpdateLongAkskConfigRequest();
    virtual ~UpdateLongAkskConfigRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateLongAkskConfigRequest members

    /// <summary>
    /// 
    /// </summary>

    UpdateLongAKSKConfigRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const UpdateLongAKSKConfigRequestBody& value);


protected:
    UpdateLongAKSKConfigRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateLongAkskConfigRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateLongAkskConfigRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_UpdateLongAkskConfigRequest_H_
