
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowPluginTemplateRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowPluginTemplateRequest_H_


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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ShowPluginTemplateRequest
    : public ModelBase
{
public:
    ShowPluginTemplateRequest();
    virtual ~ShowPluginTemplateRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowPluginTemplateRequest members

    /// <summary>
    /// **参数解释**：插件模板的名称。 **约束限制**：不涉及。 **取值范围**：可选值如下： - gpu-driver：GPU驱动插件模板信息 - npu-driver：NPU驱动插件模板信息 **默认取值**：不涉及。
    /// </summary>

    std::string getPlugintemplateName() const;
    bool plugintemplateNameIsSet() const;
    void unsetplugintemplateName();
    void setPlugintemplateName(const std::string& value);


protected:
    std::string plugintemplateName_;
    bool plugintemplateNameIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowPluginTemplateRequest& dereference_from_shared_ptr(std::shared_ptr<ShowPluginTemplateRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowPluginTemplateRequest_H_
