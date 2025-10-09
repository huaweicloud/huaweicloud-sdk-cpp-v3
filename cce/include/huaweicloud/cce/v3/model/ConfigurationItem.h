
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_ConfigurationItem_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_ConfigurationItem_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  ConfigurationItem
    : public ModelBase
{
public:
    ConfigurationItem();
    virtual ~ConfigurationItem();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ConfigurationItem members

    /// <summary>
    /// **参数解释：** 组件配置参数名称。  [当前集群支持的可配置组件及其参数详见[修改CCE集群配置](https://support.huaweicloud.com/usermanual-cce/cce_10_0213.html)，当前节点池支持的可配置组件及其参数详见[修改节点池配置](https://support.huaweicloud.com/usermanual-cce/cce_10_0652.html)。](tag:hws) [当前集群支持的可配置组件及其参数详见[修改CCE集群配置](https://support.huaweicloud.com/intl/zh-cn/usermanual-cce/cce_10_0213.html)，当前节点池支持的可配置组件及其参数详见[修改节点池配置](https://support.huaweicloud.com/intl/zh-cn/usermanual-cce/cce_10_0652.html)。](tag:hws_hk) **约束限制：** 若指定了不支持的组件或组件不支持的参数，该配置项将被忽略。 **取值范围：** 不涉及 **默认取值：** 不涉及 
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释：** 组件配置参数值。  [当前集群支持的可配置组件及其参数详见[修改CCE集群配置](https://support.huaweicloud.com/usermanual-cce/cce_10_0213.html)，当前节点池支持的可配置组件及其参数详见[修改节点池配置](https://support.huaweicloud.com/usermanual-cce/cce_10_0652.html)。](tag:hws) [当前集群支持的可配置组件及其参数详见[修改CCE集群配置](https://support.huaweicloud.com/intl/zh-cn/usermanual-cce/cce_10_0213.html)，当前节点池支持的可配置组件及其参数详见[修改节点池配置](https://support.huaweicloud.com/intl/zh-cn/usermanual-cce/cce_10_0652.html)。](tag:hws_hk) **约束限制：** 若指定了不支持的组件或组件不支持的参数，该配置项将被忽略。 **取值范围：** 不涉及 **默认取值：** 不涉及 
    /// </summary>

    Object getValue() const;
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(const Object& value);


protected:
    std::string name_;
    bool nameIsSet_;
    Object value_;
    bool valueIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_ConfigurationItem_H_
