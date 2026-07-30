
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Conditions_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Conditions_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  Conditions
    : public ModelBase
{
public:
    Conditions();
    virtual ~Conditions();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Conditions members

    /// <summary>
    /// **参数解释**：操作属性。 **取值范围**：不涉及。
    /// </summary>

    std::string getKey() const;
    bool keyIsSet() const;
    void unsetkey();
    void setKey(const std::string& value);

    /// <summary>
    /// **参数解释**：操作符号。 **取值范围**：不涉及。
    /// </summary>

    std::string getOperator() const;
    bool operatorIsSet() const;
    void unsetoperator();
    void setOperator(const std::string& value);

    /// <summary>
    /// **参数解释**：操作符的值。
    /// </summary>

    std::vector<std::string>& getValue();
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(const std::vector<std::string>& value);


protected:
    std::string key_;
    bool keyIsSet_;
    std::string operator_;
    bool operatorIsSet_;
    std::vector<std::string> value_;
    bool valueIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Conditions_H_
