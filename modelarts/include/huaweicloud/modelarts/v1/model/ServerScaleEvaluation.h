
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ServerScaleEvaluation_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ServerScaleEvaluation_H_


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
/// 
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ServerScaleEvaluation
    : public ModelBase
{
public:
    ServerScaleEvaluation();
    virtual ~ServerScaleEvaluation();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ServerScaleEvaluation members

    /// <summary>
    /// **参数解释**：是否售罄。 **约束限制**：不涉及 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    bool isIsSoldOut() const;
    bool isSoldOutIsSet() const;
    void unsetisSoldOut();
    void setIsSoldOut(bool value);

    /// <summary>
    /// **参数解释**：规格信息。 **约束限制**：不涉及 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getFlavor() const;
    bool flavorIsSet() const;
    void unsetflavor();
    void setFlavor(const std::string& value);

    /// <summary>
    /// **参数解释**：资源规格信息。 **约束限制**：不涉及 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getResourceFlavor() const;
    bool resourceFlavorIsSet() const;
    void unsetresourceFlavor();
    void setResourceFlavor(const std::string& value);


protected:
    bool isSoldOut_;
    bool isSoldOutIsSet_;
    std::string flavor_;
    bool flavorIsSet_;
    std::string resourceFlavor_;
    bool resourceFlavorIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ServerScaleEvaluation_H_
