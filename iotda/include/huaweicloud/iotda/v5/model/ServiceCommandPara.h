
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ServiceCommandPara_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ServiceCommandPara_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

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
/// 参数服务对象。
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  ServiceCommandPara
    : public ModelBase
{
public:
    ServiceCommandPara();
    virtual ~ServiceCommandPara();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ServiceCommandPara members

    /// <summary>
    /// **参数说明**：参数的名称。 **取值范围**：长度不超过32，只允许中文、字母、数字、以及_?&#39;#().,&amp;%@!-等字符的组合。
    /// </summary>

    std::string getParaName() const;
    bool paraNameIsSet() const;
    void unsetparaName();
    void setParaName(const std::string& value);

    /// <summary>
    /// **参数说明**：参数的数据类型。 **取值范围**：int，long，decimal，string，DateTime，jsonObject，enum，boolean，string list。
    /// </summary>

    std::string getDataType() const;
    bool dataTypeIsSet() const;
    void unsetdataType();
    void setDataType(const std::string& value);

    /// <summary>
    /// **参数说明**：参数是否必选。默认为false。
    /// </summary>

    bool isRequired() const;
    bool requiredIsSet() const;
    void unsetrequired();
    void setRequired(bool value);

    /// <summary>
    /// **参数说明**：参数的枚举值列表。
    /// </summary>

    std::vector<std::string>& getEnumList();
    bool enumListIsSet() const;
    void unsetenumList();
    void setEnumList(const std::vector<std::string>& value);

    /// <summary>
    /// **参数说明**：参数的最小值。 **取值范围**：长度1-16。
    /// </summary>

    std::string getMin() const;
    bool minIsSet() const;
    void unsetmin();
    void setMin(const std::string& value);

    /// <summary>
    /// **参数说明**：参数的最大值。 **取值范围**：长度1-16。
    /// </summary>

    std::string getMax() const;
    bool maxIsSet() const;
    void unsetmax();
    void setMax(const std::string& value);

    /// <summary>
    /// **参数说明**：参数的最大长度。
    /// </summary>

    int32_t getMaxLength() const;
    bool maxLengthIsSet() const;
    void unsetmaxLength();
    void setMaxLength(int32_t value);

    /// <summary>
    /// **参数说明**：参数的步长。
    /// </summary>

    double getStep() const;
    bool stepIsSet() const;
    void unsetstep();
    void setStep(double value);

    /// <summary>
    /// **参数说明**：参数的单位。 **取值范围**：长度不超过16。
    /// </summary>

    std::string getUnit() const;
    bool unitIsSet() const;
    void unsetunit();
    void setUnit(const std::string& value);

    /// <summary>
    /// **参数说明**：参数的描述。 **取值范围**：长度不超过128，只允许中文、字母、数字、空白字符、以及_?&#39;#().,;&amp;%@!- ，、：；。/等字符的组合。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);


protected:
    std::string paraName_;
    bool paraNameIsSet_;
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
    std::string description_;
    bool descriptionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ServiceCommandPara_H_
