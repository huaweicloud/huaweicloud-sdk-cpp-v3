
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ValidateAuthResults_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ValidateAuthResults_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/modelarts/v1/model/Cause.h>
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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ValidateAuthResults
    : public ModelBase
{
public:
    ValidateAuthResults();
    virtual ~ValidateAuthResults();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ValidateAuthResults members

    /// <summary>
    /// **参数解释**：细粒度权限。 **取值范围**：不涉及。
    /// </summary>

    std::string getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(const std::string& value);

    /// <summary>
    /// **参数解释**：鉴权通过与否。 **取值范围**： - allow：通过。 - deny：不通过。
    /// </summary>

    std::string getVerdict() const;
    bool verdictIsSet() const;
    void unsetverdict();
    void setVerdict(const std::string& value);

    /// <summary>
    /// **参数解释**：随机的uuid，用来定位问题使用。 **取值范围**：不涉及。
    /// </summary>

    std::string getActionId() const;
    bool actionIdIsSet() const;
    void unsetactionId();
    void setActionId(const std::string& value);

    /// <summary>
    /// **参数解释**：请求资源。 **取值范围**：不涉及。
    /// </summary>

    std::string getResource() const;
    bool resourceIsSet() const;
    void unsetresource();
    void setResource(const std::string& value);

    /// <summary>
    /// **参数解释**：失败情况下原因。
    /// </summary>

    std::vector<Cause>& getCause();
    bool causeIsSet() const;
    void unsetcause();
    void setCause(const std::vector<Cause>& value);


protected:
    std::string action_;
    bool actionIsSet_;
    std::string verdict_;
    bool verdictIsSet_;
    std::string actionId_;
    bool actionIdIsSet_;
    std::string resource_;
    bool resourceIsSet_;
    std::vector<Cause> cause_;
    bool causeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ValidateAuthResults_H_
