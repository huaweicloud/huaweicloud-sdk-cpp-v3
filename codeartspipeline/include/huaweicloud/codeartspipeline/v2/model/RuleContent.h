
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_RuleContent_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_RuleContent_H_


#include <huaweicloud/codeartspipeline/v2/CodeArtsPipelineExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/codeartspipeline/v2/model/RuleProperty.h>
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
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  RuleContent
    : public ModelBase
{
public:
    RuleContent();
    virtual ~RuleContent();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RuleContent members

    /// <summary>
    /// **参数解释**： 分组名称。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getGroupName() const;
    bool groupNameIsSet() const;
    void unsetgroupName();
    void setGroupName(const std::string& value);

    /// <summary>
    /// **参数解释**： 继承后的子策略是否可以修改阈值。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    bool isCanModifyWhenInherit() const;
    bool canModifyWhenInheritIsSet() const;
    void unsetcanModifyWhenInherit();
    void setCanModifyWhenInherit(bool value);

    /// <summary>
    /// **参数解释**： 规则属性列表。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::vector<RuleProperty>& getProperties();
    bool propertiesIsSet() const;
    void unsetproperties();
    void setProperties(const std::vector<RuleProperty>& value);


protected:
    std::string groupName_;
    bool groupNameIsSet_;
    bool canModifyWhenInherit_;
    bool canModifyWhenInheritIsSet_;
    std::vector<RuleProperty> properties_;
    bool propertiesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_RuleContent_H_
