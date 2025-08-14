
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_PropertyFilter_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_PropertyFilter_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/iotda/v5/model/Strategy.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 设备属性过滤信息，自定义结构。
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  PropertyFilter
    : public ModelBase
{
public:
    PropertyFilter();
    virtual ~PropertyFilter();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PropertyFilter members

    /// <summary>
    /// **参数说明**：设备属性的路径信息，格式：service_id/DataProperty，例如门磁状态为“DoorWindow/status”。
    /// </summary>

    std::string getPath() const;
    bool pathIsSet() const;
    void unsetpath();
    void setPath(const std::string& value);

    /// <summary>
    /// **参数说明**：数据比较的操作符。 **取值范围**：当前支持的操作符有：&gt;，&lt;，&gt;&#x3D;，&lt;&#x3D;，&#x3D;，in:表示在指定值中匹配和between:表示数值区间。
    /// </summary>

    std::string getOperator() const;
    bool operatorIsSet() const;
    void unsetoperator();
    void setOperator(const std::string& value);

    /// <summary>
    /// **参数说明**：数据比较表达式的右值。与数据比较操作符between联用时，右值表示最小值和最大值，用逗号隔开，如“20,30”表示大于等于20小于30。
    /// </summary>

    std::string getValue() const;
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(const std::string& value);

    /// <summary>
    /// **参数说明**：当operator为in时该字段必填，使用该字段传递比较表达式右值，上限为20个。
    /// </summary>

    std::vector<std::string>& getInValues();
    bool inValuesIsSet() const;
    void unsetinValues();
    void setInValues(const std::vector<std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    Strategy getStrategy() const;
    bool strategyIsSet() const;
    void unsetstrategy();
    void setStrategy(const Strategy& value);


protected:
    std::string path_;
    bool pathIsSet_;
    std::string operator_;
    bool operatorIsSet_;
    std::string value_;
    bool valueIsSet_;
    std::vector<std::string> inValues_;
    bool inValuesIsSet_;
    Strategy strategy_;
    bool strategyIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_PropertyFilter_H_
