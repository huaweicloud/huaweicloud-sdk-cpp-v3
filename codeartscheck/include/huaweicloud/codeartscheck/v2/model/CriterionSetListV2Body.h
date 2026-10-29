
#ifndef HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_CriterionSetListV2Body_H_
#define HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_CriterionSetListV2Body_H_


#include <huaweicloud/codeartscheck/v2/CodeArtsCheckExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSCHECK_V2_EXPORT  CriterionSetListV2Body
    : public ModelBase
{
public:
    CriterionSetListV2Body();
    virtual ~CriterionSetListV2Body();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CriterionSetListV2Body members

    /// <summary>
    /// **参数解释：** 规则集ID。 **取值范围：** 不涉及。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释：** 规则集中文名称。 **取值范围：** 任意中英文字符，数字，点，连字符和下划线组成的字符串，长度为[1~128]个字符。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释：** 规则集中文描述。 **取值范围：** 不涉及。
    /// </summary>

    std::string getComments() const;
    bool commentsIsSet() const;
    void unsetcomments();
    void setComments(const std::string& value);

    /// <summary>
    /// **参数解释：** 规则集类型。 **取值范围：** - system：系统规则集。 - custom：自定义规则集。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// **参数解释：** 规则集创建者。 **取值范围：** 用户名。
    /// </summary>

    std::string getCreator() const;
    bool creatorIsSet() const;
    void unsetcreator();
    void setCreator(const std::string& value);

    /// <summary>
    /// **参数解释：** 规则集创建时间。 **取值范围：** 0时区标准时间。
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);

    /// <summary>
    /// **参数解释：** 规则集最近一次更新的操作人。 **取值范围：** 用户名。
    /// </summary>

    std::string getLastReviser() const;
    bool lastReviserIsSet() const;
    void unsetlastReviser();
    void setLastReviser(const std::string& value);

    /// <summary>
    /// **参数解释：** 规则集最近一次更新的时间。 **取值范围：** 0时区标准时间。
    /// </summary>

    std::string getLastUpdateTime() const;
    bool lastUpdateTimeIsSet() const;
    void unsetlastUpdateTime();
    void setLastUpdateTime(const std::string& value);

    /// <summary>
    /// **参数解释：** 规则集语言。 **取值范围：** - ARKTS - C# - CANGJIE - C++ - CSS - GO - HTML - JAVA - JAVASCRIPT - KOTLIN - LUA - PHP - PYTHON - RUST - SCALA - SHELL - SQL - TERRAFORM - TYPESCRIPT - AZURERESOURCEMANAGER - DOCKER - KUBERNETES
    /// </summary>

    std::string getLanguage() const;
    bool languageIsSet() const;
    void unsetlanguage();
    void setLanguage(const std::string& value);

    /// <summary>
    /// **参数解释：** 父规则集ID。 **取值范围：** 32位UUID组成的字符串。多个ID之间用逗号分隔。
    /// </summary>

    std::string getParentId() const;
    bool parentIdIsSet() const;
    void unsetparentId();
    void setParentId(const std::string& value);

    /// <summary>
    /// **参数解释：** 规则集中已启用的规则数量。 **取值范围：** ≥0
    /// </summary>

    int32_t getNumCriterion() const;
    bool numCriterionIsSet() const;
    void unsetnumCriterion();
    void setNumCriterion(int32_t value);

    /// <summary>
    /// **参数解释：** 当前用户是否具有修改该规则集的权限。 **取值范围：** - true：有编辑的权限。 - false：没有编辑的权限。
    /// </summary>

    bool isCanEdit() const;
    bool canEditIsSet() const;
    void unsetcanEdit();
    void setCanEdit(bool value);

    /// <summary>
    /// **参数解释：** 当前用户是否具有删除该规则集的权限。 **取值范围：** - true：有删除的权限。 - false：没有删除的权限。
    /// </summary>

    bool isCanDelete() const;
    bool canDeleteIsSet() const;
    void unsetcanDelete();
    void setCanDelete(bool value);

    /// <summary>
    /// **参数解释：** 规则集管理员。 **取值范围：** 用户ID。多个ID用逗号分隔。
    /// </summary>

    std::string getManagers() const;
    bool managersIsSet() const;
    void unsetmanagers();
    void setManagers(const std::string& value);

    /// <summary>
    /// **参数解释：** 父规则集的名称。 **取值范围：** 多个规则集名称之间用逗号分隔。
    /// </summary>

    std::string getParentSetNames() const;
    bool parentSetNamesIsSet() const;
    void unsetparentSetNames();
    void setParentSetNames(const std::string& value);

    /// <summary>
    /// **参数解释：** 租户ID，租户ID的值来源于IAM的租户ID。 **取值范围：** 32位UUID。
    /// </summary>

    std::string getDomainId() const;
    bool domainIdIsSet() const;
    void unsetdomainId();
    void setDomainId(const std::string& value);

    /// <summary>
    /// **参数解释：** 规则集创建时候的继承类型。 **取值范围：** - strong：规则集创建的时候来源于继承。 - null：规则集创建的时候来源于非继承。
    /// </summary>

    std::string getInheritMode() const;
    bool inheritModeIsSet() const;
    void unsetinheritMode();
    void setInheritMode(const std::string& value);

    /// <summary>
    /// **参数解释：** 创建者用户ID。 **取值范围：** 32位UUID。
    /// </summary>

    std::string getCreatorId() const;
    bool creatorIdIsSet() const;
    void unsetcreatorId();
    void setCreatorId(const std::string& value);

    /// <summary>
    /// **参数解释：** 是否为系统默认规则集。 **取值范围：** - 0：否。 - 1：是。
    /// </summary>

    std::string getIsSystemDefault() const;
    bool isSystemDefaultIsSet() const;
    void unsetisSystemDefault();
    void setIsSystemDefault(const std::string& value);

    /// <summary>
    /// **参数解释：** 是否为项目默认规则集。 **取值范围：** - 0：否。 - 1：是。
    /// </summary>

    std::string getIsProjectDefault() const;
    bool isProjectDefaultIsSet() const;
    void unsetisProjectDefault();
    void setIsProjectDefault(const std::string& value);

    /// <summary>
    /// **参数解释：** 是否为系统规则集。 **取值范围：** - 0：否。 - 1：是。
    /// </summary>

    std::string getIsSystemSet() const;
    bool isSystemSetIsSet() const;
    void unsetisSystemSet();
    void setIsSystemSet(const std::string& value);

    /// <summary>
    /// **参数解释：** 规则集中已启用的能力规则unique_id。 **取值范围：** unique_id为32位UUID。多个unique_id之间用逗号分隔。
    /// </summary>

    std::string getRuleIds() const;
    bool ruleIdsIsSet() const;
    void unsetruleIds();
    void setRuleIds(const std::string& value);

    /// <summary>
    /// **参数解释：** 规则集所在局点。 **取值范围：** 不涉及。
    /// </summary>

    std::string getRegion() const;
    bool regionIsSet() const;
    void unsetregion();
    void setRegion(const std::string& value);

    /// <summary>
    /// **参数解释：** 是否具有设置默认规则集的权限。 **取值范围：** - true：有权限。 - false：没有权限。
    /// </summary>

    bool isCanSetDefault() const;
    bool canSetDefaultIsSet() const;
    void unsetcanSetDefault();
    void setCanSetDefault(bool value);

    /// <summary>
    /// **参数解释：** 规则集是否被使用。 **取值范围：** - true：规则集被使用。 - false：规则集未被使用。
    /// </summary>

    bool isIsUsed() const;
    bool isUsedIsSet() const;
    void unsetisUsed();
    void setIsUsed(bool value);

    /// <summary>
    /// **参数解释：** 子规则集。 **取值范围：** 不涉及。
    /// </summary>

    std::vector<std::string>& getChildSets();
    bool childSetsIsSet() const;
    void unsetchildSets();
    void setChildSets(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释：** 是否为可信规则集。该字段已弃用。 **取值范围：** - true：是。 - false：否。
    /// </summary>

    bool isIsReliable() const;
    bool isReliableIsSet() const;
    void unsetisReliable();
    void setIsReliable(bool value);

    /// <summary>
    /// **参数解释：** 是否为推荐规则集。该字段已弃用。 **取值范围：** - 1：是。 - 0：否。
    /// </summary>

    std::string getIsRecommand() const;
    bool isRecommandIsSet() const;
    void unsetisRecommand();
    void setIsRecommand(const std::string& value);

    /// <summary>
    /// **参数解释：** 是否为默认规则集。该字段已弃用。 **取值范围：** - true：是。 - false：否。
    /// </summary>

    bool isIsDefault() const;
    bool isDefaultIsSet() const;
    void unsetisDefault();
    void setIsDefault(bool value);

    /// <summary>
    /// **参数解释：** 是否为默认规则集。该字段已弃用。 **取值范围：** - \&quot;true\&quot;：是。 - \&quot;false\&quot;：否。
    /// </summary>

    std::string getDefaultSet() const;
    bool defaultSetIsSet() const;
    void unsetdefaultSet();
    void setDefaultSet(const std::string& value);

    /// <summary>
    /// **参数解释：** 该字段已弃用。 **取值范围：** 不涉及。
    /// </summary>

    std::string getDeptId() const;
    bool deptIdIsSet() const;
    void unsetdeptId();
    void setDeptId(const std::string& value);

    /// <summary>
    /// **参数解释：** 该字段已弃用。 **取值范围：** 不涉及。
    /// </summary>

    std::string getDeptName() const;
    bool deptNameIsSet() const;
    void unsetdeptName();
    void setDeptName(const std::string& value);

    /// <summary>
    /// **参数解释：** 该字段已弃用。 **取值范围：** 不涉及。
    /// </summary>

    std::string getReliableTag() const;
    bool reliableTagIsSet() const;
    void unsetreliableTag();
    void setReliableTag(const std::string& value);

    /// <summary>
    /// **参数解释：** 该字段已弃用。 **取值范围：** 不涉及。
    /// </summary>

    std::string getRecommandType() const;
    bool recommandTypeIsSet() const;
    void unsetrecommandType();
    void setRecommandType(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string comments_;
    bool commentsIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string creator_;
    bool creatorIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;
    std::string lastReviser_;
    bool lastReviserIsSet_;
    std::string lastUpdateTime_;
    bool lastUpdateTimeIsSet_;
    std::string language_;
    bool languageIsSet_;
    std::string parentId_;
    bool parentIdIsSet_;
    int32_t numCriterion_;
    bool numCriterionIsSet_;
    bool canEdit_;
    bool canEditIsSet_;
    bool canDelete_;
    bool canDeleteIsSet_;
    std::string managers_;
    bool managersIsSet_;
    std::string parentSetNames_;
    bool parentSetNamesIsSet_;
    std::string domainId_;
    bool domainIdIsSet_;
    std::string inheritMode_;
    bool inheritModeIsSet_;
    std::string creatorId_;
    bool creatorIdIsSet_;
    std::string isSystemDefault_;
    bool isSystemDefaultIsSet_;
    std::string isProjectDefault_;
    bool isProjectDefaultIsSet_;
    std::string isSystemSet_;
    bool isSystemSetIsSet_;
    std::string ruleIds_;
    bool ruleIdsIsSet_;
    std::string region_;
    bool regionIsSet_;
    bool canSetDefault_;
    bool canSetDefaultIsSet_;
    bool isUsed_;
    bool isUsedIsSet_;
    std::vector<std::string> childSets_;
    bool childSetsIsSet_;
    bool isReliable_;
    bool isReliableIsSet_;
    std::string isRecommand_;
    bool isRecommandIsSet_;
    bool isDefault_;
    bool isDefaultIsSet_;
    std::string defaultSet_;
    bool defaultSetIsSet_;
    std::string deptId_;
    bool deptIdIsSet_;
    std::string deptName_;
    bool deptNameIsSet_;
    std::string reliableTag_;
    bool reliableTagIsSet_;
    std::string recommandType_;
    bool recommandTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_CriterionSetListV2Body_H_
