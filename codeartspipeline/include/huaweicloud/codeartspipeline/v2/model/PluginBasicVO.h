
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_PluginBasicVO_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_PluginBasicVO_H_


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
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  PluginBasicVO
    : public ModelBase
{
public:
    PluginBasicVO();
    virtual ~PluginBasicVO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PluginBasicVO members

    /// <summary>
    /// **参数解释**： 扩展插件名称。 **取值范围**： 1到50位字符。 
    /// </summary>

    std::string getPluginName() const;
    bool pluginNameIsSet() const;
    void unsetpluginName();
    void setPluginName(const std::string& value);

    /// <summary>
    /// **参数解释**： 扩展插件名称。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getDisplayName() const;
    bool displayNameIsSet() const;
    void unsetdisplayName();
    void setDisplayName(const std::string& value);

    /// <summary>
    /// **参数解释**： 插件记录展示名称。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getDbRecordName() const;
    bool dbRecordNameIsSet() const;
    void unsetdbRecordName();
    void setDbRecordName(const std::string& value);

    /// <summary>
    /// **参数解释**： 扩展插件版本号。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(const std::string& value);

    /// <summary>
    /// **参数解释**： 扩展插件版本号说明。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getVersionDescription() const;
    bool versionDescriptionIsSet() const;
    void unsetversionDescription();
    void setVersionDescription(const std::string& value);

    /// <summary>
    /// **参数解释**： 扩展插件描述。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// **参数解释**： 扩展插件版本属性。 **取值范围**： - draft：草稿版本。 - formal：正式版本。 
    /// </summary>

    std::string getVersionAttribution() const;
    bool versionAttributionIsSet() const;
    void unsetversionAttribution();
    void setVersionAttribution(const std::string& value);

    /// <summary>
    /// **参数解释**： 扩展插件唯一ID。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getUniqueId() const;
    bool uniqueIdIsSet() const;
    void unsetuniqueId();
    void setUniqueId(const std::string& value);

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
    /// **参数解释**： 用于标识插件是否为多个step组成的组合插件。 **取值范围**： - multi：组合插件。 - single：非组合插件。 
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
    /// **参数解释**： 租户ID，用户的domainId。 **取值范围**： 32位字符，仅由数字和字母组成。 
    /// </summary>

    std::string getWorkspaceId() const;
    bool workspaceIdIsSet() const;
    void unsetworkspaceId();
    void setWorkspaceId(const std::string& value);

    /// <summary>
    /// **参数解释**： 扩展插件业务类型。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getBusinessType() const;
    bool businessTypeIsSet() const;
    void unsetbusinessType();
    void setBusinessType(const std::string& value);

    /// <summary>
    /// **参数解释**： 扩展插件业务类型展示名称。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getBusinessTypeDisplayName() const;
    bool businessTypeDisplayNameIsSet() const;
    void unsetbusinessTypeDisplayName();
    void setBusinessTypeDisplayName(const std::string& value);

    /// <summary>
    /// **参数解释**： 扩展插件维护人。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getMaintainers() const;
    bool maintainersIsSet() const;
    void unsetmaintainers();
    void setMaintainers(const std::string& value);

    /// <summary>
    /// **参数解释**： 扩展插件图标地址。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getIconUrl() const;
    bool iconUrlIsSet() const;
    void unseticonUrl();
    void setIconUrl(const std::string& value);

    /// <summary>
    /// **参数解释**： 扩展插件被流水线引用次数。 **取值范围**： 不涉及。 
    /// </summary>

    int32_t getReferCount() const;
    bool referCountIsSet() const;
    void unsetreferCount();
    void setReferCount(int32_t value);

    /// <summary>
    /// **参数解释**： 扩展插件被流水线使用次数。 **取值范围**： 不涉及。 
    /// </summary>

    int32_t getUsageCount() const;
    bool usageCountIsSet() const;
    void unsetusageCount();
    void setUsageCount(int32_t value);

    /// <summary>
    /// **参数解释**： 运行属性。 **取值范围**： - agent：运行基于流水线agent。 - agentLess：运行无需流水线agent。 
    /// </summary>

    std::string getRuntimeAttribution() const;
    bool runtimeAttributionIsSet() const;
    void unsetruntimeAttribution();
    void setRuntimeAttribution(const std::string& value);

    /// <summary>
    /// **参数解释**： 扩展插件是否激活。 **取值范围**： - true：激活。 - false：未激活。 
    /// </summary>

    int32_t getActive() const;
    bool activeIsSet() const;
    void unsetactive();
    void setActive(int32_t value);

    /// <summary>
    /// **参数解释**： 当前插件版本状态。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getVersionState() const;
    bool versionStateIsSet() const;
    void unsetversionState();
    void setVersionState(const std::string& value);

    /// <summary>
    /// **参数解释**： 发布商ID。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getPublisherUniqueId() const;
    bool publisherUniqueIdIsSet() const;
    void unsetpublisherUniqueId();
    void setPublisherUniqueId(const std::string& value);

    /// <summary>
    /// **参数解释**： 创建者名称。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getCreator() const;
    bool creatorIsSet() const;
    void unsetcreator();
    void setCreator(const std::string& value);

    /// <summary>
    /// **参数解释**： 创建时间。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);

    /// <summary>
    /// **参数解释**： 插件版本标识符。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getManifestVersion() const;
    bool manifestVersionIsSet() const;
    void unsetmanifestVersion();
    void setManifestVersion(const std::string& value);


protected:
    std::string pluginName_;
    bool pluginNameIsSet_;
    std::string displayName_;
    bool displayNameIsSet_;
    std::string dbRecordName_;
    bool dbRecordNameIsSet_;
    std::string version_;
    bool versionIsSet_;
    std::string versionDescription_;
    bool versionDescriptionIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string versionAttribution_;
    bool versionAttributionIsSet_;
    std::string uniqueId_;
    bool uniqueIdIsSet_;
    std::string opUser_;
    bool opUserIsSet_;
    std::string opTime_;
    bool opTimeIsSet_;
    std::string pluginCompositionType_;
    bool pluginCompositionTypeIsSet_;
    std::string pluginAttribution_;
    bool pluginAttributionIsSet_;
    std::string workspaceId_;
    bool workspaceIdIsSet_;
    std::string businessType_;
    bool businessTypeIsSet_;
    std::string businessTypeDisplayName_;
    bool businessTypeDisplayNameIsSet_;
    std::string maintainers_;
    bool maintainersIsSet_;
    std::string iconUrl_;
    bool iconUrlIsSet_;
    int32_t referCount_;
    bool referCountIsSet_;
    int32_t usageCount_;
    bool usageCountIsSet_;
    std::string runtimeAttribution_;
    bool runtimeAttributionIsSet_;
    int32_t active_;
    bool activeIsSet_;
    std::string versionState_;
    bool versionStateIsSet_;
    std::string publisherUniqueId_;
    bool publisherUniqueIdIsSet_;
    std::string creator_;
    bool creatorIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;
    std::string manifestVersion_;
    bool manifestVersionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_PluginBasicVO_H_
