
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_UpdateServerInterfaceRequest_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_UpdateServerInterfaceRequest_H_


#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/ecs/v2/model/UpdateNicInfoRequestBody.h>

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
class HUAWEICLOUD_ECS_V2_EXPORT  UpdateServerInterfaceRequest
    : public ModelBase
{
public:
    UpdateServerInterfaceRequest();
    virtual ~UpdateServerInterfaceRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateServerInterfaceRequest members

    /// <summary>
    /// 云服务器ID。
    /// </summary>

    std::string getServerId() const;
    bool serverIdIsSet() const;
    void unsetserverId();
    void setServerId(const std::string& value);

    /// <summary>
    /// The network card ID of the cloud server.
    /// </summary>

    std::string getPortId() const;
    bool portIdIsSet() const;
    void unsetportId();
    void setPortId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UpdateNicInfoRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const UpdateNicInfoRequestBody& value);


protected:
    std::string serverId_;
    bool serverIdIsSet_;
    std::string portId_;
    bool portIdIsSet_;
    UpdateNicInfoRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateServerInterfaceRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateServerInterfaceRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_UpdateServerInterfaceRequest_H_
