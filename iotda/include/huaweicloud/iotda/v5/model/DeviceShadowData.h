
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_DeviceShadowData_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_DeviceShadowData_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/iotda/v5/model/DeviceShadowProperties.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 设备影子数据结构体。
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  DeviceShadowData
    : public ModelBase
{
public:
    DeviceShadowData();
    virtual ~DeviceShadowData();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeviceShadowData members

    /// <summary>
    /// 设备的服务ID，在设备关联的产品模型中定义。
    /// </summary>

    std::string getServiceId() const;
    bool serviceIdIsSet() const;
    void unsetserviceId();
    void setServiceId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    DeviceShadowProperties getDesired() const;
    bool desiredIsSet() const;
    void unsetdesired();
    void setDesired(const DeviceShadowProperties& value);

    /// <summary>
    /// 
    /// </summary>

    DeviceShadowProperties getReported() const;
    bool reportedIsSet() const;
    void unsetreported();
    void setReported(const DeviceShadowProperties& value);

    /// <summary>
    /// 设备影子的版本，携带该参数时平台会校验值必须等于当前影子版本，初始从0开始。
    /// </summary>

    int64_t getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(int64_t value);


protected:
    std::string serviceId_;
    bool serviceIdIsSet_;
    DeviceShadowProperties desired_;
    bool desiredIsSet_;
    DeviceShadowProperties reported_;
    bool reportedIsSet_;
    int64_t version_;
    bool versionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_DeviceShadowData_H_
