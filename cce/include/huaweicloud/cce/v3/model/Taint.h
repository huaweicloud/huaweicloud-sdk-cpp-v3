
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_Taint_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_Taint_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 如下字段不可使用：  - node.kubernetes.io/memory-pressure - node.kubernetes.io/disk-pressure - node.kubernetes.io/out-of-disk - node.kubernetes.io/unschedulable - node.kubernetes.io/network-unavailable
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  Taint
    : public ModelBase
{
public:
    Taint();
    virtual ~Taint();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Taint members

    /// <summary>
    /// **参数解释**： K8s污点的键。 **约束限制**： 必须以字母或数字开头和结尾，可以包含字母、数字、连字符、下划线和点，最长63个字符。 **取值范围**： 不涉及 **默认取值**： 不涉及
    /// </summary>

    std::string getKey() const;
    bool keyIsSet() const;
    void unsetkey();
    void setKey(const std::string& value);

    /// <summary>
    /// **参数解释**： K8s污点的值。 **约束限制**： 必须以字母或数字开头和结尾，可以包含字母、数字、连字符、下划线和点，最长63个字符。 **取值范围**： 不涉及 **默认取值**： 不涉及
    /// </summary>

    std::string getValue() const;
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(const std::string& value);

    /// <summary>
    /// **参数解释**： K8s污点的作用效果。 **约束限制**： 不涉及 **取值范围**： 只可选NoSchedule，PreferNoSchedule或NoExecute。 **默认取值**： 不涉及
    /// </summary>

    std::string getEffect() const;
    bool effectIsSet() const;
    void unseteffect();
    void setEffect(const std::string& value);


protected:
    std::string key_;
    bool keyIsSet_;
    std::string value_;
    bool valueIsSet_;
    std::string effect_;
    bool effectIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_Taint_H_
