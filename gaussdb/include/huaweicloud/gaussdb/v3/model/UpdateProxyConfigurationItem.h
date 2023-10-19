
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_UpdateProxyConfigurationItem_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_UpdateProxyConfigurationItem_H_


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
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  UpdateProxyConfigurationItem
    : public ModelBase
{
public:
    UpdateProxyConfigurationItem();
    virtual ~UpdateProxyConfigurationItem();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateProxyConfigurationItem members

    /// <summary>
    /// 参数名。
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
    /// 父标签类型。
    /// </summary>

    std::string getElemType() const;
    bool elemTypeIsSet() const;
    void unsetelemType();
    void setElemType(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string value_;
    bool valueIsSet_;
    std::string elemType_;
    bool elemTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_UpdateProxyConfigurationItem_H_
