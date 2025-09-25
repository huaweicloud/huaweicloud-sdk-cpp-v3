
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ShowPluginVersionResponse_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ShowPluginVersionResponse_H_


#include <huaweicloud/codeartspipeline/v2/CodeArtsPipelineExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartspipeline/v2/model/PluginInstanceVO_input_info.h>
#include <string>
#include <huaweicloud/codeartspipeline/v2/model/PluginExecutionVO.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  ShowPluginVersionResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowPluginVersionResponse();
    virtual ~ShowPluginVersionResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowPluginVersionResponse members

    /// <summary>
    /// **参数解释**： 扩展插件名称。 **取值范围**： 1到50位字符。 
    /// </summary>

    std::string getPluginName() const;
    bool pluginNameIsSet() const;
    void unsetpluginName();
    void setPluginName(const std::string& value);

    /// <summary>
    /// **参数解释**： 扩展插件展示名称。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getDisplayName() const;
    bool displayNameIsSet() const;
    void unsetdisplayName();
    void setDisplayName(const std::string& value);

    /// <summary>
    /// **参数解释**： 扩展插件最后更新人。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getOpUser() const;
    bool opUserIsSet() const;
    void unsetopUser();
    void setOpUser(const std::string& value);

    /// <summary>
    /// **参数解释**： 扩展插件最后更新时间。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getOpTime() const;
    bool opTimeIsSet() const;
    void unsetopTime();
    void setOpTime(const std::string& value);

    /// <summary>
    /// **参数解释**： 扩展插件版本号。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(const std::string& value);

    /// <summary>
    /// **参数解释**： 扩展插件唯一ID。 **取值范围**： 32位字符，由数字和字母组成。 
    /// </summary>

    std::string getUniqueId() const;
    bool uniqueIdIsSet() const;
    void unsetuniqueId();
    void setUniqueId(const std::string& value);

    /// <summary>
    /// **参数解释**： 扩展插件版本说明。 **取值范围**： 32位字符，由数字和字母组成。 
    /// </summary>

    std::string getVersionDescription() const;
    bool versionDescriptionIsSet() const;
    void unsetversionDescription();
    void setVersionDescription(const std::string& value);

    /// <summary>
    /// **参数解释**： 扩展插件版本属性。 **取值范围**： - draft：草稿版本。 - formal：正式版本。 
    /// </summary>

    std::string getVersionAttribution() const;
    bool versionAttributionIsSet() const;
    void unsetversionAttribution();
    void setVersionAttribution(const std::string& value);

    /// <summary>
    /// **参数解释**： 用于标识扩展插件是否为多个step组成的组合插件。 **取值范围**： - multi：组合插件。 - single：非组合插件。 
    /// </summary>

    std::string getPluginCompositionType() const;
    bool pluginCompositionTypeIsSet() const;
    void unsetpluginCompositionType();
    void setPluginCompositionType(const std::string& value);

    /// <summary>
    /// **参数解释**： 扩展插件属性。 **取值范围**： - custom：自定义插件。 - official：官方插件。 - published：已发布的发布商插件。 
    /// </summary>

    std::string getPluginAttribution() const;
    bool pluginAttributionIsSet() const;
    void unsetpluginAttribution();
    void setPluginAttribution(const std::string& value);

    /// <summary>
    /// **参数解释**： 插件输入项详细信息。 **取值范围**： 不涉及。 
    /// </summary>

    std::vector<PluginInstanceVO_input_info>& getInputInfo();
    bool inputInfoIsSet() const;
    void unsetinputInfo();
    void setInputInfo(const std::vector<PluginInstanceVO_input_info>& value);

    /// <summary>
    /// 
    /// </summary>

    PluginExecutionVO getPluginExecution() const;
    bool pluginExecutionIsSet() const;
    void unsetpluginExecution();
    void setPluginExecution(const PluginExecutionVO& value);

    /// <summary>
    /// **参数解释**： 运行属性。 **取值范围**： - agent：运行基于流水线agent。 - agentLess：运行无需流水线agent。 
    /// </summary>

    std::string getRuntimeAttribution() const;
    bool runtimeAttributionIsSet() const;
    void unsetruntimeAttribution();
    void setRuntimeAttribution(const std::string& value);


protected:
    std::string pluginName_;
    bool pluginNameIsSet_;
    std::string displayName_;
    bool displayNameIsSet_;
    std::string opUser_;
    bool opUserIsSet_;
    std::string opTime_;
    bool opTimeIsSet_;
    std::string version_;
    bool versionIsSet_;
    std::string uniqueId_;
    bool uniqueIdIsSet_;
    std::string versionDescription_;
    bool versionDescriptionIsSet_;
    std::string versionAttribution_;
    bool versionAttributionIsSet_;
    std::string pluginCompositionType_;
    bool pluginCompositionTypeIsSet_;
    std::string pluginAttribution_;
    bool pluginAttributionIsSet_;
    std::vector<PluginInstanceVO_input_info> inputInfo_;
    bool inputInfoIsSet_;
    PluginExecutionVO pluginExecution_;
    bool pluginExecutionIsSet_;
    std::string runtimeAttribution_;
    bool runtimeAttributionIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ShowPluginVersionResponse_H_
