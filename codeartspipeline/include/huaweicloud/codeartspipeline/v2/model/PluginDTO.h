
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_PluginDTO_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_PluginDTO_H_


#include <huaweicloud/codeartspipeline/v2/CodeArtsPipelineExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartspipeline/v2/model/PluginDTO_input_info.h>
#include <string>
#include <huaweicloud/codeartspipeline/v2/model/PluginDTO_output_info.h>
#include <huaweicloud/codeartspipeline/v2/model/PluginDTO_execution_info.h>
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
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  PluginDTO
    : public ModelBase
{
public:
    PluginDTO();
    virtual ~PluginDTO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PluginDTO members

    /// <summary>
    /// **参数解释**： 扩展插件唯一ID。可以通过[查询插件版本详情](ShowPluginVersion.xml)接口，获取响应参数中unique_id。 **约束限制**： 不涉及。 **取值范围**： 32位字符，由数字和字母组成。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getUniqueId() const;
    bool uniqueIdIsSet() const;
    void unsetuniqueId();
    void setUniqueId(const std::string& value);

    /// <summary>
    /// **参数解释**： 插件展示图标URL。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
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
    /// **参数解释**： 插件名。 **约束限制**： 仅支持输入大小写英文字母、数字、&#39;-&#39;、&#39;_&#39;。 **取值范围**： 1到50位字符。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getPluginName() const;
    bool pluginNameIsSet() const;
    void unsetpluginName();
    void setPluginName(const std::string& value);

    /// <summary>
    /// **参数解释**： 展示名。 **约束限制**： 仅支持输入大小写英文字母、中文、空格、数字、&#39;-&#39;、&#39;_&#39;、&#39;.&#39;。 **取值范围**： 1到50位字符。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getDisplayName() const;
    bool displayNameIsSet() const;
    void unsetdisplayName();
    void setDisplayName(const std::string& value);

    /// <summary>
    /// **参数解释**： 业务类型。 **约束限制**： 仅支持输入大小写英文字母、数字、&#39;-&#39;、&#39;_&#39;。 **取值范围**： 1到50位字符。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getBusinessType() const;
    bool businessTypeIsSet() const;
    void unsetbusinessType();
    void setBusinessType(const std::string& value);

    /// <summary>
    /// **参数解释**： 插件业务类型展示名。 **约束限制**： 不涉及。 **取值范围**： - 构建。 - 代码检查。 - 部署。 - 测试。 - 通用。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getBusinessTypeDisplayName() const;
    bool businessTypeDisplayNameIsSet() const;
    void unsetbusinessTypeDisplayName();
    void setBusinessTypeDisplayName(const std::string& value);

    /// <summary>
    /// **参数解释**： 插件描述。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// **参数解释**： 是否私有插件。 **约束限制**： 不涉及。 **取值范围**： - 1：私有插件。 - 0：公开插件。 **默认取值**： 0。 
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
    /// **参数解释**： 插件维护者。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getMaintainers() const;
    bool maintainersIsSet() const;
    void unsetmaintainers();
    void setMaintainers(const std::string& value);

    /// <summary>
    /// **参数解释**： 插件的组合类型。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getPluginCompositionType() const;
    bool pluginCompositionTypeIsSet() const;
    void unsetpluginCompositionType();
    void setPluginCompositionType(const std::string& value);

    /// <summary>
    /// **参数解释**： 用于区分新旧版数据版本。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getManifestVersion() const;
    bool manifestVersionIsSet() const;
    void unsetmanifestVersion();
    void setManifestVersion(const std::string& value);

    /// <summary>
    /// **参数解释**： 插件版本号。 **约束限制**： 必须是类似 x.xx.xx（例如：1.0.2） 的格式，其中：x 是 1 到 2 位的数字（范围 0 到 99）。xx 是点后跟随的数字部分，且每部分可以是 1 位或 2 位数字。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(const std::string& value);

    /// <summary>
    /// **参数解释**： 插件小版本版本号说明。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getVersionDescription() const;
    bool versionDescriptionIsSet() const;
    void unsetversionDescription();
    void setVersionDescription(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    PluginDTO_execution_info getExecutionInfo() const;
    bool executionInfoIsSet() const;
    void unsetexecutionInfo();
    void setExecutionInfo(const PluginDTO_execution_info& value);

    /// <summary>
    /// **参数解释**： 插件输出相关内容。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::vector<PluginDTO_output_info>& getOutputInfo();
    bool outputInfoIsSet() const;
    void unsetoutputInfo();
    void setOutputInfo(const std::vector<PluginDTO_output_info>& value);

    /// <summary>
    /// **参数解释**： 输入信息。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::vector<PluginDTO_input_info>& getInputInfo();
    bool inputInfoIsSet() const;
    void unsetinputInfo();
    void setInputInfo(const std::vector<PluginDTO_input_info>& value);


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
    std::string manifestVersion_;
    bool manifestVersionIsSet_;
    std::string version_;
    bool versionIsSet_;
    std::string versionDescription_;
    bool versionDescriptionIsSet_;
    PluginDTO_execution_info executionInfo_;
    bool executionInfoIsSet_;
    std::vector<PluginDTO_output_info> outputInfo_;
    bool outputInfoIsSet_;
    std::vector<PluginDTO_input_info> inputInfo_;
    bool inputInfoIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_PluginDTO_H_
