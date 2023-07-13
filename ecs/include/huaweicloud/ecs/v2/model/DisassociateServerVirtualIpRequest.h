
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_DisassociateServerVirtualIpRequest_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_DisassociateServerVirtualIpRequest_H_

#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ecs/v2/model/DisassociateServerVirtualIpRequestBody.h>
#include <string>

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
class HUAWEICLOUD_ECS_V2_EXPORT  DisassociateServerVirtualIpRequest
    : public ModelBase
{
public:
    DisassociateServerVirtualIpRequest();
    virtual ~DisassociateServerVirtualIpRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// DisassociateServerVirtualIpRequest members

    /// <summary>
    /// 云服务器网卡ID。
    /// </summary>

    std::string getNicId() const;
    bool nicIdIsSet() const;
    void unsetnicId();
    void setNicId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    DisassociateServerVirtualIpRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const DisassociateServerVirtualIpRequestBody& value);


protected:
    std::string nicId_;
    bool nicIdIsSet_;
    DisassociateServerVirtualIpRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DisassociateServerVirtualIpRequest& dereference_from_shared_ptr(std::shared_ptr<DisassociateServerVirtualIpRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_DisassociateServerVirtualIpRequest_H_
