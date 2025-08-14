
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ServiceCapability_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ServiceCapability_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/iotda/v5/model/ServiceProperty.h>
#include <string>
#include <vector>
#include <huaweicloud/iotda/v5/model/ServiceEvent.h>
#include <huaweicloud/iotda/v5/model/ServiceCommand.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// ServiceCapability结构体。
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  ServiceCapability
    : public ModelBase
{
public:
    ServiceCapability();
    virtual ~ServiceCapability();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ServiceCapability members

    /// <summary>
    /// **参数说明**：设备的服务ID。注：产品内不允许重复。 **取值范围**：长度不超过64，只允许中文、字母、数字、以及_?&#39;#().,&amp;%@!-$等字符的组合。
    /// </summary>

    std::string getServiceId() const;
    bool serviceIdIsSet() const;
    void unsetserviceId();
    void setServiceId(const std::string& value);

    /// <summary>
    /// **参数说明**：设备的服务类型。 **取值范围**：长度不超过64，只允许中文、字母、数字、以及_?&#39;#().,&amp;%@!-$等字符的组合。
    /// </summary>

    std::string getServiceType() const;
    bool serviceTypeIsSet() const;
    void unsetserviceType();
    void setServiceType(const std::string& value);

    /// <summary>
    /// **参数说明**：设备服务支持的属性列表。 **取值范围**：数组长度大小不超过500。
    /// </summary>

    std::vector<ServiceProperty>& getProperties();
    bool propertiesIsSet() const;
    void unsetproperties();
    void setProperties(const std::vector<ServiceProperty>& value);

    /// <summary>
    /// **参数说明**：设备服务支持的命令列表。 **取值范围**：数组长度大小不超过500。
    /// </summary>

    std::vector<ServiceCommand>& getCommands();
    bool commandsIsSet() const;
    void unsetcommands();
    void setCommands(const std::vector<ServiceCommand>& value);

    /// <summary>
    /// **参数说明**：设备服务支持的事件列表。目前暂未支持自定义事件，创建/修改产品时无需定义该字段。 **取值范围**：数组长度大小不超过500。
    /// </summary>

    std::vector<ServiceEvent>& getEvents();
    bool eventsIsSet() const;
    void unsetevents();
    void setEvents(const std::vector<ServiceEvent>& value);

    /// <summary>
    /// **参数说明**：设备服务的描述信息。 **取值范围**：长度不超过128，只允许中文、字母、数字、空白字符、以及_?&#39;#().,;&amp;%@!- ，、：；。/等字符的组合。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// **参数说明**：指定设备服务是否必选。目前本字段为非功能性字段，仅起到标识作用。 **取值范围**： - Master：主服务 - Mandatory：必选服务 - Optional：可选服务 默认值为Optional。
    /// </summary>

    std::string getOption() const;
    bool optionIsSet() const;
    void unsetoption();
    void setOption(const std::string& value);


protected:
    std::string serviceId_;
    bool serviceIdIsSet_;
    std::string serviceType_;
    bool serviceTypeIsSet_;
    std::vector<ServiceProperty> properties_;
    bool propertiesIsSet_;
    std::vector<ServiceCommand> commands_;
    bool commandsIsSet_;
    std::vector<ServiceEvent> events_;
    bool eventsIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string option_;
    bool optionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ServiceCapability_H_
