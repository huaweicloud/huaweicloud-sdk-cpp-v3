
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_PageInfoBusinessTypeDefinitionVO_all_steps_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_PageInfoBusinessTypeDefinitionVO_all_steps_H_


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
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  PageInfoBusinessTypeDefinitionVO_all_steps
    : public ModelBase
{
public:
    PageInfoBusinessTypeDefinitionVO_all_steps();
    virtual ~PageInfoBusinessTypeDefinitionVO_all_steps();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PageInfoBusinessTypeDefinitionVO_all_steps members

    /// <summary>
    /// **参数解释**： 插件名。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getPluginName() const;
    bool pluginNameIsSet() const;
    void unsetpluginName();
    void setPluginName(const std::string& value);

    /// <summary>
    /// **参数解释**： 展示名。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getDisplayName() const;
    bool displayNameIsSet() const;
    void unsetdisplayName();
    void setDisplayName(const std::string& value);

    /// <summary>
    /// **参数解释**： 版本。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(const std::string& value);


protected:
    std::string pluginName_;
    bool pluginNameIsSet_;
    std::string displayName_;
    bool displayNameIsSet_;
    std::string version_;
    bool versionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_PageInfoBusinessTypeDefinitionVO_all_steps_H_
