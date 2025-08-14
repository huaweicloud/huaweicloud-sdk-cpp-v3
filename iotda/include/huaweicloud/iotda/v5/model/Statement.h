
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_Statement_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_Statement_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 策略文档结构。
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  Statement
    : public ModelBase
{
public:
    Statement();
    virtual ~Statement();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Statement members

    /// <summary>
    /// 指定是允许还是拒绝该操作。既有允许（ALLOW）又有拒绝（DENY）的授权语句时，遵循拒绝（DENY）优先的原则。 - ALLOW：允许。 - DENY：拒绝。 
    /// </summary>

    std::string getEffect() const;
    bool effectIsSet() const;
    void unseteffect();
    void setEffect(const std::string& value);

    /// <summary>
    /// 用于指定策略允许或拒绝的操作。格式为：服务名:资源:操作。当前支持的操作类型如下： - iotda:devices:publish：设备使用MQTT协议发布消息。 - iotda:devices:subscribe：设备使用MQTT协议订阅消息。 
    /// </summary>

    std::vector<std::string>& getActions();
    bool actionsIsSet() const;
    void unsetactions();
    void setActions(const std::vector<std::string>& value);

    /// <summary>
    /// 用于指定允许或拒绝对其执行操作的资源。格式为：资源类型:资源名称。如设备订阅的资源为：topic:/v1/${devices.deviceId}/test/hello。  **取值范围**：资源列表长度最小为1，最大为10，列表中的资源取值范围：仅支持字母，数字，以及/{}$&#x3D;+#?*:._-组合。 
    /// </summary>

    std::vector<std::string>& getResources();
    bool resourcesIsSet() const;
    void unsetresources();
    void setResources(const std::vector<std::string>& value);


protected:
    std::string effect_;
    bool effectIsSet_;
    std::vector<std::string> actions_;
    bool actionsIsSet_;
    std::vector<std::string> resources_;
    bool resourcesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_Statement_H_
