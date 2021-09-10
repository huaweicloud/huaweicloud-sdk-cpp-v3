
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_ShowServerGroupRequest_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_ShowServerGroupRequest_H_

#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

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
class HUAWEICLOUD_ECS_V2_EXPORT  ShowServerGroupRequest
    : public ModelBase
{
public:
    ShowServerGroupRequest();
    virtual ~ShowServerGroupRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowServerGroupRequest members

    /// <summary>
    /// 弹性云服务器组UUID。
    /// </summary>

    std::string getServerGroupId() const;
    bool serverGroupIdIsSet() const;
    void unsetserverGroupId();
    void setServerGroupId(const std::string& value);


protected:
    std::string serverGroupId_;
    bool serverGroupIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowServerGroupRequest& dereference_from_shared_ptr(std::shared_ptr<ShowServerGroupRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_ShowServerGroupRequest_H_
