
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Taints_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Taints_H_


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
/// 污点。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  Taints
    : public ModelBase
{
public:
    Taints();
    virtual ~Taints();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Taints members

    /// <summary>
    /// **参数解释**：键。 **取值范围**：不涉及。
    /// </summary>

    std::string getKey() const;
    bool keyIsSet() const;
    void unsetkey();
    void setKey(const std::string& value);

    /// <summary>
    /// **参数解释**：值。 **取值范围**：不涉及。
    /// </summary>

    std::string getValue() const;
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(const std::string& value);

    /// <summary>
    /// **参数解释**：作用效果。 **取值范围**：不涉及。
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

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Taints_H_
