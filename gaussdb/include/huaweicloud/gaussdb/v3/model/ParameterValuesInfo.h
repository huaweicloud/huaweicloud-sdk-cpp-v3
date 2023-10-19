
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ParameterValuesInfo_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ParameterValuesInfo_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ParameterValuesInfo
    : public ModelBase
{
public:
    ParameterValuesInfo();
    virtual ~ParameterValuesInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ParameterValuesInfo members

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
    /// 是否需要重启。 - false：否。 - true：是。
    /// </summary>

    bool isRestartRequired() const;
    bool restartRequiredIsSet() const;
    void unsetrestartRequired();
    void setRestartRequired(bool value);

    /// <summary>
    /// 是否只读。 - false：否。 - true：是。
    /// </summary>

    bool isReadonly() const;
    bool readonlyIsSet() const;
    void unsetreadonly();
    void setReadonly(bool value);

    /// <summary>
    /// 参数值范围，如Integer取值0-1、Boolean取值true|false等。
    /// </summary>

    std::string getValueRange() const;
    bool valueRangeIsSet() const;
    void unsetvalueRange();
    void setValueRange(const std::string& value);

    /// <summary>
    /// 参数类型,可取取值如下： - string - integer - boolean  - list  - float
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 参数描述。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string value_;
    bool valueIsSet_;
    bool restartRequired_;
    bool restartRequiredIsSet_;
    bool readonly_;
    bool readonlyIsSet_;
    std::string valueRange_;
    bool valueRangeIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string description_;
    bool descriptionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ParameterValuesInfo_H_
