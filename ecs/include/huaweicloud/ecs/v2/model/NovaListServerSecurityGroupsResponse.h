
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaListServerSecurityGroupsResponse_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaListServerSecurityGroupsResponse_H_


#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ecs/v2/model/NovaSecurityGroup.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  NovaListServerSecurityGroupsResponse
    : public ModelBase, public HttpResponse
{
public:
    NovaListServerSecurityGroupsResponse();
    virtual ~NovaListServerSecurityGroupsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NovaListServerSecurityGroupsResponse members

    /// <summary>
    /// security_group列表
    /// </summary>

    std::vector<NovaSecurityGroup>& getSecurityGroups();
    bool securityGroupsIsSet() const;
    void unsetsecurityGroups();
    void setSecurityGroups(const std::vector<NovaSecurityGroup>& value);


protected:
    std::vector<NovaSecurityGroup> securityGroups_;
    bool securityGroupsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaListServerSecurityGroupsResponse_H_
