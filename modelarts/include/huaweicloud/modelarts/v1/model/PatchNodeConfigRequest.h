
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PatchNodeConfigRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PatchNodeConfigRequest_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/modelarts/v1/model/NodeconfigUpdate.h>

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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  PatchNodeConfigRequest
    : public ModelBase
{
public:
    PatchNodeConfigRequest();
    virtual ~PatchNodeConfigRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PatchNodeConfigRequest members

    /// <summary>
    /// **参数解释**：池名称。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getPoolName() const;
    bool poolNameIsSet() const;
    void unsetpoolName();
    void setPoolName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    NodeconfigUpdate getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const NodeconfigUpdate& value);


protected:
    std::string poolName_;
    bool poolNameIsSet_;
    NodeconfigUpdate body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    PatchNodeConfigRequest& dereference_from_shared_ptr(std::shared_ptr<PatchNodeConfigRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PatchNodeConfigRequest_H_
