
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_ResourceSelector_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_ResourceSelector_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 资源标签选择器，匹配Kubernetes中node资源
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  ResourceSelector
    : public ModelBase
{
public:
    ResourceSelector();
    virtual ~ResourceSelector();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ResourceSelector members

    /// <summary>
    /// **参数解释：** 标签键值 **约束限制：** 不涉及 **取值范围：** - node.uid：节点UID  **默认取值：** 不涉及
    /// </summary>

    std::string getKey() const;
    bool keyIsSet() const;
    void unsetkey();
    void setKey(const std::string& value);

    /// <summary>
    /// **参数解释：** 标签值列表 **约束限制：** 不涉及 **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::vector<std::string>& getValues();
    bool valuesIsSet() const;
    void unsetvalues();
    void setValues(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释：** 标签逻辑运算符 **约束限制：** 不涉及 **取值范围：** - In  **默认取值：** 不涉及
    /// </summary>

    std::string getOperator() const;
    bool operatorIsSet() const;
    void unsetoperator();
    void setOperator(const std::string& value);


protected:
    std::string key_;
    bool keyIsSet_;
    std::vector<std::string> values_;
    bool valuesIsSet_;
    std::string operator_;
    bool operatorIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_ResourceSelector_H_
