
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_ChangeVpcSecurityGroups_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_ChangeVpcSecurityGroups_H_


#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>

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
class HUAWEICLOUD_ECS_V2_EXPORT  ChangeVpcSecurityGroups
    : public ModelBase
{
public:
    ChangeVpcSecurityGroups();
    virtual ~ChangeVpcSecurityGroups();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ChangeVpcSecurityGroups members

    /// <summary>
    /// 安全组id
    /// </summary>

    Object getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const Object& value);


protected:
    Object id_;
    bool idIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_ChangeVpcSecurityGroups_H_
