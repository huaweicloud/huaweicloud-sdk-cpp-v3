
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_GetServerRemoteConsoleOption_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_GetServerRemoteConsoleOption_H_

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
/// 
/// </summary>
class HUAWEICLOUD_ECS_EXPORT  GetServerRemoteConsoleOption
    : public ModelBase
{
public:
    GetServerRemoteConsoleOption();
    virtual ~GetServerRemoteConsoleOption();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// GetServerRemoteConsoleOption members

    /// <summary>
    /// 远程登录协议，请将protocol配置为“vnc”。
    /// </summary>

    std::string getProtocol() const;
    bool protocolIsSet() const;
    void unsetprotocol();
    void setProtocol(const std::string& value);

    /// <summary>
    /// 远程登录的类型，请将type配置为“novnc”。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);


protected:
    std::string protocol_;
    bool protocolIsSet_;
    std::string type_;
    bool typeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_GetServerRemoteConsoleOption_H_
