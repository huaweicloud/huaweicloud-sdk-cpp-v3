
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_FieldLongDateVO_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_FieldLongDateVO_H_


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
/// 字段参数返回体
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  FieldLongDateVO
    : public ModelBase
{
public:
    FieldLongDateVO();
    virtual ~FieldLongDateVO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// FieldLongDateVO members

    /// <summary>
    /// 字段唯一标识。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 字段编码。在项目中使用时一般使用code作为字段标识而不是字段ID。
    /// </summary>

    std::string getCode() const;
    bool codeIsSet() const;
    void unsetcode();
    void setCode(const std::string& value);

    /// <summary>
    /// 字段显示名称。
    /// </summary>

    std::string getDisplayName() const;
    bool displayNameIsSet() const;
    void unsetdisplayName();
    void setDisplayName(const std::string& value);

    /// <summary>
    /// 字段创建人ID。
    /// </summary>

    std::string getCreatedBy() const;
    bool createdByIsSet() const;
    void unsetcreatedBy();
    void setCreatedBy(const std::string& value);

    /// <summary>
    /// 字段创建时间。时间戳格式，单位毫秒。
    /// </summary>

    int64_t getCreatedDate() const;
    bool createdDateIsSet() const;
    void unsetcreatedDate();
    void setCreatedDate(int64_t value);

    /// <summary>
    /// 字段最后修改人ID。
    /// </summary>

    std::string getModifiedBy() const;
    bool modifiedByIsSet() const;
    void unsetmodifiedBy();
    void setModifiedBy(const std::string& value);

    /// <summary>
    /// 字段最后修改时间。时间戳格式，单位毫秒。
    /// </summary>

    int64_t getModifiedDate() const;
    bool modifiedDateIsSet() const;
    void unsetmodifiedDate();
    void setModifiedDate(int64_t value);

    /// <summary>
    /// 字段类型标识。
    /// </summary>

    std::string getFieldType() const;
    bool fieldTypeIsSet() const;
    void unsetfieldType();
    void setFieldType(const std::string& value);

    /// <summary>
    /// 字段类型ID。用于区分不同的字段类型。
    /// </summary>

    std::string getFieldTypeId() const;
    bool fieldTypeIdIsSet() const;
    void unsetfieldTypeId();
    void setFieldTypeId(const std::string& value);

    /// <summary>
    /// 字段类型名称。如单选列表、多选列表、多行文本等。
    /// </summary>

    std::string getFieldTypeName() const;
    bool fieldTypeNameIsSet() const;
    void unsetfieldTypeName();
    void setFieldTypeName(const std::string& value);

    /// <summary>
    /// 字段定义类型。用于区分系统字段和自定义字段。
    /// </summary>

    std::string getDefinitionType() const;
    bool definitionTypeIsSet() const;
    void unsetdefinitionType();
    void setDefinitionType(const std::string& value);

    /// <summary>
    /// 是否显示在云服务类型的迭代看板卡片模式中。
    /// </summary>

    bool isShowOnCard() const;
    bool showOnCardIsSet() const;
    void unsetshowOnCard();
    void setShowOnCard(bool value);

    /// <summary>
    /// 字段是否为必填项。
    /// </summary>

    bool isOptional() const;
    bool optionalIsSet() const;
    void unsetoptional();
    void setOptional(bool value);

    /// <summary>
    /// 字段是否受控。如果工作项已经基线，修改受控字段值时会触发变更评审。
    /// </summary>

    bool isControlled() const;
    bool controlledIsSet() const;
    void unsetcontrolled();
    void setControlled(bool value);

    /// <summary>
    /// 字段是否不可变。更新接口无法更新不可变字段。
    /// </summary>

    bool isImmutable() const;
    bool immutableIsSet() const;
    void unsetimmutable();
    void setImmutable(bool value);

    /// <summary>
    /// 字段排序序号。数值越小越靠前显示。
    /// </summary>

    int32_t getNo() const;
    bool noIsSet() const;
    void unsetno();
    void setNo(int32_t value);

    /// <summary>
    /// 字段默认值。创建工作项时自动填充。
    /// </summary>

    std::string getDefaultValue() const;
    bool defaultValueIsSet() const;
    void unsetdefaultValue();
    void setDefaultValue(const std::string& value);

    /// <summary>
    /// 字段选项。单选列表类型字段的选项信息，包含选项ID、编码、显示名称等属性。
    /// </summary>

    std::vector<OptionEntity>& getOption();
    bool optionIsSet() const;
    void unsetoption();
    void setOption(const std::vector<OptionEntity>& value);

    /// <summary>
    /// 字段所有选项。多选列表类型字段的全部选项信息，数组元素包含选项ID、编码、显示名称等属性。
    /// </summary>

    std::vector<OptionEntity>& getAllOptions();
    bool allOptionsIsSet() const;
    void unsetallOptions();
    void setAllOptions(const std::vector<OptionEntity>& value);

    /// <summary>
    /// 是否存在同名字段。用于检测字段名称冲突。
    /// </summary>

    bool isHasSameDisplayName() const;
    bool hasSameDisplayNameIsSet() const;
    void unsethasSameDisplayName();
    void setHasSameDisplayName(bool value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string code_;
    bool codeIsSet_;
    std::string displayName_;
    bool displayNameIsSet_;
    std::string createdBy_;
    bool createdByIsSet_;
    int64_t createdDate_;
    bool createdDateIsSet_;
    std::string modifiedBy_;
    bool modifiedByIsSet_;
    int64_t modifiedDate_;
    bool modifiedDateIsSet_;
    std::string fieldType_;
    bool fieldTypeIsSet_;
    std::string fieldTypeId_;
    bool fieldTypeIdIsSet_;
    std::string fieldTypeName_;
    bool fieldTypeNameIsSet_;
    std::string definitionType_;
    bool definitionTypeIsSet_;
    bool showOnCard_;
    bool showOnCardIsSet_;
    bool optional_;
    bool optionalIsSet_;
    bool controlled_;
    bool controlledIsSet_;
    bool immutable_;
    bool immutableIsSet_;
    int32_t no_;
    bool noIsSet_;
    std::string defaultValue_;
    bool defaultValueIsSet_;
    std::vector<OptionEntity> option_;
    bool optionIsSet_;
    std::vector<OptionEntity> allOptions_;
    bool allOptionsIsSet_;
    bool hasSameDisplayName_;
    bool hasSameDisplayNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_FieldLongDateVO_H_
