
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_PluginPartQueryDTO_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_PluginPartQueryDTO_H_


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
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  PluginPartQueryDTO
    : public ModelBase
{
public:
    PluginPartQueryDTO();
    virtual ~PluginPartQueryDTO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PluginPartQueryDTO members

    /// <summary>
    /// **参数解释**： 插件名。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getPluginName() const;
    bool pluginNameIsSet() const;
    void unsetpluginName();
    void setPluginName(const std::string& value);

    /// <summary>
    /// **参数解释**： 展示名。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getDisplayName() const;
    bool displayNameIsSet() const;
    void unsetdisplayName();
    void setDisplayName(const std::string& value);

    /// <summary>
    /// **参数解释**： 版本号。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(const std::string& value);

    /// <summary>
    /// **参数解释**： 插件属性。 **约束限制**： 不涉及。 **取值范围**： - custom：自定义插件。 - official：官方插件。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getPluginAttribution() const;
    bool pluginAttributionIsSet() const;
    void unsetpluginAttribution();
    void setPluginAttribution(const std::string& value);

    /// <summary>
    /// **参数解释**： 版本属性。 **约束限制**： 不涉及。 **取值范围**： - draft：草稿版本。 - formal：正式版本。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getVersionAttribution() const;
    bool versionAttributionIsSet() const;
    void unsetversionAttribution();
    void setVersionAttribution(const std::string& value);


protected:
    std::string pluginName_;
    bool pluginNameIsSet_;
    std::string displayName_;
    bool displayNameIsSet_;
    std::string version_;
    bool versionIsSet_;
    std::string pluginAttribution_;
    bool pluginAttributionIsSet_;
    std::string versionAttribution_;
    bool versionAttributionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_PluginPartQueryDTO_H_
