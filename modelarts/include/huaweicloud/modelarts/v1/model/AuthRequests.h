
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_AuthRequests_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_AuthRequests_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <map>
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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  AuthRequests
    : public ModelBase
{
public:
    AuthRequests();
    virtual ~AuthRequests();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AuthRequests members

    /// <summary>
    /// **参数解释**：随机UUID，用来定位使用。 **取值范围**不涉及。
    /// </summary>

    std::string getActionId() const;
    bool actionIdIsSet() const;
    void unsetactionId();
    void setActionId(const std::string& value);

    /// <summary>
    /// **参数解释**：细粒度action。 **取值范围**不涉及。
    /// </summary>

    std::string getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(const std::string& value);

    /// <summary>
    /// **参数解释**：资源。 **取值范围**不涉及。
    /// </summary>

    std::string getResource() const;
    bool resourceIsSet() const;
    void unsetresource();
    void setResource(const std::string& value);

    /// <summary>
    /// **参数解释**：操作对象。 **取值范围**不涉及。
    /// </summary>

    std::map<std::string, std::string>& getServiceAttributes();
    bool serviceAttributesIsSet() const;
    void unsetserviceAttributes();
    void setServiceAttributes(const std::map<std::string, std::string>& value);


protected:
    std::string actionId_;
    bool actionIdIsSet_;
    std::string action_;
    bool actionIsSet_;
    std::string resource_;
    bool resourceIsSet_;
    std::map<std::string, std::string> serviceAttributes_;
    bool serviceAttributesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_AuthRequests_H_
