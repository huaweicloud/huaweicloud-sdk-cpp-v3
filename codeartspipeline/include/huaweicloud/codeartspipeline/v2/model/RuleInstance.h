
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_RuleInstance_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_RuleInstance_H_


#include <huaweicloud/codeartspipeline/v2/CodeArtsPipelineExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartspipeline/v2/model/RuleInstanceContent.h>
#include <huaweicloud/codeartspipeline/v2/model/RuleSet.h>
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
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  RuleInstance
    : public ModelBase
{
public:
    RuleInstance();
    virtual ~RuleInstance();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RuleInstance members

    /// <summary>
    /// **参数解释**： 规则实例ID。 **取值范围**： 32位字符，由数字和字母组成。 
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释**： 规则类型。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// **参数解释**： 规则名称。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**： 规则版本。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(const std::string& value);

    /// <summary>
    /// **参数解释**： 插件ID。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getPluginId() const;
    bool pluginIdIsSet() const;
    void unsetpluginId();
    void setPluginId(const std::string& value);

    /// <summary>
    /// **参数解释**： 插件名称。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getPluginName() const;
    bool pluginNameIsSet() const;
    void unsetpluginName();
    void setPluginName(const std::string& value);

    /// <summary>
    /// **参数解释**： 插件版本号。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getPluginVersion() const;
    bool pluginVersionIsSet() const;
    void unsetpluginVersion();
    void setPluginVersion(const std::string& value);

    /// <summary>
    /// **参数解释**： 规则是否生效。 **取值范围**： - true：规则生效。 - false：规则不生效。 
    /// </summary>

    bool isIsValid() const;
    bool isValidIsSet() const;
    void unsetisValid();
    void setIsValid(bool value);

    /// <summary>
    /// **参数解释**： 规则是否可编辑。 **取值范围**： - true：规则可编辑。 - false：规则不可编辑。 
    /// </summary>

    bool isEditable() const;
    bool editableIsSet() const;
    void unseteditable();
    void setEditable(bool value);

    /// <summary>
    /// **参数解释**： 规则实例集合。 **取值范围**： 不涉及。 
    /// </summary>

    std::vector<RuleInstanceContent>& getContent();
    bool contentIsSet() const;
    void unsetcontent();
    void setContent(const std::vector<RuleInstanceContent>& value);

    /// <summary>
    /// 
    /// </summary>

    RuleSet getParent() const;
    bool parentIsSet() const;
    void unsetparent();
    void setParent(const RuleSet& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string version_;
    bool versionIsSet_;
    std::string pluginId_;
    bool pluginIdIsSet_;
    std::string pluginName_;
    bool pluginNameIsSet_;
    std::string pluginVersion_;
    bool pluginVersionIsSet_;
    bool isValid_;
    bool isValidIsSet_;
    bool editable_;
    bool editableIsSet_;
    std::vector<RuleInstanceContent> content_;
    bool contentIsSet_;
    RuleSet parent_;
    bool parentIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_RuleInstance_H_
