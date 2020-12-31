
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_ServerGroupMember_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_ServerGroupMember_H_

#include <huaweicloud/ecs/EcsExport.h>

#include "huaweicloud/core/utils/ModelBase.h"
#include "huaweicloud/core/http/HttpResponse.h"

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// 云服务器组添加、删除成员列表
/// </summary>
class HUAWEICLOUD_ECS_EXPORT  ServerGroupMember
    : public ModelBase
{
public:
    ServerGroupMember();
    virtual ~ServerGroupMember();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ServerGroupMember members

    /// <summary>
    /// 云服务器UUID。
    /// </summary>

    std::string getInstanceUuid() const;
    bool instanceUuidIsSet() const;
    void unsetinstanceUuid();
    void setInstanceUuid(const std::string& value);


protected:
    std::string instanceUuid_;
    bool instanceUuidIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_ServerGroupMember_H_
