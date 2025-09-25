
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_PluginInstanceVO_input_info_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_PluginInstanceVO_input_info_H_


#include <huaweicloud/codeartspipeline/v2/CodeArtsPipelineExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/codeartspipeline/v2/model/ExtensionValidation.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  PluginInstanceVO_input_info
    : public ModelBase
{
public:
    PluginInstanceVO_input_info();
    virtual ~PluginInstanceVO_input_info();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PluginInstanceVO_input_info members

    /// <summary>
    /// **参数解释**： 插件输入项唯一ID。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getUniqueId() const;
    bool uniqueIdIsSet() const;
    void unsetuniqueId();
    void setUniqueId(const std::string& value);

    /// <summary>
    /// **参数解释**： 插件输入项名称。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**： 插件输入项默认值。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getDefaultValue() const;
    bool defaultValueIsSet() const;
    void unsetdefaultValue();
    void setDefaultValue(const std::string& value);

    /// <summary>
    /// **参数解释**： 扩展插件名称。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getPluginName() const;
    bool pluginNameIsSet() const;
    void unsetpluginName();
    void setPluginName(const std::string& value);

    /// <summary>
    /// **参数解释**： 扩展插件版本号。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(const std::string& value);

    /// <summary>
    /// **参数解释**： 插件输入项类型。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// **参数解释**： 租户id。 **取值范围**： 32位字符，由数字和字母组成。 
    /// </summary>

    std::string getWorkspaceId() const;
    bool workspaceIdIsSet() const;
    void unsetworkspaceId();
    void setWorkspaceId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ExtensionValidation getValidation() const;
    bool validationIsSet() const;
    void unsetvalidation();
    void setValidation(const ExtensionValidation& value);

    /// <summary>
    /// **参数解释**： 插件输入项样式信息。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getLayoutContent() const;
    bool layoutContentIsSet() const;
    void unsetlayoutContent();
    void setLayoutContent(const std::string& value);


protected:
    std::string uniqueId_;
    bool uniqueIdIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string defaultValue_;
    bool defaultValueIsSet_;
    std::string pluginName_;
    bool pluginNameIsSet_;
    std::string version_;
    bool versionIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string workspaceId_;
    bool workspaceIdIsSet_;
    ExtensionValidation validation_;
    bool validationIsSet_;
    std::string layoutContent_;
    bool layoutContentIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_PluginInstanceVO_input_info_H_
