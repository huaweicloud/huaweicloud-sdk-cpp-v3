
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_AssociateServerVirtualIpRequest_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_AssociateServerVirtualIpRequest_H_


#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/ecs/v2/model/AssociateServerVirtualIpRequestBody.h>

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
class HUAWEICLOUD_ECS_V2_EXPORT  AssociateServerVirtualIpRequest
    : public ModelBase
{
public:
    AssociateServerVirtualIpRequest();
    virtual ~AssociateServerVirtualIpRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AssociateServerVirtualIpRequest members

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

    AssociateServerVirtualIpRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const AssociateServerVirtualIpRequestBody& value);


protected:
    std::string nicId_;
    bool nicIdIsSet_;
    AssociateServerVirtualIpRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    AssociateServerVirtualIpRequest& dereference_from_shared_ptr(std::shared_ptr<AssociateServerVirtualIpRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_AssociateServerVirtualIpRequest_H_
