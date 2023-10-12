
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_DeleteServerGroupMemberRequestBody_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_DeleteServerGroupMemberRequestBody_H_


#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ecs/v2/model/ServerGroupMember.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// This is a auto create Body Object
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  DeleteServerGroupMemberRequestBody
    : public ModelBase
{
public:
    DeleteServerGroupMemberRequestBody();
    virtual ~DeleteServerGroupMemberRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteServerGroupMemberRequestBody members

    /// <summary>
    /// 
    /// </summary>

    ServerGroupMember getRemoveMember() const;
    bool removeMemberIsSet() const;
    void unsetremoveMember();
    void setRemoveMember(const ServerGroupMember& value);


protected:
    ServerGroupMember removeMember_;
    bool removeMemberIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_DeleteServerGroupMemberRequestBody_H_
