
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_MasterEIPResponseSpec_spec_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_MasterEIPResponseSpec_spec_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cce/v3/model/EipSpec.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**： 待绑定的弹性IP配置属性 **约束限制**： 不涉及 
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  MasterEIPResponseSpec_spec
    : public ModelBase
{
public:
    MasterEIPResponseSpec_spec();
    virtual ~MasterEIPResponseSpec_spec();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MasterEIPResponseSpec_spec members

    /// <summary>
    /// **参数解释**： 弹性网卡ID **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及 
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    EipSpec getEip() const;
    bool eipIsSet() const;
    void unseteip();
    void setEip(const EipSpec& value);

    /// <summary>
    /// **参数解释**： 是否动态创建 **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及 
    /// </summary>

    bool isIsDynamic() const;
    bool isDynamicIsSet() const;
    void unsetisDynamic();
    void setIsDynamic(bool value);


protected:
    std::string id_;
    bool idIsSet_;
    EipSpec eip_;
    bool eipIsSet_;
    bool isDynamic_;
    bool isDynamicIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_MasterEIPResponseSpec_spec_H_
