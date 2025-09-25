
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_RuleInstanceContent_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_RuleInstanceContent_H_


#include <huaweicloud/codeartspipeline/v2/CodeArtsPipelineExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>
#include <huaweicloud/codeartspipeline/v2/model/RuleInstanceProperty.h>

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
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  RuleInstanceContent
    : public ModelBase
{
public:
    RuleInstanceContent();
    virtual ~RuleInstanceContent();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RuleInstanceContent members

    /// <summary>
    /// **参数解释**： 分组名称。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getGroupName() const;
    bool groupNameIsSet() const;
    void unsetgroupName();
    void setGroupName(const std::string& value);

    /// <summary>
    /// **参数解释**： 是否可编辑。 **取值范围**： 不涉及。 
    /// </summary>

    bool isEditable() const;
    bool editableIsSet() const;
    void unseteditable();
    void setEditable(bool value);

    /// <summary>
    /// **参数解释**： 分组类型。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// **参数解释**： 继承后的子策略是否可以修改阈值。 **取值范围**： - true：可以修改阈值。 - false：不可以修改阈值。 
    /// </summary>

    bool isCanModifyWhenInherit() const;
    bool canModifyWhenInheritIsSet() const;
    void unsetcanModifyWhenInherit();
    void setCanModifyWhenInherit(bool value);

    /// <summary>
    /// **参数解释**： 规则属性列表。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::vector<RuleInstanceProperty>& getProperties();
    bool propertiesIsSet() const;
    void unsetproperties();
    void setProperties(const std::vector<RuleInstanceProperty>& value);


protected:
    std::string groupName_;
    bool groupNameIsSet_;
    bool editable_;
    bool editableIsSet_;
    std::string type_;
    bool typeIsSet_;
    bool canModifyWhenInherit_;
    bool canModifyWhenInheritIsSet_;
    std::vector<RuleInstanceProperty> properties_;
    bool propertiesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_RuleInstanceContent_H_
