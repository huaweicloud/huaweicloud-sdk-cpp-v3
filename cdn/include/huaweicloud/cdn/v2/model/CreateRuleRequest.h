
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_CreateRuleRequest_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_CreateRuleRequest_H_


#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cdn/v2/model/Conditions.h>
#include <huaweicloud/cdn/v2/model/Actions.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释：** 规则引擎配置内容 **约束限制：** 不涉及
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  CreateRuleRequest
    : public ModelBase
{
public:
    CreateRuleRequest();
    virtual ~CreateRuleRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateRuleRequest members

    /// <summary>
    /// **参数解释：** 规则名称 **约束限制：** 不涉及 **取值范围：** 1-50个字符 **默认取值：** 不涉及
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释：** 是否开启规则 **约束限制：** 不涉及 **取值范围：** - on: 开启 - off: 关闭 **默认取值：** 不涉及
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// **参数解释：** 规则的优先级，数值越大，优先级越高 **约束限制：** 优先级不能重复 **取值范围：** 1-100 **默认取值：** 不涉及
    /// </summary>

    int32_t getPriority() const;
    bool priorityIsSet() const;
    void unsetpriority();
    void setPriority(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    Conditions getConditions() const;
    bool conditionsIsSet() const;
    void unsetconditions();
    void setConditions(const Conditions& value);

    /// <summary>
    /// **参数解释：** 满足规则条件后执行的动作 **约束限制：** 不涉及
    /// </summary>

    std::vector<Actions>& getActions();
    bool actionsIsSet() const;
    void unsetactions();
    void setActions(const std::vector<Actions>& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string status_;
    bool statusIsSet_;
    int32_t priority_;
    bool priorityIsSet_;
    Conditions conditions_;
    bool conditionsIsSet_;
    std::vector<Actions> actions_;
    bool actionsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_CreateRuleRequest_H_
