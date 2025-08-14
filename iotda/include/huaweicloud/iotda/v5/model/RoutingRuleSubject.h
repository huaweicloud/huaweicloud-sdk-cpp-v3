
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_RoutingRuleSubject_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_RoutingRuleSubject_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 创建或修改规则条件时，指定资源及其范围
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  RoutingRuleSubject
    : public ModelBase
{
public:
    RoutingRuleSubject();
    virtual ~RoutingRuleSubject();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RoutingRuleSubject members

    /// <summary>
    /// **参数说明**：资源名称。 **取值范围**： - device：设备。 - device.property：设备属性。 - device.message：设备消息。 - device.message.status：设备消息状态。 - device.status：设备状态。 - batchtask：批量任务。 - product：产品。 - device.command.status：设备异步命令状态。
    /// </summary>

    std::string getResource() const;
    bool resourceIsSet() const;
    void unsetresource();
    void setResource(const std::string& value);

    /// <summary>
    /// **参数说明**：资源事件。 **取值范围**：与资源有关，不同的资源，事件不同。event需要与resource关联使用，具体的“resource：event”映射关系如下： - device：create（设备添加） - device：delete（设备删除） - device：update（设备更新） - device.status：update （设备状态变更） - device.property：report（设备属性上报） - device.message：report（设备消息上报） - device.message.status：update（设备消息状态变更） - batchtask：update （批量任务状态变更） - product：create（产品添加） - product：delete（产品删除） - product：update（产品更新） - device.command.status：update（设备异步命令状态更新）
    /// </summary>

    std::string getEvent() const;
    bool eventIsSet() const;
    void unsetevent();
    void setEvent(const std::string& value);


protected:
    std::string resource_;
    bool resourceIsSet_;
    std::string event_;
    bool eventIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_RoutingRuleSubject_H_
