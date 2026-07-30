
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PluginTemplateSpec_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PluginTemplateSpec_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/PluginTemplateVersionV2.h>
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
/// 插件模板描述信息。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  PluginTemplateSpec
    : public ModelBase
{
public:
    PluginTemplateSpec();
    virtual ~PluginTemplateSpec();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PluginTemplateSpec members

    /// <summary>
    /// **参数解释**：插件模板类型。 **取值范围**：可选值如下： - npu-river：NPU驱动 - gpu-driver：GPU驱动
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// **参数解释**：插件模板描述。 **取值范围**：不涉及。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// **参数解释**：插件模板版本描述信息。
    /// </summary>

    std::map<std::string, PluginTemplateVersionV2>& getVersions();
    bool versionsIsSet() const;
    void unsetversions();
    void setVersions(const std::map<std::string, PluginTemplateVersionV2>& value);


protected:
    std::string type_;
    bool typeIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::map<std::string, PluginTemplateVersionV2> versions_;
    bool versionsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PluginTemplateSpec_H_
