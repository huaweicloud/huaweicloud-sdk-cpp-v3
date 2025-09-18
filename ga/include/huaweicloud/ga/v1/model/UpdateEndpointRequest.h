
#ifndef HUAWEICLOUD_SDK_GA_V1_MODEL_UpdateEndpointRequest_H_
#define HUAWEICLOUD_SDK_GA_V1_MODEL_UpdateEndpointRequest_H_


#include <huaweicloud/ga/v1/GaExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/ga/v1/model/UpdateEndpointRequestBody.h>

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
class HUAWEICLOUD_GA_V1_EXPORT  UpdateEndpointRequest
    : public ModelBase
{
public:
    UpdateEndpointRequest();
    virtual ~UpdateEndpointRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateEndpointRequest members

    /// <summary>
    /// 终端节点组ID。
    /// </summary>

    std::string getEndpointGroupId() const;
    bool endpointGroupIdIsSet() const;
    void unsetendpointGroupId();
    void setEndpointGroupId(const std::string& value);

    /// <summary>
    /// 终端节点ID。
    /// </summary>

    std::string getEndpointId() const;
    bool endpointIdIsSet() const;
    void unsetendpointId();
    void setEndpointId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UpdateEndpointRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const UpdateEndpointRequestBody& value);


protected:
    std::string endpointGroupId_;
    bool endpointGroupIdIsSet_;
    std::string endpointId_;
    bool endpointIdIsSet_;
    UpdateEndpointRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateEndpointRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateEndpointRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GA_V1_MODEL_UpdateEndpointRequest_H_
