
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowPoolNodeConfigRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowPoolNodeConfigRequest_H_


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
/// Request Object
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ShowPoolNodeConfigRequest
    : public ModelBase
{
public:
    ShowPoolNodeConfigRequest();
    virtual ~ShowPoolNodeConfigRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowPoolNodeConfigRequest members

    /// <summary>
    /// **参数解释**：池名称。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getPoolName() const;
    bool poolNameIsSet() const;
    void unsetpoolName();
    void setPoolName(const std::string& value);


protected:
    std::string poolName_;
    bool poolNameIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowPoolNodeConfigRequest& dereference_from_shared_ptr(std::shared_ptr<ShowPoolNodeConfigRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowPoolNodeConfigRequest_H_
