
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_AwParam_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_AwParam_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cloudtest/v1/model/MockInfo.h>
#include <huaweicloud/cloudtest/v1/model/Number.h>
#include <huaweicloud/cloudtest/v1/model/AwParam.h>
#include <huaweicloud/cloudtest/v1/model/ItemParam.h>
#include <string>
#include <huaweicloud/cloudtest/v1/model/AwParamBasicValue.h>
#include <huaweicloud/cloudtest/v1/model/ValidateRule.h>
#include <vector>

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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  AwParam
    : public ModelBase
{
public:
    AwParam();
    virtual ~AwParam();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AwParam members

    /// <summary>
    /// 
    /// </summary>

    AwParamBasicValue getBasicValue() const;
    bool basicValueIsSet() const;
    void unsetbasicValue();
    void setBasicValue(const AwParamBasicValue& value);

    /// <summary>
    /// valueType为1时该值有效
    /// </summary>

    std::vector<AwParamBasicValue>& getBasicValueList();
    bool basicValueListIsSet() const;
    void unsetbasicValueList();
    void setBasicValueList(const std::vector<AwParamBasicValue>& value);

    /// <summary>
    /// 自定义requestBody内容,inType为2且isBodyCustom为1时有效
    /// </summary>

    std::string getCustomBody() const;
    bool customBodyIsSet() const;
    void unsetcustomBody();
    void setCustomBody(const std::string& value);

    /// <summary>
    /// 默认值
    /// </summary>

    std::string getDefaultValue() const;
    bool defaultValueIsSet() const;
    void unsetdefaultValue();
    void setDefaultValue(const std::string& value);

    /// <summary>
    /// aw参数描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 是否禁用 只有非必需参数才能被禁用
    /// </summary>

    bool isDisabled() const;
    bool disabledIsSet() const;
    void unsetdisabled();
    void setDisabled(bool value);

    /// <summary>
    /// 用于存储下拉菜单的值
    /// </summary>

    std::string getDropDownValue() const;
    bool dropDownValueIsSet() const;
    void unsetdropDownValue();
    void setDropDownValue(const std::string& value);

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
    /// rest接口输入参数类型 0-query 1-path 2-body 3-header 4-formdata 5-config
    /// </summary>

    int32_t getInType() const;
    bool inTypeIsSet() const;
    void unsetinType();
    void setInType(int32_t value);

    /// <summary>
    /// 是否是被选中参数
    /// </summary>

    bool isIsChecked() const;
    bool isCheckedIsSet() const;
    void unsetisChecked();
    void setIsChecked(bool value);

    /// <summary>
    /// 是否是大字段参数
    /// </summary>

    bool isIsBigField() const;
    bool isBigFieldIsSet() const;
    void unsetisBigField();
    void setIsBigField(bool value);

    /// <summary>
    /// requestBody是否自定义，inType为2时有效。0-非自定义，用原有逻辑；1-自定义body,requestBody直接使用字段customBody
    /// </summary>

    int32_t getIsBodyCustom() const;
    bool isBodyCustomIsSet() const;
    void unsetisBodyCustom();
    void setIsBodyCustom(int32_t value);

    /// <summary>
    /// 是否是契约AW 0-否；1-yes
    /// </summary>

    int32_t getIsContractParam() const;
    bool isContractParamIsSet() const;
    void unsetisContractParam();
    void setIsContractParam(int32_t value);

    /// <summary>
    /// 是否敏感参数，0  是，  1 不是
    /// </summary>

    bool isIsSensitive() const;
    bool isSensitiveIsSet() const;
    void unsetisSensitive();
    void setIsSensitive(bool value);

    /// <summary>
    /// 
    /// </summary>

    ItemParam getItem() const;
    bool itemIsSet() const;
    void unsetitem();
    void setItem(const ItemParam& value);

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
    /// 
    /// </summary>

    MockInfo getMock() const;
    bool mockIsSet() const;
    void unsetmock();
    void setMock(const MockInfo& value);

    /// <summary>
    /// 参数名
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// valueType为2时该值有效。valueType为3时，该值用来表示数组中单个结构体
    /// </summary>

    std::vector<AwParam>& getObjectValue();
    bool objectValueIsSet() const;
    void unsetobjectValue();
    void setObjectValue(const std::vector<AwParam>& value);

    /// <summary>
    /// valueType为3时该值有效
    /// </summary>

    std::vector<std::vector<AwParam>>& getObjectValueList();
    bool objectValueListIsSet() const;
    void unsetobjectValueList();
    void setObjectValueList(const std::vector<std::vector<AwParam>>& value);

    /// <summary>
    /// num和String有效
    /// </summary>

    std::string getPattern() const;
    bool patternIsSet() const;
    void unsetpattern();
    void setPattern(const std::string& value);

    /// <summary>
    /// 是否必需参数
    /// </summary>

    bool isRequired() const;
    bool requiredIsSet() const;
    void unsetrequired();
    void setRequired(bool value);

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
    std::vector<AwParamBasicValue> basicValueList_;
    bool basicValueListIsSet_;
    std::string customBody_;
    bool customBodyIsSet_;
    std::string defaultValue_;
    bool defaultValueIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    bool disabled_;
    bool disabledIsSet_;
    std::string dropDownValue_;
    bool dropDownValueIsSet_;
    std::string enumType_;
    bool enumTypeIsSet_;
    std::string enumTypeSelected_;
    bool enumTypeSelectedIsSet_;
    std::string format_;
    bool formatIsSet_;
    int32_t inType_;
    bool inTypeIsSet_;
    bool isChecked_;
    bool isCheckedIsSet_;
    bool isBigField_;
    bool isBigFieldIsSet_;
    int32_t isBodyCustom_;
    bool isBodyCustomIsSet_;
    int32_t isContractParam_;
    bool isContractParamIsSet_;
    bool isSensitive_;
    bool isSensitiveIsSet_;
    ItemParam item_;
    bool itemIsSet_;
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
    MockInfo mock_;
    bool mockIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::vector<AwParam>* objectValue_;
    bool objectValueIsSet_;
    std::vector<std::vector<AwParam>> objectValueList_;
    bool objectValueListIsSet_;
    std::string pattern_;
    bool patternIsSet_;
    bool required_;
    bool requiredIsSet_;
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

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_AwParam_H_
