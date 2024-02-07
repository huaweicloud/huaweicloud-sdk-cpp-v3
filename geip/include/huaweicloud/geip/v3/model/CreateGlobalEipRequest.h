
#ifndef HUAWEICLOUD_SDK_GEIP_V3_MODEL_CreateGlobalEipRequest_H_
#define HUAWEICLOUD_SDK_GEIP_V3_MODEL_CreateGlobalEipRequest_H_


#include <huaweicloud/geip/v3/GeipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/geip/v3/model/CreateGlobalEipRequestBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_GEIP_V3_EXPORT  CreateGlobalEipRequest
    : public ModelBase
{
public:
    CreateGlobalEipRequest();
    virtual ~CreateGlobalEipRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateGlobalEipRequest members

    /// <summary>
    /// 
    /// </summary>

    CreateGlobalEipRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CreateGlobalEipRequestBody& value);


protected:
    CreateGlobalEipRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateGlobalEipRequest& dereference_from_shared_ptr(std::shared_ptr<CreateGlobalEipRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GEIP_V3_MODEL_CreateGlobalEipRequest_H_
