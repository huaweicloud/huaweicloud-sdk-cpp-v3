
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaServerNetwork_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaServerNetwork_H_

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
/// 
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  NovaServerNetwork
    : public ModelBase
{
public:
    NovaServerNetwork();
    virtual ~NovaServerNetwork();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// NovaServerNetwork members

    /// <summary>
    /// 网络port uuid。  没有指定网络uuid时必须指定。
    /// </summary>

    std::string getPort() const;
    bool portIsSet() const;
    void unsetport();
    void setPort(const std::string& value);

    /// <summary>
    /// 网络uuid。  没有指定网络port时必须指定。
    /// </summary>

    std::string getUuid() const;
    bool uuidIsSet() const;
    void unsetuuid();
    void setUuid(const std::string& value);

    /// <summary>
    /// 指定的IP地址。网络的三个参数（port、uuid和fixed_ip）中，port优先级最高；指定fixed_ip时必须指明uuid。
    /// </summary>

    std::string getFixedIp() const;
    bool fixedIpIsSet() const;
    void unsetfixedIp();
    void setFixedIp(const std::string& value);


protected:
    std::string port_;
    bool portIsSet_;
    std::string uuid_;
    bool uuidIsSet_;
    std::string fixedIp_;
    bool fixedIpIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaServerNetwork_H_
