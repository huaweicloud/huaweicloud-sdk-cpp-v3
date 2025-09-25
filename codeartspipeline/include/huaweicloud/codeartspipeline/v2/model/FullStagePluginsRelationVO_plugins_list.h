
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_FullStagePluginsRelationVO_plugins_list_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_FullStagePluginsRelationVO_plugins_list_H_


#include <huaweicloud/codeartspipeline/v2/CodeArtsPipelineExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartspipeline/v2/model/FullStagePluginsRelationVO_all_steps.h>
#include <string>
#include <vector>

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
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  FullStagePluginsRelationVO_plugins_list
    : public ModelBase
{
public:
    FullStagePluginsRelationVO_plugins_list();
    virtual ~FullStagePluginsRelationVO_plugins_list();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// FullStagePluginsRelationVO_plugins_list members

    /// <summary>
    /// **参数解释**： 唯一ID。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getUniqueId() const;
    bool uniqueIdIsSet() const;
    void unsetuniqueId();
    void setUniqueId(const std::string& value);

    /// <summary>
    /// **参数解释**： 展示名。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getDisplayName() const;
    bool displayNameIsSet() const;
    void unsetdisplayName();
    void setDisplayName(const std::string& value);

    /// <summary>
    /// **参数解释**： 插件名。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getPluginName() const;
    bool pluginNameIsSet() const;
    void unsetpluginName();
    void setPluginName(const std::string& value);

    /// <summary>
    /// **参数解释**： 当前插件对后续选择使用的流水线是否为禁用状态，默认为false。 **取值范围**： - true：被禁用。 - false：未被禁用。 
    /// </summary>

    bool isDisabled() const;
    bool disabledIsSet() const;
    void unsetdisabled();
    void setDisabled(bool value);

    /// <summary>
    /// **参数解释**： 插件记录展示名称。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getDbRecordName() const;
    bool dbRecordNameIsSet() const;
    void unsetdbRecordName();
    void setDbRecordName(const std::string& value);

    /// <summary>
    /// **参数解释**： 流水线stage下的分组名称。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getGroupName() const;
    bool groupNameIsSet() const;
    void unsetgroupName();
    void setGroupName(const std::string& value);

    /// <summary>
    /// **参数解释**： 流水线stage下的分组类型。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getGroupType() const;
    bool groupTypeIsSet() const;
    void unsetgroupType();
    void setGroupType(const std::string& value);

    /// <summary>
    /// **参数解释**： 标识是否为官方插件。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getPluginAttribution() const;
    bool pluginAttributionIsSet() const;
    void unsetpluginAttribution();
    void setPluginAttribution(const std::string& value);

    /// <summary>
    /// **参数解释**： 标识是否为多个step组成的组。 **取值范围**： - single：单step插件。 - multi：组合插件。 
    /// </summary>

    std::string getPluginCompositionType() const;
    bool pluginCompositionTypeIsSet() const;
    void unsetpluginCompositionType();
    void setPluginCompositionType(const std::string& value);

    /// <summary>
    /// **参数解释**： 运行属性。 **取值范围**： - agent：运行基于流水线agent。 - agentLess：运行无需流水线agent。 
    /// </summary>

    std::string getRuntimeAttribution() const;
    bool runtimeAttributionIsSet() const;
    void unsetruntimeAttribution();
    void setRuntimeAttribution(const std::string& value);

    /// <summary>
    /// **参数解释**： 基础插件列表。 **取值范围**： 不涉及。 
    /// </summary>

    std::vector<FullStagePluginsRelationVO_all_steps>& getAllSteps();
    bool allStepsIsSet() const;
    void unsetallSteps();
    void setAllSteps(const std::vector<FullStagePluginsRelationVO_all_steps>& value);

    /// <summary>
    /// **参数解释**： 扩展插件描述。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// **参数解释**： 标识是否为一个草稿。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getVersionAttribution() const;
    bool versionAttributionIsSet() const;
    void unsetversionAttribution();
    void setVersionAttribution(const std::string& value);

    /// <summary>
    /// **参数解释**： 扩展插件图标URL。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getIconUrl() const;
    bool iconUrlIsSet() const;
    void unseticonUrl();
    void setIconUrl(const std::string& value);

    /// <summary>
    /// **参数解释**： 标识是否可继续进行添加步骤，默认是1，可进行添加。 **取值范围**： - 0：不可继续进行添加步骤。 - 1：可继续进行添加步骤。 
    /// </summary>

    int32_t getMultiStepEditable() const;
    bool multiStepEditableIsSet() const;
    void unsetmultiStepEditable();
    void setMultiStepEditable(int32_t value);

    /// <summary>
    /// **参数解释**： 使用位置。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getLocation() const;
    bool locationIsSet() const;
    void unsetlocation();
    void setLocation(const std::string& value);

    /// <summary>
    /// **参数解释**： 发布商ID。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getPublisherUniqueId() const;
    bool publisherUniqueIdIsSet() const;
    void unsetpublisherUniqueId();
    void setPublisherUniqueId(const std::string& value);

    /// <summary>
    /// **参数解释**： 插件版本标识符。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getManifestVersion() const;
    bool manifestVersionIsSet() const;
    void unsetmanifestVersion();
    void setManifestVersion(const std::string& value);

    /// <summary>
    /// **参数解释**： 标识是否为标准化的插件。 **取值范围**： - true：是标准化的插件。 - false：不是标准化的插件。 
    /// </summary>

    bool isStandard() const;
    bool standardIsSet() const;
    void unsetstandard();
    void setStandard(bool value);


protected:
    std::string uniqueId_;
    bool uniqueIdIsSet_;
    std::string displayName_;
    bool displayNameIsSet_;
    std::string pluginName_;
    bool pluginNameIsSet_;
    bool disabled_;
    bool disabledIsSet_;
    std::string dbRecordName_;
    bool dbRecordNameIsSet_;
    std::string groupName_;
    bool groupNameIsSet_;
    std::string groupType_;
    bool groupTypeIsSet_;
    std::string pluginAttribution_;
    bool pluginAttributionIsSet_;
    std::string pluginCompositionType_;
    bool pluginCompositionTypeIsSet_;
    std::string runtimeAttribution_;
    bool runtimeAttributionIsSet_;
    std::vector<FullStagePluginsRelationVO_all_steps> allSteps_;
    bool allStepsIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string versionAttribution_;
    bool versionAttributionIsSet_;
    std::string iconUrl_;
    bool iconUrlIsSet_;
    int32_t multiStepEditable_;
    bool multiStepEditableIsSet_;
    std::string location_;
    bool locationIsSet_;
    std::string publisherUniqueId_;
    bool publisherUniqueIdIsSet_;
    std::string manifestVersion_;
    bool manifestVersionIsSet_;
    bool standard_;
    bool standardIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_FullStagePluginsRelationVO_plugins_list_H_
