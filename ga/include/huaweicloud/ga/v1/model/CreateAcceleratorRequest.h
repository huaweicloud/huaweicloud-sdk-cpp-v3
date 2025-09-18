
#ifndef HUAWEICLOUD_SDK_GA_V1_MODEL_CreateAcceleratorRequest_H_
#define HUAWEICLOUD_SDK_GA_V1_MODEL_CreateAcceleratorRequest_H_


#include <huaweicloud/ga/v1/GaExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ga/v1/model/CreateAcceleratorRequestBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_GA_V1_EXPORT  CreateAcceleratorRequest
    : public ModelBase
{
public:
    CreateAcceleratorRequest();
    virtual ~CreateAcceleratorRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateAcceleratorRequest members

    /// <summary>
    /// 
    /// </summary>

    CreateAcceleratorRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CreateAcceleratorRequestBody& value);


protected:
    CreateAcceleratorRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateAcceleratorRequest& dereference_from_shared_ptr(std::shared_ptr<CreateAcceleratorRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GA_V1_MODEL_CreateAcceleratorRequest_H_
