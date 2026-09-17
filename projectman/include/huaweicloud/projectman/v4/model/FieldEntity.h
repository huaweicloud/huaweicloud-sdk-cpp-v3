
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_FieldEntity_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_FieldEntity_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/projectman/v4/model/OptionEntity.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 字段对象
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  FieldEntity
    : public ModelBase
{
public:
    FieldEntity();
    virtual ~FieldEntity();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// FieldEntity members

    /// <summary>
    /// **参数解释**： 字段名称。 **取值范围**： 不涉及
    /// </summary>

    std::string getDisplayName() const;
    bool displayNameIsSet() const;
    void unsetdisplayName();
    void setDisplayName(const std::string& value);

    /// <summary>
    /// **参数解释**： 字段code。 **取值范围**： 不涉及
    /// </summary>

    std::string getCode() const;
    bool codeIsSet() const;
    void unsetcode();
    void setCode(const std::string& value);

    /// <summary>
    /// **参数解释**： 字段id。 **取值范围**： 不涉及
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释**： 字段描述。 **取值范围**： 不涉及
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// **参数解释**： 字段创建人名称。 **取值范围**： 不涉及
    /// </summary>

    std::string getCreatedBy() const;
    bool createdByIsSet() const;
    void unsetcreatedBy();
    void setCreatedBy(const std::string& value);

    /// <summary>
    /// **参数解释**： 字段创建时间，时间戳格式，示例:1715305846000。 **取值范围**： 不涉及
    /// </summary>

    int64_t getCreatedDate() const;
    bool createdDateIsSet() const;
    void unsetcreatedDate();
    void setCreatedDate(int64_t value);

    /// <summary>
    /// **参数解释**： 字段最后更新人名称。 **取值范围**： 不涉及
    /// </summary>

    std::string getModifiedBy() const;
    bool modifiedByIsSet() const;
    void unsetmodifiedBy();
    void setModifiedBy(const std::string& value);

    /// <summary>
    /// **参数解释**： 字段级别。 **取值范围**： 1/2/3：系统预设字段。 4：租户自定义字段 5：项目自定义字段
    /// </summary>

    std::string getDefinitionType() const;
    bool definitionTypeIsSet() const;
    void unsetdefinitionType();
    void setDefinitionType(const std::string& value);

    /// <summary>
    /// **参数解释**： 字段类型名称。 **取值范围**： 不涉及
    /// </summary>

    std::string getFieldTypeName() const;
    bool fieldTypeNameIsSet() const;
    void unsetfieldTypeName();
    void setFieldTypeName(const std::string& value);

    /// <summary>
    /// **参数解释**： 字段在工作项中是否必填，和工作流配置不一致时以工作流为准。 **取值范围**： true（必填） false（非必填）
    /// </summary>

    bool isRequired() const;
    bool requiredIsSet() const;
    void unsetrequired();
    void setRequired(bool value);

    /// <summary>
    /// **参数解释**： 字段在工作项中是否受控，修改已基线的工作项受控字段需要走变更评审流程，和工作流配置不一致时以工作流为准。 **取值范围**： true（受控） false（非受控）
    /// </summary>

    bool isControlled() const;
    bool controlledIsSet() const;
    void unsetcontrolled();
    void setControlled(bool value);

    /// <summary>
    /// **参数解释**： 字段在工作项中是否可修改，和工作流配置不一致时以工作流为准。 **取值范围**： true（不可修改） false（可修改）
    /// </summary>

    bool isImmutable() const;
    bool immutableIsSet() const;
    void unsetimmutable();
    void setImmutable(bool value);

    /// <summary>
    /// **参数解释**： 字段排序的序号。 **取值范围**： 不涉及
    /// </summary>

    int32_t getNo() const;
    bool noIsSet() const;
    void unsetno();
    void setNo(int32_t value);

    /// <summary>
    /// **参数解释**： 字段选项。
    /// </summary>

    std::vector<OptionEntity>& getAllOptions();
    bool allOptionsIsSet() const;
    void unsetallOptions();
    void setAllOptions(const std::vector<OptionEntity>& value);


protected:
    std::string displayName_;
    bool displayNameIsSet_;
    std::string code_;
    bool codeIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string createdBy_;
    bool createdByIsSet_;
    int64_t createdDate_;
    bool createdDateIsSet_;
    std::string modifiedBy_;
    bool modifiedByIsSet_;
    std::string definitionType_;
    bool definitionTypeIsSet_;
    std::string fieldTypeName_;
    bool fieldTypeNameIsSet_;
    bool required_;
    bool requiredIsSet_;
    bool controlled_;
    bool controlledIsSet_;
    bool immutable_;
    bool immutableIsSet_;
    int32_t no_;
    bool noIsSet_;
    std::vector<OptionEntity> allOptions_;
    bool allOptionsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_FieldEntity_H_
