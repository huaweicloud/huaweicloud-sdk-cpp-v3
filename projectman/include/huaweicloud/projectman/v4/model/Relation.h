
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_Relation_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_Relation_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/projectman/v4/model/RelateAction.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 关联关系
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  Relation
    : public ModelBase
{
public:
    Relation();
    virtual ~Relation();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Relation members

    /// <summary>
    /// **参数解释**： 关系code。 **取值范围**： 不涉及。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// **参数解释**： 关联的工作项code列表。 **取值范围**： 不涉及。
    /// </summary>

    std::vector<std::string>& getCategories();
    bool categoriesIsSet() const;
    void unsetcategories();
    void setCategories(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释**： 工作流场景使用，前置校验中的关联关系校验字段。 **取值范围**： 不涉及。
    /// </summary>

    std::string getLinkFieldCode() const;
    bool linkFieldCodeIsSet() const;
    void unsetlinkFieldCode();
    void setLinkFieldCode(const std::string& value);

    /// <summary>
    /// **参数解释**： 关系名称，在工作项详情关联项下左侧显示。 **取值范围**： 不涉及。
    /// </summary>

    std::string getRelationName() const;
    bool relationNameIsSet() const;
    void unsetrelationName();
    void setRelationName(const std::string& value);

    /// <summary>
    /// **参数解释**： 关系描述。 **取值范围**： 不涉及。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// **参数解释**： 展示范围。 **取值范围**： 不涉及。
    /// </summary>

    std::string getDisplayScope() const;
    bool displayScopeIsSet() const;
    void unsetdisplayScope();
    void setDisplayScope(const std::string& value);

    /// <summary>
    /// **参数解释**： 动作行为。 **取值范围**： 不涉及。
    /// </summary>

    std::vector<RelateAction>& getActions();
    bool actionsIsSet() const;
    void unsetactions();
    void setActions(const std::vector<RelateAction>& value);

    /// <summary>
    /// **参数解释**： 动作行为。 **取值范围**： - ONE_TO_ONE 一对一 - ONE_TO_MANY 一对多 - MANY_TO_ONE 多对一 - MANY_TO_MANY 多对多
    /// </summary>

    std::string getRelateType() const;
    bool relateTypeIsSet() const;
    void unsetrelateType();
    void setRelateType(const std::string& value);


protected:
    std::string type_;
    bool typeIsSet_;
    std::vector<std::string> categories_;
    bool categoriesIsSet_;
    std::string linkFieldCode_;
    bool linkFieldCodeIsSet_;
    std::string relationName_;
    bool relationNameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string displayScope_;
    bool displayScopeIsSet_;
    std::vector<RelateAction> actions_;
    bool actionsIsSet_;
    std::string relateType_;
    bool relateTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_Relation_H_
