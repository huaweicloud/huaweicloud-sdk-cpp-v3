
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_ShowServerRemoteConsoleRequestBody_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_ShowServerRemoteConsoleRequestBody_H_


#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ecs/v2/model/GetServerRemoteConsoleOption.h>

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
class HUAWEICLOUD_ECS_V2_EXPORT  ShowServerRemoteConsoleRequestBody
    : public ModelBase
{
public:
    ShowServerRemoteConsoleRequestBody();
    virtual ~ShowServerRemoteConsoleRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowServerRemoteConsoleRequestBody members

    /// <summary>
    /// 
    /// </summary>

    GetServerRemoteConsoleOption getRemoteConsole() const;
    bool remoteConsoleIsSet() const;
    void unsetremoteConsole();
    void setRemoteConsole(const GetServerRemoteConsoleOption& value);


protected:
    GetServerRemoteConsoleOption remoteConsole_;
    bool remoteConsoleIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_ShowServerRemoteConsoleRequestBody_H_
