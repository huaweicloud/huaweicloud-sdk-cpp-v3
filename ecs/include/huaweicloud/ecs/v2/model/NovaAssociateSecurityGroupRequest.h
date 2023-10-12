
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaAssociateSecurityGroupRequest_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaAssociateSecurityGroupRequest_H_


#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ecs/v2/model/NovaAssociateSecurityGroupRequestBody.h>
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
class HUAWEICLOUD_ECS_V2_EXPORT  NovaAssociateSecurityGroupRequest
    : public ModelBase
{
public:
    NovaAssociateSecurityGroupRequest();
    virtual ~NovaAssociateSecurityGroupRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NovaAssociateSecurityGroupRequest members

    /// <summary>
    /// 弹性云服务器ID。
    /// </summary>

    std::string getServerId() const;
    bool serverIdIsSet() const;
    void unsetserverId();
    void setServerId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    NovaAssociateSecurityGroupRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const NovaAssociateSecurityGroupRequestBody& value);


protected:
    std::string serverId_;
    bool serverIdIsSet_;
    NovaAssociateSecurityGroupRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    NovaAssociateSecurityGroupRequest& dereference_from_shared_ptr(std::shared_ptr<NovaAssociateSecurityGroupRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaAssociateSecurityGroupRequest_H_
