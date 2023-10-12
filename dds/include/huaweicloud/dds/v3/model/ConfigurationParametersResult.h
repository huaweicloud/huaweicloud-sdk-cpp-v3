
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_ConfigurationParametersResult_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_ConfigurationParametersResult_H_


#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  ConfigurationParametersResult
    : public ModelBase
{
public:
    ConfigurationParametersResult();
    virtual ~ConfigurationParametersResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ConfigurationParametersResult members

    /// <summary>
    /// 参数名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 参数值。
    /// </summary>

    std::string getValue() const;
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(const std::string& value);

    /// <summary>
    /// 参数描述。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 参数类型，取值为“integer”，“string”，“boolean”，“float”或“list”。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 参数值范围，如integer取值0-1、boolean取值true|false等。
    /// </summary>

    std::string getValueRange() const;
    bool valueRangeIsSet() const;
    void unsetvalueRange();
    void setValueRange(const std::string& value);

    /// <summary>
    /// 参数是否需要重启。 - 取值为“true”，需要重启。 - 取值为“false”，不需要重启。
    /// </summary>

    bool isRestartRequired() const;
    bool restartRequiredIsSet() const;
    void unsetrestartRequired();
    void setRestartRequired(bool value);

    /// <summary>
    /// 是否只读。 - 取值为“false”，非只读参数。 - 取值为“true”，只读参数。
    /// </summary>

    bool isReadonly() const;
    bool readonlyIsSet() const;
    void unsetreadonly();
    void setReadonly(bool value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string value_;
    bool valueIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string valueRange_;
    bool valueRangeIsSet_;
    bool restartRequired_;
    bool restartRequiredIsSet_;
    bool readonly_;
    bool readonlyIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_ConfigurationParametersResult_H_
