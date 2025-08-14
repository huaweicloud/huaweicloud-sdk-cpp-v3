
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_DevicePropertiesRequest_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_DevicePropertiesRequest_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  DevicePropertiesRequest
    : public ModelBase
{
public:
    DevicePropertiesRequest();
    virtual ~DevicePropertiesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DevicePropertiesRequest members

    /// <summary>
    /// **参数说明**：设备执行的属性，Json格式，里面是一个个健值对，如果serviceId不为空，每个健都是profile中属性的参数名（paraName）;如果serviceId为空则由用户自定义属性格式。设属性令示例：[{\&quot;service_id\&quot;: \&quot;Temperature\&quot;,\&quot;properties\&quot;: {\&quot;value\&quot;: 57}},{\&quot;service_id\&quot;: \&quot;Battery\&quot;,\&quot;properties\&quot;: {\&quot;level\&quot;: 80}}]，具体格式需要应用和设备约定。
    /// </summary>

    Object getServices() const;
    bool servicesIsSet() const;
    void unsetservices();
    void setServices(const Object& value);


protected:
    Object services_;
    bool servicesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_DevicePropertiesRequest_H_
