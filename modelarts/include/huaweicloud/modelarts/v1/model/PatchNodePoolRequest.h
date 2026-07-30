
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PatchNodePoolRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PatchNodePoolRequest_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/PatchNodePoolRequestBody.h>
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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  PatchNodePoolRequest
    : public ModelBase
{
public:
    PatchNodePoolRequest();
    virtual ~PatchNodePoolRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PatchNodePoolRequest members

    /// <summary>
    /// **参数解释**：资源池名称。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getPoolName() const;
    bool poolNameIsSet() const;
    void unsetpoolName();
    void setPoolName(const std::string& value);

    /// <summary>
    /// **参数解释**：节点池名称。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getNodepoolName() const;
    bool nodepoolNameIsSet() const;
    void unsetnodepoolName();
    void setNodepoolName(const std::string& value);

    /// <summary>
    /// **参数解释**：消息体的类型（格式）。 **约束限制**：不涉及。 **取值范围**：可选值如下： - application/merge-patch+json **默认取值**：不涉及。
    /// </summary>

    std::string getContentType() const;
    bool contentTypeIsSet() const;
    void unsetcontentType();
    void setContentType(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    PatchNodePoolRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const PatchNodePoolRequestBody& value);


protected:
    std::string poolName_;
    bool poolNameIsSet_;
    std::string nodepoolName_;
    bool nodepoolNameIsSet_;
    std::string contentType_;
    bool contentTypeIsSet_;
    PatchNodePoolRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    PatchNodePoolRequest& dereference_from_shared_ptr(std::shared_ptr<PatchNodePoolRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PatchNodePoolRequest_H_
