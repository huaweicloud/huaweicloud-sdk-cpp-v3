
#ifndef HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_Trigger_H_
#define HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_Trigger_H_


#include <huaweicloud/functiongraph/v2/FunctionGraphExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/functiongraph/v2/model/OBSTriggerConfig.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 触发器结构体
/// </summary>
class HUAWEICLOUD_FUNCTIONGRAPH_V2_EXPORT  Trigger
    : public ModelBase
{
public:
    Trigger();
    virtual ~Trigger();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Trigger members

    /// <summary>
    /// 触发器名称
    /// </summary>

    std::string getTriggerName() const;
    bool triggerNameIsSet() const;
    void unsettriggerName();
    void setTriggerName(const std::string& value);

    /// <summary>
    /// 触发器类型 FLOWTIMER：定时触发器 SMN：SMN触发器 APIG：APIG触发器(共享版) APIG_DE：APIG触发器(专享版) OBS：OBS触发器
    /// </summary>

    std::string getTriggerType() const;
    bool triggerTypeIsSet() const;
    void unsettriggerType();
    void setTriggerType(const std::string& value);

    /// <summary>
    /// 是否启用触发器
    /// </summary>

    bool isEnabled() const;
    bool enabledIsSet() const;
    void unsetenabled();
    void setEnabled(bool value);

    /// <summary>
    /// 
    /// </summary>

    OBSTriggerConfig getTriggerConfig() const;
    bool triggerConfigIsSet() const;
    void unsettriggerConfig();
    void setTriggerConfig(const OBSTriggerConfig& value);


protected:
    std::string triggerName_;
    bool triggerNameIsSet_;
    std::string triggerType_;
    bool triggerTypeIsSet_;
    bool enabled_;
    bool enabledIsSet_;
    OBSTriggerConfig triggerConfig_;
    bool triggerConfigIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_Trigger_H_
