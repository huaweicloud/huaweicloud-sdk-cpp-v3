
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_ChangeServerNetworkInterfaceRequest_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_ChangeServerNetworkInterfaceRequest_H_


#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/ecs/v2/model/ChangeServerNetworkInterfaceRequestBody.h>

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
class HUAWEICLOUD_ECS_V2_EXPORT  ChangeServerNetworkInterfaceRequest
    : public ModelBase
{
public:
    ChangeServerNetworkInterfaceRequest();
    virtual ~ChangeServerNetworkInterfaceRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ChangeServerNetworkInterfaceRequest members

    /// <summary>
    /// 网卡port id
    /// </summary>

    std::string getPortId() const;
    bool portIdIsSet() const;
    void unsetportId();
    void setPortId(const std::string& value);

    /// <summary>
    /// 云服务器ID。
    /// </summary>

    std::string getServerId() const;
    bool serverIdIsSet() const;
    void unsetserverId();
    void setServerId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ChangeServerNetworkInterfaceRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const ChangeServerNetworkInterfaceRequestBody& value);


protected:
    std::string portId_;
    bool portIdIsSet_;
    std::string serverId_;
    bool serverIdIsSet_;
    ChangeServerNetworkInterfaceRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ChangeServerNetworkInterfaceRequest& dereference_from_shared_ptr(std::shared_ptr<ChangeServerNetworkInterfaceRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_ChangeServerNetworkInterfaceRequest_H_
