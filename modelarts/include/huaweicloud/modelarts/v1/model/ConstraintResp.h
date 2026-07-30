
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ConstraintResp_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ConstraintResp_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 条件。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ConstraintResp
    : public ModelBase
{
public:
    ConstraintResp();
    virtual ~ConstraintResp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ConstraintResp members

    /// <summary>
    /// **参数解释**：条件属性，参数的某个字段值。 **取值范围**：不涉及。
    /// </summary>

    std::string getAttribute() const;
    bool attributeIsSet() const;
    void unsetattribute();
    void setAttribute(const std::string& value);

    /// <summary>
    /// **参数解释**：操作。 **取值范围**：不涉及。
    /// </summary>

    std::string getOperator() const;
    bool operatorIsSet() const;
    void unsetoperator();
    void setOperator(const std::string& value);

    /// <summary>
    /// **参数解释**：取值。
    /// </summary>

    Object getValue() const;
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(const Object& value);


protected:
    std::string attribute_;
    bool attributeIsSet_;
    std::string operator_;
    bool operatorIsSet_;
    Object value_;
    bool valueIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ConstraintResp_H_
