
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ShowProjectStrategyResponse_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ShowProjectStrategyResponse_H_


#include <huaweicloud/codeartspipeline/v2/CodeArtsPipelineExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartspipeline/v2/model/RuleInstance.h>
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
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  ShowProjectStrategyResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowProjectStrategyResponse();
    virtual ~ShowProjectStrategyResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowProjectStrategyResponse members

    /// <summary>
    /// **参数解释**： 规则模板实例ID。 **取值范围**： 32位字符，由数字和字母组成。 
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释**： 规则模板实例名称。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**： 规则模板类型。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// **参数解释**： 规则模板策略。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(const std::string& value);

    /// <summary>
    /// **参数解释**： 策略创建人。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getCreator() const;
    bool creatorIsSet() const;
    void unsetcreator();
    void setCreator(const std::string& value);

    /// <summary>
    /// **参数解释**： 策略创建时间。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);

    /// <summary>
    /// **参数解释**： 策略最近更新人。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getUpdater() const;
    bool updaterIsSet() const;
    void unsetupdater();
    void setUpdater(const std::string& value);

    /// <summary>
    /// **参数解释**： 策略最近更新时间。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getUpdateTime() const;
    bool updateTimeIsSet() const;
    void unsetupdateTime();
    void setUpdateTime(const std::string& value);

    /// <summary>
    /// **参数解释**： 策略是否生效。 **取值范围**： - true：策略生效。 - false：策略不生效。 
    /// </summary>

    bool isIsValid() const;
    bool isValidIsSet() const;
    void unsetisValid();
    void setIsValid(bool value);

    /// <summary>
    /// **参数解释**： 规则实例集合。 **取值范围**： 不涉及。 
    /// </summary>

    std::vector<RuleInstance>& getRuleInstances();
    bool ruleInstancesIsSet() const;
    void unsetruleInstances();
    void setRuleInstances(const std::vector<RuleInstance>& value);

    /// <summary>
    /// **参数解释**： 规则实例生效级别。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getLevel() const;
    bool levelIsSet() const;
    void unsetlevel();
    void setLevel(const std::string& value);

    /// <summary>
    /// **参数解释**： 规则实例是否系统级。 **取值范围**： - true：规则实例是系统级。 - false：规则实例不是系统级。 
    /// </summary>

    bool isIsPublic() const;
    bool isPublicIsSet() const;
    void unsetisPublic();
    void setIsPublic(bool value);

    /// <summary>
    /// **参数解释**： 规则实例是1.0的数据。 **取值范围**： - true：规则实例是1.0的数据。 - false：规则实例是1.0的数据。 
    /// </summary>

    bool isIsLegacy() const;
    bool isLegacyIsSet() const;
    void unsetisLegacy();
    void setIsLegacy(bool value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string version_;
    bool versionIsSet_;
    std::string creator_;
    bool creatorIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;
    std::string updater_;
    bool updaterIsSet_;
    std::string updateTime_;
    bool updateTimeIsSet_;
    bool isValid_;
    bool isValidIsSet_;
    std::vector<RuleInstance> ruleInstances_;
    bool ruleInstancesIsSet_;
    std::string level_;
    bool levelIsSet_;
    bool isPublic_;
    bool isPublicIsSet_;
    bool isLegacy_;
    bool isLegacyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ShowProjectStrategyResponse_H_
