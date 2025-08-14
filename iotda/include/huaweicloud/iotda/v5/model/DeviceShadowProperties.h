
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_DeviceShadowProperties_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_DeviceShadowProperties_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 设备影子数据属性结构体。
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  DeviceShadowProperties
    : public ModelBase
{
public:
    DeviceShadowProperties();
    virtual ~DeviceShadowProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeviceShadowProperties members

    /// <summary>
    /// 设备影子的属性数据，Json格式，里面是一个个键值对，每个键都是产品模型中属性的参数名(property_name)，目前如样例所示只支持一层结构。 **注意**：JSON结构的key当前不支持特殊字符：点(.)、dollar符号($)、空char(十六进制的ASCII码为00),key为以上特殊字符无法正常刷新设备影子
    /// </summary>

    Object getProperties() const;
    bool propertiesIsSet() const;
    void unsetproperties();
    void setProperties(const Object& value);

    /// <summary>
    /// 事件操作时间，格式：yyyyMMdd&#39;T&#39;HHmmss&#39;Z&#39;，如20151212T121212Z。
    /// </summary>

    std::string getEventTime() const;
    bool eventTimeIsSet() const;
    void unseteventTime();
    void setEventTime(const std::string& value);


protected:
    Object properties_;
    bool propertiesIsSet_;
    std::string eventTime_;
    bool eventTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_DeviceShadowProperties_H_
