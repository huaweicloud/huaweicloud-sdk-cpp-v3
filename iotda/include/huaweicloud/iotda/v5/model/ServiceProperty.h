
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ServiceProperty_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ServiceProperty_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 属性服务对象。
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  ServiceProperty
    : public ModelBase
{
public:
    ServiceProperty();
    virtual ~ServiceProperty();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ServiceProperty members

    /// <summary>
    /// **参数说明**：设备属性名称。注：设备服务内不允许重复。属性名称作为设备影子JSON文档中的key不支持特殊字符：点(.)、dollar符号($)、空char(十六进制的ASCII码为00)，如果包含了以上特殊字符则无法正常刷新影子文档。 **取值范围**：长度不超过64，只允许中文、字母、数字、以及_?&#39;#().,&amp;%@!-等字符的组合。
    /// </summary>

    std::string getPropertyName() const;
    bool propertyNameIsSet() const;
    void unsetpropertyName();
    void setPropertyName(const std::string& value);

    /// <summary>
    /// **参数说明**：设备属性的数据类型。 **取值范围**：int，long，decimal，string，DateTime，jsonObject，enum，boolean，string list。
    /// </summary>

    std::string getDataType() const;
    bool dataTypeIsSet() const;
    void unsetdataType();
    void setDataType(const std::string& value);

    /// <summary>
    /// **参数说明**：设备属性是否必选。默认为false。
    /// </summary>

    bool isRequired() const;
    bool requiredIsSet() const;
    void unsetrequired();
    void setRequired(bool value);

    /// <summary>
    /// **参数说明**：设备属性的枚举值列表。
    /// </summary>

    std::vector<std::string>& getEnumList();
    bool enumListIsSet() const;
    void unsetenumList();
    void setEnumList(const std::vector<std::string>& value);

    /// <summary>
    /// **参数说明**：设备属性的最小值。 **取值范围**：长度1-16。
    /// </summary>

    std::string getMin() const;
    bool minIsSet() const;
    void unsetmin();
    void setMin(const std::string& value);

    /// <summary>
    /// **参数说明**：设备属性的最大值。 **取值范围**：长度1-16。
    /// </summary>

    std::string getMax() const;
    bool maxIsSet() const;
    void unsetmax();
    void setMax(const std::string& value);

    /// <summary>
    /// **参数说明**：设备属性的最大长度。
    /// </summary>

    int32_t getMaxLength() const;
    bool maxLengthIsSet() const;
    void unsetmaxLength();
    void setMaxLength(int32_t value);

    /// <summary>
    /// **参数说明**：设备属性的步长。
    /// </summary>

    double getStep() const;
    bool stepIsSet() const;
    void unsetstep();
    void setStep(double value);

    /// <summary>
    /// **参数说明**：设备属性的单位。 **取值范围**：长度不超过16。
    /// </summary>

    std::string getUnit() const;
    bool unitIsSet() const;
    void unsetunit();
    void setUnit(const std::string& value);

    /// <summary>
    /// **参数说明**：设备属性的访问模式。 **取值范围**：RWE，RW，RE，WE，E，W，R。 - R：属性值可读 - W：属性值可写 - E：属性值可订阅，即属性值变化时上报事件
    /// </summary>

    std::string getMethod() const;
    bool methodIsSet() const;
    void unsetmethod();
    void setMethod(const std::string& value);

    /// <summary>
    /// **参数说明**：设备属性的描述。 **取值范围**：长度不超过128，只允许中文、字母、数字、空白字符、以及_?&#39;#().,;&amp;%@!- ，、：；。/等字符的组合。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// **参数说明**：设备属性的默认值。如果设置了默认值，使用该产品创建设备时，会将该属性的默认值写入到该设备的设备影子预期数据中，待设备上线时将该属性默认值下发给设备。
    /// </summary>

    Object getDefaultValue() const;
    bool defaultValueIsSet() const;
    void unsetdefaultValue();
    void setDefaultValue(const Object& value);


protected:
    std::string propertyName_;
    bool propertyNameIsSet_;
    std::string dataType_;
    bool dataTypeIsSet_;
    bool required_;
    bool requiredIsSet_;
    std::vector<std::string> enumList_;
    bool enumListIsSet_;
    std::string min_;
    bool minIsSet_;
    std::string max_;
    bool maxIsSet_;
    int32_t maxLength_;
    bool maxLengthIsSet_;
    double step_;
    bool stepIsSet_;
    std::string unit_;
    bool unitIsSet_;
    std::string method_;
    bool methodIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    Object defaultValue_;
    bool defaultValueIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ServiceProperty_H_
