
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ComponentInfo_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ComponentInfo_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 组件信息。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  ComponentInfo
    : public ModelBase
{
public:
    ComponentInfo();
    virtual ~ComponentInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ComponentInfo members

    /// <summary>
    /// **参数解释**： 组件名称。 **约束限制**： 不涉及。 **取值范围**： 字符长度1-256位。 **默认取值**： 不涉及。
    /// </summary>

    std::string getComponentName() const;
    bool componentNameIsSet() const;
    void unsetcomponentName();
    void setComponentName(const std::string& value);

    /// <summary>
    /// **参数解释**： 组件类型。 **约束限制**： 不涉及。 **取值范围**： 字符长度1-256位。 **默认取值**： 不涉及。
    /// </summary>

    std::string getComponentType() const;
    bool componentTypeIsSet() const;
    void unsetcomponentType();
    void setComponentType(const std::string& value);

    /// <summary>
    /// **参数解释**： 组件描述。 **约束限制**： 不涉及。 **取值范围**： 字符长度0-512位。 **默认取值**： 不涉及。
    /// </summary>

    std::string getComponentDesc() const;
    bool componentDescIsSet() const;
    void unsetcomponentDesc();
    void setComponentDesc(const std::string& value);


protected:
    std::string componentName_;
    bool componentNameIsSet_;
    std::string componentType_;
    bool componentTypeIsSet_;
    std::string componentDesc_;
    bool componentDescIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ComponentInfo_H_
