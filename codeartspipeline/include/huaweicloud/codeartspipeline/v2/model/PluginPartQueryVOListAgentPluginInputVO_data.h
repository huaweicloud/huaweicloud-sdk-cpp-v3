
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_PluginPartQueryVOListAgentPluginInputVO_data_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_PluginPartQueryVOListAgentPluginInputVO_data_H_


#include <huaweicloud/codeartspipeline/v2/CodeArtsPipelineExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/codeartspipeline/v2/model/ExtensionValidation.h>
#include <huaweicloud/codeartspipeline/v2/model/ExtensionExtendProp.h>

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
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  PluginPartQueryVOListAgentPluginInputVO_data
    : public ModelBase
{
public:
    PluginPartQueryVOListAgentPluginInputVO_data();
    virtual ~PluginPartQueryVOListAgentPluginInputVO_data();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PluginPartQueryVOListAgentPluginInputVO_data members

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
    /// **参数解释**： 插件名称。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getPluginName() const;
    bool pluginNameIsSet() const;
    void unsetpluginName();
    void setPluginName(const std::string& value);

    /// <summary>
    /// **参数解释**： 插件版本。 **取值范围**： 不涉及。 
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

    /// <summary>
    /// 
    /// </summary>

    ExtensionExtendProp getExtendProp() const;
    bool extendPropIsSet() const;
    void unsetextendProp();
    void setExtendProp(const ExtensionExtendProp& value);

    /// <summary>
    /// **参数解释**： 前端渲染使用的数据信息。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getFrontDataProp() const;
    bool frontDataPropIsSet() const;
    void unsetfrontDataProp();
    void setFrontDataProp(const std::string& value);

    /// <summary>
    /// **参数解释**： 标签。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getLabel() const;
    bool labelIsSet() const;
    void unsetlabel();
    void setLabel(const std::string& value);

    /// <summary>
    /// **参数解释**： 描述。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// **参数解释**： 是否必须。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getRequired() const;
    bool requiredIsSet() const;
    void unsetrequired();
    void setRequired(const std::string& value);


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
    ExtensionExtendProp extendProp_;
    bool extendPropIsSet_;
    std::string frontDataProp_;
    bool frontDataPropIsSet_;
    std::string label_;
    bool labelIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string required_;
    bool requiredIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_PluginPartQueryVOListAgentPluginInputVO_data_H_
