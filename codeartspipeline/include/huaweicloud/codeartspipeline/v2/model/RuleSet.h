
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_RuleSet_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_RuleSet_H_


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
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  RuleSet
    : public ModelBase
{
public:
    RuleSet();
    virtual ~RuleSet();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RuleSet members

    /// <summary>
    /// **参数解释**： 规则模板实例ID。 **取值范围**： 不涉及。 
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
    /// **参数解释**： 规则实例类型。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// **参数解释**： 规则实例版本。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(const std::string& value);

    /// <summary>
    /// **参数解释**： 规则实例最近操作人。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getOperator() const;
    bool operatorIsSet() const;
    void unsetoperator();
    void setOperator(const std::string& value);

    /// <summary>
    /// **参数解释**： 规则实例最近操作时间。 **取值范围**： 不涉及。 
    /// </summary>

    int64_t getOperateTime() const;
    bool operateTimeIsSet() const;
    void unsetoperateTime();
    void setOperateTime(int64_t value);

    /// <summary>
    /// **参数解释**： 规则实例是否生效。 **取值范围**： - true：规则生效。 - false：规则不生效。 
    /// </summary>

    bool isIsValid() const;
    bool isValidIsSet() const;
    void unsetisValid();
    void setIsValid(bool value);

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
    std::string operator_;
    bool operatorIsSet_;
    int64_t operateTime_;
    bool operateTimeIsSet_;
    bool isValid_;
    bool isValidIsSet_;
    std::string level_;
    bool levelIsSet_;
    bool isPublic_;
    bool isPublicIsSet_;
    bool isLegacy_;
    bool isLegacyIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_RuleSet_H_
