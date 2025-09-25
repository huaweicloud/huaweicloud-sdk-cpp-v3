
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_PageInfoOptionalSinglePluginVO_data_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_PageInfoOptionalSinglePluginVO_data_H_


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
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  PageInfoOptionalSinglePluginVO_data
    : public ModelBase
{
public:
    PageInfoOptionalSinglePluginVO_data();
    virtual ~PageInfoOptionalSinglePluginVO_data();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PageInfoOptionalSinglePluginVO_data members

    /// <summary>
    /// **参数解释**： 扩展插件唯一标识。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**： 扩展插件在插件市场和流水线显示的名称。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getDisplayName() const;
    bool displayNameIsSet() const;
    void unsetdisplayName();
    void setDisplayName(const std::string& value);

    /// <summary>
    /// **参数解释**： 标识是否为官方插件。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getPluginAttribution() const;
    bool pluginAttributionIsSet() const;
    void unsetpluginAttribution();
    void setPluginAttribution(const std::string& value);

    /// <summary>
    /// **参数解释**： 图标URL。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getIconUrl() const;
    bool iconUrlIsSet() const;
    void unseticonUrl();
    void setIconUrl(const std::string& value);

    /// <summary>
    /// **参数解释**： 插件描述。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// **参数解释**： 发布商ID。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getPublisherId() const;
    bool publisherIdIsSet() const;
    void unsetpublisherId();
    void setPublisherId(const std::string& value);

    /// <summary>
    /// **参数解释**： 版本。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getManifestVersion() const;
    bool manifestVersionIsSet() const;
    void unsetmanifestVersion();
    void setManifestVersion(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string displayName_;
    bool displayNameIsSet_;
    std::string pluginAttribution_;
    bool pluginAttributionIsSet_;
    std::string iconUrl_;
    bool iconUrlIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string publisherId_;
    bool publisherIdIsSet_;
    std::string manifestVersion_;
    bool manifestVersionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_PageInfoOptionalSinglePluginVO_data_H_
