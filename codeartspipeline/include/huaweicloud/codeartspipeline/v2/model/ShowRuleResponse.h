
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ShowRuleResponse_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ShowRuleResponse_H_


#include <huaweicloud/codeartspipeline/v2/CodeArtsPipelineExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartspipeline/v2/model/RuleContent.h>
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
/// Response Object
/// </summary>
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  ShowRuleResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowRuleResponse();
    virtual ~ShowRuleResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowRuleResponse members

    /// <summary>
    /// **参数解释**： 规则ID。 **取值范围**： 32位字符，由数字和字母组成。 
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释**： 规则类型。 **取值范围**： - Build：构建。 - Gate：代码检查。 - Test：测试。 
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
    /// **参数解释**： 规则是否有效。 **取值范围**： true:有效，false:无效 
    /// </summary>

    bool isIsValid() const;
    bool isValidIsSet() const;
    void unsetisValid();
    void setIsValid(bool value);

    /// <summary>
    /// **参数解释**： 规则版本。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(const std::string& value);

    /// <summary>
    /// **参数解释**： 扩展插件唯一ID。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getPluginId() const;
    bool pluginIdIsSet() const;
    void unsetpluginId();
    void setPluginId(const std::string& value);

    /// <summary>
    /// **参数解释**： 扩展插件名称。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getPluginName() const;
    bool pluginNameIsSet() const;
    void unsetpluginName();
    void setPluginName(const std::string& value);

    /// <summary>
    /// **参数解释**： 扩展插件版本号。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getPluginVersion() const;
    bool pluginVersionIsSet() const;
    void unsetpluginVersion();
    void setPluginVersion(const std::string& value);

    /// <summary>
    /// **参数解释**： 规则创建人。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getCreator() const;
    bool creatorIsSet() const;
    void unsetcreator();
    void setCreator(const std::string& value);

    /// <summary>
    /// **参数解释**： 规则创建时间。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);

    /// <summary>
    /// **参数解释**： 规则最后更新人。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getUpdater() const;
    bool updaterIsSet() const;
    void unsetupdater();
    void setUpdater(const std::string& value);

    /// <summary>
    /// **参数解释**： 规则最后更新时间。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getUpdateTime() const;
    bool updateTimeIsSet() const;
    void unsetupdateTime();
    void setUpdateTime(const std::string& value);

    /// <summary>
    /// **参数解释**： 规则详细属性。 **取值范围**： 不涉及。 
    /// </summary>

    std::vector<RuleContent>& getContent();
    bool contentIsSet() const;
    void unsetcontent();
    void setContent(const std::vector<RuleContent>& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string name_;
    bool nameIsSet_;
    bool isValid_;
    bool isValidIsSet_;
    std::string version_;
    bool versionIsSet_;
    std::string pluginId_;
    bool pluginIdIsSet_;
    std::string pluginName_;
    bool pluginNameIsSet_;
    std::string pluginVersion_;
    bool pluginVersionIsSet_;
    std::string creator_;
    bool creatorIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;
    std::string updater_;
    bool updaterIsSet_;
    std::string updateTime_;
    bool updateTimeIsSet_;
    std::vector<RuleContent> content_;
    bool contentIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ShowRuleResponse_H_
