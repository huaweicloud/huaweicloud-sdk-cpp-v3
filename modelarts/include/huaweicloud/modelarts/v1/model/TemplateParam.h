
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_TemplateParam_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_TemplateParam_H_


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
/// 模板参数params
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  TemplateParam
    : public ModelBase
{
public:
    TemplateParam();
    virtual ~TemplateParam();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TemplateParam members

    /// <summary>
    /// **参数解释**：参数名称。 **取值范围**：不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**：参数描述。 **取值范围**：不涉及。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// **参数解释**：参数取值。 **取值范围**：不涉及。
    /// </summary>

    std::string getValue() const;
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(const std::string& value);

    /// <summary>
    /// **参数解释**：是否展示在console。 **取值范围**：- true   -false。
    /// </summary>

    std::string getVisible() const;
    bool visibleIsSet() const;
    void unsetvisible();
    void setVisible(const std::string& value);

    /// <summary>
    /// **参数解释**：正则校验。 **取值范围**：不涉及。
    /// </summary>

    std::string getRegex() const;
    bool regexIsSet() const;
    void unsetregex();
    void setRegex(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string value_;
    bool valueIsSet_;
    std::string visible_;
    bool visibleIsSet_;
    std::string regex_;
    bool regexIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_TemplateParam_H_
