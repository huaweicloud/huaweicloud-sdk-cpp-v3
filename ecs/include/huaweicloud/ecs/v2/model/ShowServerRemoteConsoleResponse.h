
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_ShowServerRemoteConsoleResponse_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_ShowServerRemoteConsoleResponse_H_

#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ecs/v2/model/ServerRemoteConsole.h>

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
class HUAWEICLOUD_ECS_V2_EXPORT  ShowServerRemoteConsoleResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowServerRemoteConsoleResponse();
    virtual ~ShowServerRemoteConsoleResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowServerRemoteConsoleResponse members

    /// <summary>
    /// 
    /// </summary>

    ServerRemoteConsole getRemoteConsole() const;
    bool remoteConsoleIsSet() const;
    void unsetremoteConsole();
    void setRemoteConsole(const ServerRemoteConsole& value);


protected:
    ServerRemoteConsole remoteConsole_;
    bool remoteConsoleIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_ShowServerRemoteConsoleResponse_H_
