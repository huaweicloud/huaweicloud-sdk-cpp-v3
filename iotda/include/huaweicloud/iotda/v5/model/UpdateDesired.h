
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_UpdateDesired_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_UpdateDesired_H_


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
/// 修改设备影子预期数据结构体。
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  UpdateDesired
    : public ModelBase
{
public:
    UpdateDesired();
    virtual ~UpdateDesired();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateDesired members

    /// <summary>
    /// **参数说明**：设备的服务ID，在设备关联的产品模型中定义。
    /// </summary>

    std::string getServiceId() const;
    bool serviceIdIsSet() const;
    void unsetserviceId();
    void setServiceId(const std::string& value);

    /// <summary>
    /// **参数说明**：设备影子期望属性数据，Json格式，里面是一个个键值对，每个键都是产品模型中属性的参数名(property_name)，目前如样例所示只支持一层结构；如果想要删除整个desired可以填写空Object(例如\&quot;desired\&quot;:{})，如果想要删除某一个属性期望值可以将属性置位null(例如{\&quot;temperature\&quot;:null})
    /// </summary>

    Object getDesired() const;
    bool desiredIsSet() const;
    void unsetdesired();
    void setDesired(const Object& value);

    /// <summary>
    /// **参数说明**：设备影子的版本，携带该参数时平台会校验值必须等于当前影子版本，初始从0开始。
    /// </summary>

    int64_t getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(int64_t value);


protected:
    std::string serviceId_;
    bool serviceIdIsSet_;
    Object desired_;
    bool desiredIsSet_;
    int64_t version_;
    bool versionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_UpdateDesired_H_
