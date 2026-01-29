
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_AlmStatus_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_AlmStatus_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  AlmStatus
    : public ModelBase
{
public:
    AlmStatus();
    virtual ~AlmStatus();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AlmStatus members

    /// <summary>
    /// **参数解释：**  状态Id。 **取值范围：**  不涉及。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释：**  工作项的状态属性。 **取值范围：**  - START - IN_PROGRESS - END
    /// </summary>

    std::string getBelonging() const;
    bool belongingIsSet() const;
    void unsetbelonging();
    void setBelonging(const std::string& value);

    /// <summary>
    /// **参数解释：**  状态所属的项目空间id。 **取值范围：**  不涉及。
    /// </summary>

    std::string getSpaceId() const;
    bool spaceIdIsSet() const;
    void unsetspaceId();
    void setSpaceId(const std::string& value);

    /// <summary>
    /// **参数解释：**  状态名称。 **取值范围：**  不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释：**  状态code值。 **取值范围：**  不涉及。
    /// </summary>

    std::string getCode() const;
    bool codeIsSet() const;
    void unsetcode();
    void setCode(const std::string& value);

    /// <summary>
    /// **参数解释：**  状态定义级别，1,2,3为系统级，4为租户自定义，5为项目自定义。 **取值范围：**  不涉及。
    /// </summary>

    std::string getDefinitionType() const;
    bool definitionTypeIsSet() const;
    void unsetdefinitionType();
    void setDefinitionType(const std::string& value);

    /// <summary>
    /// **参数解释：**  状态归属定义级别，1,2,3为系统级，4为租户自定义，5为项目自定义。区别于definition_type。如果为系统级和租户自定义级，在项目中会复制一份元数据，归属于项目空间。 **取值范围：**  不涉及。
    /// </summary>

    int32_t getBelongDefinitionType() const;
    bool belongDefinitionTypeIsSet() const;
    void unsetbelongDefinitionType();
    void setBelongDefinitionType(int32_t value);

    /// <summary>
    /// **参数解释：**  状态名称，和name值相同。 **取值范围：**  不涉及。
    /// </summary>

    std::string getDisplayValue() const;
    bool displayValueIsSet() const;
    void unsetdisplayValue();
    void setDisplayValue(const std::string& value);

    /// <summary>
    /// **参数解释：**  位置顺序。 **取值范围：**  不涉及。
    /// </summary>

    int32_t getPosition() const;
    bool positionIsSet() const;
    void unsetposition();
    void setPosition(int32_t value);

    /// <summary>
    /// **参数解释：**  是否显示。 **取值范围：**  不涉及。
    /// </summary>

    int32_t getDisplayable() const;
    bool displayableIsSet() const;
    void unsetdisplayable();
    void setDisplayable(int32_t value);

    /// <summary>
    /// **参数解释：**  是否可编辑。 **取值范围：**  不涉及。
    /// </summary>

    int32_t getEditable() const;
    bool editableIsSet() const;
    void unseteditable();
    void setEditable(int32_t value);

    /// <summary>
    /// **参数解释：**  是否可删除。 **取值范围：**  不涉及。
    /// </summary>

    int32_t getDeletable() const;
    bool deletableIsSet() const;
    void unsetdeletable();
    void setDeletable(int32_t value);

    /// <summary>
    /// **参数解释：**  是否可变，即是否为固定值。 **取值范围：**  不涉及。
    /// </summary>

    int32_t getMutable() const;
    bool mutableIsSet() const;
    void unsetmutable();
    void setMutable(int32_t value);

    /// <summary>
    /// **参数解释：**  标题的拼音首字母。 **取值范围：**  不涉及。
    /// </summary>

    std::string getTitlePy() const;
    bool titlePyIsSet() const;
    void unsettitlePy();
    void setTitlePy(const std::string& value);

    /// <summary>
    /// **参数解释：**  创建人用户Id。 **取值范围：**  不涉及。
    /// </summary>

    std::string getCreatedBy() const;
    bool createdByIsSet() const;
    void unsetcreatedBy();
    void setCreatedBy(const std::string& value);

    /// <summary>
    /// **参数解释：**  创建时间。Unix时间戳，精度为毫秒。 **取值范围：**  不涉及。
    /// </summary>

    int64_t getCreatedDate() const;
    bool createdDateIsSet() const;
    void unsetcreatedDate();
    void setCreatedDate(int64_t value);

    /// <summary>
    /// **参数解释：**  最近修改时间。Unix时间戳，精度为毫秒。 **取值范围：**  不涉及。
    /// </summary>

    int64_t getModifiedDate() const;
    bool modifiedDateIsSet() const;
    void unsetmodifiedDate();
    void setModifiedDate(int64_t value);

    /// <summary>
    /// **参数解释：**  最近修改人用户Id。 **取值范围：**    不涉及。
    /// </summary>

    std::string getModifiedBy() const;
    bool modifiedByIsSet() const;
    void unsetmodifiedBy();
    void setModifiedBy(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string belonging_;
    bool belongingIsSet_;
    std::string spaceId_;
    bool spaceIdIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string code_;
    bool codeIsSet_;
    std::string definitionType_;
    bool definitionTypeIsSet_;
    int32_t belongDefinitionType_;
    bool belongDefinitionTypeIsSet_;
    std::string displayValue_;
    bool displayValueIsSet_;
    int32_t position_;
    bool positionIsSet_;
    int32_t displayable_;
    bool displayableIsSet_;
    int32_t editable_;
    bool editableIsSet_;
    int32_t deletable_;
    bool deletableIsSet_;
    int32_t mutable_;
    bool mutableIsSet_;
    std::string titlePy_;
    bool titlePyIsSet_;
    std::string createdBy_;
    bool createdByIsSet_;
    int64_t createdDate_;
    bool createdDateIsSet_;
    int64_t modifiedDate_;
    bool modifiedDateIsSet_;
    std::string modifiedBy_;
    bool modifiedByIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_AlmStatus_H_
