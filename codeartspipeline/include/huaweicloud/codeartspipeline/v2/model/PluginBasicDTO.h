
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_PluginBasicDTO_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_PluginBasicDTO_H_


#include <huaweicloud/codeartspipeline/v2/CodeArtsPipelineExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  PluginBasicDTO
    : public ModelBase
{
public:
    PluginBasicDTO();
    virtual ~PluginBasicDTO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PluginBasicDTO members

    /// <summary>
    /// **参数解释**： 扩展插件UUID。 **约束限制**： 不涉及。 **取值范围**： 32位字符，由数字和字母组成。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getUniqueId() const;
    bool uniqueIdIsSet() const;
    void unsetuniqueId();
    void setUniqueId(const std::string& value);

    /// <summary>
    /// **参数解释**： 扩展插件图标URL。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getIconUrl() const;
    bool iconUrlIsSet() const;
    void unseticonUrl();
    void setIconUrl(const std::string& value);

    /// <summary>
    /// **参数解释**： 运行属性。 **约束限制**： 不涉及。 **取值范围**： - agent：基于agent运行。 - agentless：无需agent运行。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getRuntimeAttribution() const;
    bool runtimeAttributionIsSet() const;
    void unsetruntimeAttribution();
    void setRuntimeAttribution(const std::string& value);

    /// <summary>
    /// **参数解释**： 扩展插件唯一标识。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getPluginName() const;
    bool pluginNameIsSet() const;
    void unsetpluginName();
    void setPluginName(const std::string& value);

    /// <summary>
    /// **参数解释**： 扩展插件展示名。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getDisplayName() const;
    bool displayNameIsSet() const;
    void unsetdisplayName();
    void setDisplayName(const std::string& value);

    /// <summary>
    /// **参数解释**： 扩展插件业务类型。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getBusinessType() const;
    bool businessTypeIsSet() const;
    void unsetbusinessType();
    void setBusinessType(const std::string& value);

    /// <summary>
    /// **参数解释**： 扩展插件业务类型展示名。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getBusinessTypeDisplayName() const;
    bool businessTypeDisplayNameIsSet() const;
    void unsetbusinessTypeDisplayName();
    void setBusinessTypeDisplayName(const std::string& value);

    /// <summary>
    /// **参数解释**： 扩展插件描述。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// **参数解释**： 是否私有。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    int32_t getIsPrivate() const;
    bool isPrivateIsSet() const;
    void unsetisPrivate();
    void setIsPrivate(int32_t value);

    /// <summary>
    /// **参数解释**： 局点。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getRegion() const;
    bool regionIsSet() const;
    void unsetregion();
    void setRegion(const std::string& value);

    /// <summary>
    /// **参数解释**： 维护者。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getMaintainers() const;
    bool maintainersIsSet() const;
    void unsetmaintainers();
    void setMaintainers(const std::string& value);

    /// <summary>
    /// **参数解释**： 标识是否为多个step组成的组。 **约束限制**： 不涉及。 **取值范围**： - single：单step插件。 - multi：组合插件。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getPluginCompositionType() const;
    bool pluginCompositionTypeIsSet() const;
    void unsetpluginCompositionType();
    void setPluginCompositionType(const std::string& value);


protected:
    std::string uniqueId_;
    bool uniqueIdIsSet_;
    std::string iconUrl_;
    bool iconUrlIsSet_;
    std::string runtimeAttribution_;
    bool runtimeAttributionIsSet_;
    std::string pluginName_;
    bool pluginNameIsSet_;
    std::string displayName_;
    bool displayNameIsSet_;
    std::string businessType_;
    bool businessTypeIsSet_;
    std::string businessTypeDisplayName_;
    bool businessTypeDisplayNameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    int32_t isPrivate_;
    bool isPrivateIsSet_;
    std::string region_;
    bool regionIsSet_;
    std::string maintainers_;
    bool maintainersIsSet_;
    std::string pluginCompositionType_;
    bool pluginCompositionTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_PluginBasicDTO_H_
