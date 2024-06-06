
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ProxyConfiguration_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ProxyConfiguration_H_


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
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ProxyConfiguration
    : public ModelBase
{
public:
    ProxyConfiguration();
    virtual ~ProxyConfiguration();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ProxyConfiguration members

    /// <summary>
    /// 参数名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 参数数据类型
    /// </summary>

    std::string getDataType() const;
    bool dataTypeIsSet() const;
    void unsetdataType();
    void setDataType(const std::string& value);

    /// <summary>
    /// 参数父标签类型
    /// </summary>

    std::string getElemType() const;
    bool elemTypeIsSet() const;
    void unsetelemType();
    void setElemType(const std::string& value);

    /// <summary>
    /// 取值范围
    /// </summary>

    std::string getValueRange() const;
    bool valueRangeIsSet() const;
    void unsetvalueRange();
    void setValueRange(const std::string& value);

    /// <summary>
    /// 参数默认值
    /// </summary>

    std::string getValue() const;
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(const std::string& value);

    /// <summary>
    /// 参数描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string dataType_;
    bool dataTypeIsSet_;
    std::string elemType_;
    bool elemTypeIsSet_;
    std::string valueRange_;
    bool valueRangeIsSet_;
    std::string value_;
    bool valueIsSet_;
    std::string description_;
    bool descriptionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ProxyConfiguration_H_
