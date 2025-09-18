
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_WorkitemCustomField_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_WorkitemCustomField_H_


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
/// 用户自定义字段
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  WorkitemCustomField
    : public ModelBase
{
public:
    WorkitemCustomField();
    virtual ~WorkitemCustomField();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// WorkitemCustomField members

    /// <summary>
    /// 自定义字段id
    /// </summary>

    std::string getFieldId() const;
    bool fieldIdIsSet() const;
    void unsetfieldId();
    void setFieldId(const std::string& value);

    /// <summary>
    /// 自定义字段名称
    /// </summary>

    std::string getFieldName() const;
    bool fieldNameIsSet() const;
    void unsetfieldName();
    void setFieldName(const std::string& value);

    /// <summary>
    /// 自定义字段类型, \&quot;Date\&quot;,\&quot;Number\&quot;,\&quot;DateTime\&quot;, \&quot;MultiLineText\&quot;,\&quot;SingleLineText\&quot;, \&quot;Select\&quot;,  \&quot;Checkbox\&quot;
    /// </summary>

    std::string getFieldType() const;
    bool fieldTypeIsSet() const;
    void unsetfieldType();
    void setFieldType(const std::string& value);

    /// <summary>
    /// 自定义字段的选项源,CUSTOM，USER，DOMAIN，ITERATION，MODULE，TAG
    /// </summary>

    std::string getFieldOptionSource() const;
    bool fieldOptionSourceIsSet() const;
    void unsetfieldOptionSource();
    void setFieldOptionSource(const std::string& value);

    /// <summary>
    /// 自定义字段值, (field_type为Date,Number,DateTime时,field_option_source为空，value值是数字的字符串)， (field_type为MultiLineText,SingleLineText时,field_option_source为空，value值是文本字符串)， (field_type为Select ,field_option_source为CUSTOM时，value值是文本字符串) (field_type为Select ,field_option_source为USER，DOMAIN，ITERATION，MODULE，TAG时，value值是Json格式{}), (field_type为Checkbox ,field_option_source为CUSTOM时，value值是字符串数组[\\\&quot;aaa\\\&quot;]), (field_type为\&quot;Checkbox\&quot; ,field_option_source为USER，DOMAIN，ITERATION，MODULE，TAG时，value值是Json的数组[{},{}])
    /// </summary>

    std::string getValue() const;
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(const std::string& value);


protected:
    std::string fieldId_;
    bool fieldIdIsSet_;
    std::string fieldName_;
    bool fieldNameIsSet_;
    std::string fieldType_;
    bool fieldTypeIsSet_;
    std::string fieldOptionSource_;
    bool fieldOptionSourceIsSet_;
    std::string value_;
    bool valueIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_WorkitemCustomField_H_
