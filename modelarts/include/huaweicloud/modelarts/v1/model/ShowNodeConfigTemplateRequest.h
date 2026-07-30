
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowNodeConfigTemplateRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowNodeConfigTemplateRequest_H_


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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ShowNodeConfigTemplateRequest
    : public ModelBase
{
public:
    ShowNodeConfigTemplateRequest();
    virtual ~ShowNodeConfigTemplateRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowNodeConfigTemplateRequest members

    /// <summary>
    /// **参数解释**：节点配置模板的名称。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getNodeconfigtemplateName() const;
    bool nodeconfigtemplateNameIsSet() const;
    void unsetnodeconfigtemplateName();
    void setNodeconfigtemplateName(const std::string& value);


protected:
    std::string nodeconfigtemplateName_;
    bool nodeconfigtemplateNameIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowNodeConfigTemplateRequest& dereference_from_shared_ptr(std::shared_ptr<ShowNodeConfigTemplateRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowNodeConfigTemplateRequest_H_
