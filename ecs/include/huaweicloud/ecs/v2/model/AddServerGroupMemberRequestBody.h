
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_AddServerGroupMemberRequestBody_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_AddServerGroupMemberRequestBody_H_

#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
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
class HUAWEICLOUD_ECS_V2_EXPORT  AddServerGroupMemberRequestBody
    : public ModelBase
{
public:
    AddServerGroupMemberRequestBody();
    virtual ~AddServerGroupMemberRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// AddServerGroupMemberRequestBody members

    /// <summary>
    /// 
    /// </summary>

    ServerGroupMember getAddMember() const;
    bool addMemberIsSet() const;
    void unsetaddMember();
    void setAddMember(const ServerGroupMember& value);


protected:
    ServerGroupMember addMember_;
    bool addMemberIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_AddServerGroupMemberRequestBody_H_
