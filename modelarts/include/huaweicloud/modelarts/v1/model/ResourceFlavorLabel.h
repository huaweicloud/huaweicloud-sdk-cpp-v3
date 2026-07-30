
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ResourceFlavorLabel_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ResourceFlavorLabel_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 资源规格的标签信息。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ResourceFlavorLabel
    : public ModelBase
{
public:
    ResourceFlavorLabel();
    virtual ~ResourceFlavorLabel();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ResourceFlavorLabel members

    /// <summary>
    /// **参数解释**：资源规格支持作业类型，以“.”分割。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getOsModelartsScope() const;
    bool osModelartsScopeIsSet() const;
    void unsetosModelartsScope();
    void setOsModelartsScope(const std::string& value);


protected:
    std::string osModelartsScope_;
    bool osModelartsScopeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ResourceFlavorLabel_H_
