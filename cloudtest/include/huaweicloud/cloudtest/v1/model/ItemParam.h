
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ItemParam_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ItemParam_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cloudtest/v1/model/Number.h>
#include <string>
#include <huaweicloud/cloudtest/v1/model/AwParamBasicValue.h>
#include <huaweicloud/cloudtest/v1/model/ValidateRule.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  ItemParam
    : public ModelBase
{
public:
    ItemParam();
    virtual ~ItemParam();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ItemParam members

    /// <summary>
    /// 
    /// </summary>

    AwParamBasicValue getBasicValue() const;
    bool basicValueIsSet() const;
    void unsetbasicValue();
    void setBasicValue(const AwParamBasicValue& value);

    /// <summary>
    /// 默认值
    /// </summary>

    std::string getDefaultValue() const;
    bool defaultValueIsSet() const;
    void unsetdefaultValue();
    void setDefaultValue(const std::string& value);

    /// <summary>
    /// 枚举类型
    /// </summary>

    std::string getEnumType() const;
    bool enumTypeIsSet() const;
    void unsetenumType();
    void setEnumType(const std::string& value);

    /// <summary>
    /// 当前选中的枚举类型
    /// </summary>

    std::string getEnumTypeSelected() const;
    bool enumTypeSelectedIsSet() const;
    void unsetenumTypeSelected();
    void setEnumTypeSelected(const std::string& value);

    /// <summary>
    /// num和String有效
    /// </summary>

    std::string getFormat() const;
    bool formatIsSet() const;
    void unsetformat();
    void setFormat(const std::string& value);

    /// <summary>
    /// 是否是大字段参数
    /// </summary>

    bool isIsBigField() const;
    bool isBigFieldIsSet() const;
    void unsetisBigField();
    void setIsBigField(bool value);

    /// <summary>
    /// Array类型最大元素数
    /// </summary>

    int32_t getMaxItems() const;
    bool maxItemsIsSet() const;
    void unsetmaxItems();
    void setMaxItems(int32_t value);

    /// <summary>
    /// String类型最大长度
    /// </summary>

    int64_t getMaxLength() const;
    bool maxLengthIsSet() const;
    void unsetmaxLength();
    void setMaxLength(int64_t value);

    /// <summary>
    /// 
    /// </summary>

    Number getMaximum() const;
    bool maximumIsSet() const;
    void unsetmaximum();
    void setMaximum(const Number& value);

    /// <summary>
    /// Array类型最小元素数
    /// </summary>

    int32_t getMinItems() const;
    bool minItemsIsSet() const;
    void unsetminItems();
    void setMinItems(int32_t value);

    /// <summary>
    /// String类型最小长度
    /// </summary>

    int64_t getMinLength() const;
    bool minLengthIsSet() const;
    void unsetminLength();
    void setMinLength(int64_t value);

    /// <summary>
    /// 
    /// </summary>

    Number getMinimum() const;
    bool minimumIsSet() const;
    void unsetminimum();
    void setMinimum(const Number& value);

    /// <summary>
    /// num和String有效
    /// </summary>

    std::string getPattern() const;
    bool patternIsSet() const;
    void unsetpattern();
    void setPattern(const std::string& value);

    /// <summary>
    /// 参数类型
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ValidateRule getValidateRule() const;
    bool validateRuleIsSet() const;
    void unsetvalidateRule();
    void setValidateRule(const ValidateRule& value);

    /// <summary>
    /// 参数值类型 0-基本类型，type字段为String,Integer等基本类型 1-基本类型数组,type字段为List&lt;String&gt;,List&lt;Integer&gt;等基本类型List 2-结构体，type字段为除了基本类型以外的结构体 3-结构体数组，type字段为List&lt;结构体&gt; 5-前端枚举类型
    /// </summary>

    int32_t getValueType() const;
    bool valueTypeIsSet() const;
    void unsetvalueType();
    void setValueType(int32_t value);

    /// <summary>
    /// choice选择关系
    /// </summary>

    std::string getXChoiceValue() const;
    bool xChoiceValueIsSet() const;
    void unsetxChoiceValue();
    void setXChoiceValue(const std::string& value);


protected:
    AwParamBasicValue basicValue_;
    bool basicValueIsSet_;
    std::string defaultValue_;
    bool defaultValueIsSet_;
    std::string enumType_;
    bool enumTypeIsSet_;
    std::string enumTypeSelected_;
    bool enumTypeSelectedIsSet_;
    std::string format_;
    bool formatIsSet_;
    bool isBigField_;
    bool isBigFieldIsSet_;
    int32_t maxItems_;
    bool maxItemsIsSet_;
    int64_t maxLength_;
    bool maxLengthIsSet_;
    Number maximum_;
    bool maximumIsSet_;
    int32_t minItems_;
    bool minItemsIsSet_;
    int64_t minLength_;
    bool minLengthIsSet_;
    Number minimum_;
    bool minimumIsSet_;
    std::string pattern_;
    bool patternIsSet_;
    std::string type_;
    bool typeIsSet_;
    ValidateRule validateRule_;
    bool validateRuleIsSet_;
    int32_t valueType_;
    bool valueTypeIsSet_;
    std::string xChoiceValue_;
    bool xChoiceValueIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ItemParam_H_
