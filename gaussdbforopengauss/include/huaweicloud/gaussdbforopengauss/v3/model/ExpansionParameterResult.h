
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ExpansionParameterResult_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ExpansionParameterResult_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  ExpansionParameterResult
    : public ModelBase
{
public:
    ExpansionParameterResult();
    virtual ~ExpansionParameterResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ExpansionParameterResult members

    /// <summary>
    /// **参数解释**: 参数名称。 **取值范围**: 不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**: 参数值。 **取值范围**: 不涉及。
    /// </summary>

    std::string getValue() const;
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(const std::string& value);

    /// <summary>
    /// **参数解释**: 修改参数是否需要重启。 **取值范围**: - true：需要重启。 - false：不需要重启。
    /// </summary>

    bool isRestartRequired() const;
    bool restartRequiredIsSet() const;
    void unsetrestartRequired();
    void setRestartRequired(bool value);

    /// <summary>
    /// **参数解释**: 参数值的取值范围。 **取值范围**: 不涉及。
    /// </summary>

    std::string getValueRange() const;
    bool valueRangeIsSet() const;
    void unsetvalueRange();
    void setValueRange(const std::string& value);

    /// <summary>
    /// **参数解释**: 参数类型。 **取值范围**: - integer：整数。 - boolean：布尔类型。 - string：字符串。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// **参数解释**: 参数解释。 **取值范围**: 不涉及。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string value_;
    bool valueIsSet_;
    bool restartRequired_;
    bool restartRequiredIsSet_;
    std::string valueRange_;
    bool valueRangeIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string description_;
    bool descriptionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ExpansionParameterResult_H_
