
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_IssueDetailCustomFieldV2_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_IssueDetailCustomFieldV2_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/projectman/v4/model/NewCustomFieldV2.h>

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
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  IssueDetailCustomFieldV2
    : public ModelBase
{
public:
    IssueDetailCustomFieldV2();
    virtual ~IssueDetailCustomFieldV2();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// IssueDetailCustomFieldV2 members

    /// <summary>
    /// **参数解释：** 自定义字段。 **取值范围：** 不涉及。
    /// </summary>

    std::string getCustomField() const;
    bool customFieldIsSet() const;
    void unsetcustomField();
    void setCustomField(const std::string& value);

    /// <summary>
    /// **参数解释：** 自定义字段名称。 **取值范围：** 不涉及。
    /// </summary>

    std::string getFieldName() const;
    bool fieldNameIsSet() const;
    void unsetfieldName();
    void setFieldName(const std::string& value);

    /// <summary>
    /// **参数解释：** 自定义属性对应的值，多个值以英文逗号区分开。 **取值范围：** 不涉及。
    /// </summary>

    std::string getValue() const;
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(const std::string& value);

    /// <summary>
    /// **参数解释：** 自定义字段类型。 **取值范围：** textArea 多行文本 text 单行文本 select 下拉框 number 数字 time_date 日期 checkbox 多选框 radio 单选框。
    /// </summary>

    std::string getFieldType() const;
    bool fieldTypeIsSet() const;
    void unsetfieldType();
    void setFieldType(const std::string& value);

    /// <summary>
    /// **参数解释：** 自定义字段描述。 **取值范围：** 不涉及。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);


protected:
    std::string customField_;
    bool customFieldIsSet_;
    std::string fieldName_;
    bool fieldNameIsSet_;
    std::string value_;
    bool valueIsSet_;
    std::string fieldType_;
    bool fieldTypeIsSet_;
    std::string description_;
    bool descriptionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_IssueDetailCustomFieldV2_H_
