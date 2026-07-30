
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_SfsTurboConnectionStatus_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_SfsTurboConnectionStatus_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 通过挂载网卡方式打通网络参数模型。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  SfsTurboConnectionStatus
    : public ModelBase
{
public:
    SfsTurboConnectionStatus();
    virtual ~SfsTurboConnectionStatus();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SfsTurboConnectionStatus members

    /// <summary>
    /// **参数解释**：sfsTurbo实例的名称。 **取值范围**：不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**：sfsTurbo实例的ID。 **取值范围**：不涉及。
    /// </summary>

    std::string getSfsId() const;
    bool sfsIdIsSet() const;
    void unsetsfsId();
    void setSfsId(const std::string& value);

    /// <summary>
    /// **参数解释**：关联方式。 **取值范围**：可选值如下： - VpcPort：通过挂载网卡直通 - Peering：通过对等连接打通
    /// </summary>

    std::string getConnectionType() const;
    bool connectionTypeIsSet() const;
    void unsetconnectionType();
    void setConnectionType(const std::string& value);

    /// <summary>
    /// **参数解释**：SFS Turbo的访问地址。 **取值范围**：不涉及。
    /// </summary>

    std::string getIpAddr() const;
    bool ipAddrIsSet() const;
    void unsetipAddr();
    void setIpAddr(const std::string& value);

    /// <summary>
    /// **参数解释**：与SFS Turbo的连接状态信息。 **取值范围**：可选值如下： - Active：SFS连通状态正常 - Abnormal：SFS连通状态异常 - Creating：SFS连通状态创建关联中 - Deleting：SFS连通状态解除关联中
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string sfsId_;
    bool sfsIdIsSet_;
    std::string connectionType_;
    bool connectionTypeIsSet_;
    std::string ipAddr_;
    bool ipAddrIsSet_;
    std::string status_;
    bool statusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_SfsTurboConnectionStatus_H_
