
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ShowPipelineTemplateDetailResponse_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ShowPipelineTemplateDetailResponse_H_


#include <huaweicloud/codeartspipeline/v2/CodeArtsPipelineExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/codeartspipeline/v2/model/CustomVariable.h>
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
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  ShowPipelineTemplateDetailResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowPipelineTemplateDetailResponse();
    virtual ~ShowPipelineTemplateDetailResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowPipelineTemplateDetailResponse members

    /// <summary>
    /// **参数解释**： 模板ID。 **取值范围**： 32位字符，由数字和字母组成。 
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释**： 模板名称。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**： 模板图标。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getIcon() const;
    bool iconIsSet() const;
    void unseticon();
    void setIcon(const std::string& value);

    /// <summary>
    /// **参数解释**： 版本。 **取值范围**： 默认3.0。 
    /// </summary>

    std::string getManifestVersion() const;
    bool manifestVersionIsSet() const;
    void unsetmanifestVersion();
    void setManifestVersion(const std::string& value);

    /// <summary>
    /// **参数解释**： 模板语言。 **取值范围**： - java。 - python。 - nodejs。 - go。 - net。 - cpp。 - php。 - other。 - none。 
    /// </summary>

    std::string getLanguage() const;
    bool languageIsSet() const;
    void unsetlanguage();
    void setLanguage(const std::string& value);

    /// <summary>
    /// **参数解释**： 模板描述。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// **参数解释**： 是否系统模板。 **取值范围**： - true：是系统模板。 - false：不是系统模板。 
    /// </summary>

    bool isIsSystem() const;
    bool isSystemIsSet() const;
    void unsetisSystem();
    void setIsSystem(bool value);

    /// <summary>
    /// **参数解释**： 模板局点。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getRegion() const;
    bool regionIsSet() const;
    void unsetregion();
    void setRegion(const std::string& value);

    /// <summary>
    /// **参数解释**： 模板所属租户ID。 **取值范围**： 32位字符，由数字和字母组成。 
    /// </summary>

    std::string getDomainId() const;
    bool domainIdIsSet() const;
    void unsetdomainId();
    void setDomainId(const std::string& value);

    /// <summary>
    /// **参数解释**： 自定义参数。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::vector<CustomVariable>& getVariables();
    bool variablesIsSet() const;
    void unsetvariables();
    void setVariables(const std::vector<CustomVariable>& value);

    /// <summary>
    /// **参数解释**： 模板创建人ID。 **取值范围**： 32位字符，由数字和字母组成。 
    /// </summary>

    std::string getCreatorId() const;
    bool creatorIdIsSet() const;
    void unsetcreatorId();
    void setCreatorId(const std::string& value);

    /// <summary>
    /// **参数解释**： 模板更新人ID。 **取值范围**： 32位字符，由数字和字母组成。 
    /// </summary>

    std::string getUpdaterId() const;
    bool updaterIdIsSet() const;
    void unsetupdaterId();
    void setUpdaterId(const std::string& value);

    /// <summary>
    /// **参数解释**： 是否收藏。 **取值范围**： - true：收藏。 - false：不收藏。 
    /// </summary>

    std::string getIsCollect() const;
    bool isCollectIsSet() const;
    void unsetisCollect();
    void setIsCollect(const std::string& value);

    /// <summary>
    /// **参数解释**： 是否展示流水线源。 **取值范围**： - true：展示流水线源。 - false：不展示流水线源。 
    /// </summary>

    bool isIsShowSource() const;
    bool isShowSourceIsSet() const;
    void unsetisShowSource();
    void setIsShowSource(bool value);

    /// <summary>
    /// **参数解释**： 模板编排json，包含stages。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getDefinition() const;
    bool definitionIsSet() const;
    void unsetdefinition();
    void setDefinition(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string icon_;
    bool iconIsSet_;
    std::string manifestVersion_;
    bool manifestVersionIsSet_;
    std::string language_;
    bool languageIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    bool isSystem_;
    bool isSystemIsSet_;
    std::string region_;
    bool regionIsSet_;
    std::string domainId_;
    bool domainIdIsSet_;
    std::vector<CustomVariable> variables_;
    bool variablesIsSet_;
    std::string creatorId_;
    bool creatorIdIsSet_;
    std::string updaterId_;
    bool updaterIdIsSet_;
    std::string isCollect_;
    bool isCollectIsSet_;
    bool isShowSource_;
    bool isShowSourceIsSet_;
    std::string definition_;
    bool definitionIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ShowPipelineTemplateDetailResponse_H_
