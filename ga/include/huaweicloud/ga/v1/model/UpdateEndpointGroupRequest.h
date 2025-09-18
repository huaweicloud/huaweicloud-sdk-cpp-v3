
#ifndef HUAWEICLOUD_SDK_GA_V1_MODEL_UpdateEndpointGroupRequest_H_
#define HUAWEICLOUD_SDK_GA_V1_MODEL_UpdateEndpointGroupRequest_H_


#include <huaweicloud/ga/v1/GaExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ga/v1/model/UpdateEndpointGroupRequestBody.h>
#include <string>

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
class HUAWEICLOUD_GA_V1_EXPORT  UpdateEndpointGroupRequest
    : public ModelBase
{
public:
    UpdateEndpointGroupRequest();
    virtual ~UpdateEndpointGroupRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateEndpointGroupRequest members

    /// <summary>
    /// 终端节点组ID。
    /// </summary>

    std::string getEndpointGroupId() const;
    bool endpointGroupIdIsSet() const;
    void unsetendpointGroupId();
    void setEndpointGroupId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UpdateEndpointGroupRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const UpdateEndpointGroupRequestBody& value);


protected:
    std::string endpointGroupId_;
    bool endpointGroupIdIsSet_;
    UpdateEndpointGroupRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateEndpointGroupRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateEndpointGroupRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GA_V1_MODEL_UpdateEndpointGroupRequest_H_
