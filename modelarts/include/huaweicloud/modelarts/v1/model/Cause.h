
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Cause_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Cause_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/Conditions.h>
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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  Cause
    : public ModelBase
{
public:
    Cause();
    virtual ~Cause();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Cause members

    /// <summary>
    /// **参数解释**：策略名称。 **取值范围**：不涉及。
    /// </summary>

    std::string getPolicyName() const;
    bool policyNameIsSet() const;
    void unsetpolicyName();
    void setPolicyName(const std::string& value);

    /// <summary>
    /// **参数解释**：策略条件。
    /// </summary>

    std::vector<Conditions>& getCondition();
    bool conditionIsSet() const;
    void unsetcondition();
    void setCondition(const std::vector<Conditions>& value);


protected:
    std::string policyName_;
    bool policyNameIsSet_;
    std::vector<Conditions> condition_;
    bool conditionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Cause_H_
