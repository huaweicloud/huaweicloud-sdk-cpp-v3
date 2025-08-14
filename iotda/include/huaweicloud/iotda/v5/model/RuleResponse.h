
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_RuleResponse_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_RuleResponse_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/iotda/v5/model/ConditionGroup.h>
#include <huaweicloud/iotda/v5/model/DeviceSide.h>
#include <huaweicloud/iotda/v5/model/RuleAction.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 规则响应结构体
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  RuleResponse
    : public ModelBase
{
public:
    RuleResponse();
    virtual ~RuleResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RuleResponse members

    /// <summary>
    /// 规则id。
    /// </summary>

    std::string getRuleId() const;
    bool ruleIdIsSet() const;
    void unsetruleId();
    void setRuleId(const std::string& value);

    /// <summary>
    /// 规则名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 规则的描述信息。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ConditionGroup getConditionGroup() const;
    bool conditionGroupIsSet() const;
    void unsetconditionGroup();
    void setConditionGroup(const ConditionGroup& value);

    /// <summary>
    /// 规则的动作列表，单个规则最多支持设置10个动作。
    /// </summary>

    std::vector<RuleAction>& getActions();
    bool actionsIsSet() const;
    void unsetactions();
    void setActions(const std::vector<RuleAction>& value);

    /// <summary>
    /// 规则的类型 - DEVICE_LINKAGE：云端联动规则。 - DEVICE_SIDE：端侧规则。
    /// </summary>

    std::string getRuleType() const;
    bool ruleTypeIsSet() const;
    void unsetruleType();
    void setRuleType(const std::string& value);

    /// <summary>
    /// 规则的状态，默认值：active。 - active：激活。 - inactive：未激活。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 资源空间ID。此参数为非必选参数，存在多资源空间的用户需要使用该接口时，建议携带该参数指定创建的规则归属到哪个资源空间下，否则创建的规则将会归属到[[默认资源空间](https://support.huaweicloud.com/usermanual-iothub/iot_01_0006.html#section0)](tag:hws)[[默认资源空间](https://support.huaweicloud.com/intl/zh-cn/usermanual-iothub/iot_01_0006.html#section0)](tag:hws_hk)下。
    /// </summary>

    std::string getAppId() const;
    bool appIdIsSet() const;
    void unsetappId();
    void setAppId(const std::string& value);

    /// <summary>
    /// 归属边缘侧节点设备ID列表。
    /// </summary>

    std::vector<std::string>& getEdgeNodeIds();
    bool edgeNodeIdsIsSet() const;
    void unsetedgeNodeIds();
    void setEdgeNodeIds(const std::vector<std::string>& value);

    /// <summary>
    /// 规则最后更新时间，使用UTC时区，格式：yyyyMMdd&#39;T&#39;HHmmss&#39;Z&#39;。
    /// </summary>

    std::string getLastUpdateTime() const;
    bool lastUpdateTimeIsSet() const;
    void unsetlastUpdateTime();
    void setLastUpdateTime(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    DeviceSide getDeviceSide() const;
    bool deviceSideIsSet() const;
    void unsetdeviceSide();
    void setDeviceSide(const DeviceSide& value);


protected:
    std::string ruleId_;
    bool ruleIdIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    ConditionGroup conditionGroup_;
    bool conditionGroupIsSet_;
    std::vector<RuleAction> actions_;
    bool actionsIsSet_;
    std::string ruleType_;
    bool ruleTypeIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string appId_;
    bool appIdIsSet_;
    std::vector<std::string> edgeNodeIds_;
    bool edgeNodeIdsIsSet_;
    std::string lastUpdateTime_;
    bool lastUpdateTimeIsSet_;
    DeviceSide deviceSide_;
    bool deviceSideIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_RuleResponse_H_
