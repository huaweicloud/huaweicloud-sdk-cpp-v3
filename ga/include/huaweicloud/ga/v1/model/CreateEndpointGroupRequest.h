
#ifndef HUAWEICLOUD_SDK_GA_V1_MODEL_CreateEndpointGroupRequest_H_
#define HUAWEICLOUD_SDK_GA_V1_MODEL_CreateEndpointGroupRequest_H_


#include <huaweicloud/ga/v1/GaExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ga/v1/model/CreateEndpointGroupRequestBody.h>

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
class HUAWEICLOUD_GA_V1_EXPORT  CreateEndpointGroupRequest
    : public ModelBase
{
public:
    CreateEndpointGroupRequest();
    virtual ~CreateEndpointGroupRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateEndpointGroupRequest members

    /// <summary>
    /// 
    /// </summary>

    CreateEndpointGroupRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CreateEndpointGroupRequestBody& value);


protected:
    CreateEndpointGroupRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateEndpointGroupRequest& dereference_from_shared_ptr(std::shared_ptr<CreateEndpointGroupRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GA_V1_MODEL_CreateEndpointGroupRequest_H_
