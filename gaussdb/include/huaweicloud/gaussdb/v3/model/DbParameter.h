
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_DbParameter_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_DbParameter_H_


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
/// 数据库配置参数。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  DbParameter
    : public ModelBase
{
public:
    DbParameter();
    virtual ~DbParameter();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DbParameter members

    /// <summary>
    /// 参数名称。
    /// </summary>

    std::string getParamName() const;
    bool paramNameIsSet() const;
    void unsetparamName();
    void setParamName(const std::string& value);

    /// <summary>
    /// 参数类型。
    /// </summary>

    std::string getDataType() const;
    bool dataTypeIsSet() const;
    void unsetdataType();
    void setDataType(const std::string& value);

    /// <summary>
    /// 参数默认值。
    /// </summary>

    std::string getDefaultValue() const;
    bool defaultValueIsSet() const;
    void unsetdefaultValue();
    void setDefaultValue(const std::string& value);

    /// <summary>
    /// 参数取值范围。
    /// </summary>

    std::string getValueRange() const;
    bool valueRangeIsSet() const;
    void unsetvalueRange();
    void setValueRange(const std::string& value);

    /// <summary>
    /// 参数描述。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// **参数解释**：  新增子任务的场景，用于区分库参数是否支持修改。  **取值范围**：  不涉及。
    /// </summary>

    std::string getIsModifiable() const;
    bool isModifiableIsSet() const;
    void unsetisModifiable();
    void setIsModifiable(const std::string& value);


protected:
    std::string paramName_;
    bool paramNameIsSet_;
    std::string dataType_;
    bool dataTypeIsSet_;
    std::string defaultValue_;
    bool defaultValueIsSet_;
    std::string valueRange_;
    bool valueRangeIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string isModifiable_;
    bool isModifiableIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_DbParameter_H_
