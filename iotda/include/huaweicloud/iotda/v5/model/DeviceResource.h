
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_DeviceResource_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_DeviceResource_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <huaweicloud/iotda/v5/model/ParameterRef.h>
#include <huaweicloud/iotda/v5/model/TagRef.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 预调配模板设备资源详情结构体。
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  DeviceResource
    : public ModelBase
{
public:
    DeviceResource();
    virtual ~DeviceResource();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeviceResource members

    /// <summary>
    /// 
    /// </summary>

    ParameterRef getDeviceName() const;
    bool deviceNameIsSet() const;
    void unsetdeviceName();
    void setDeviceName(const ParameterRef& value);

    /// <summary>
    /// 
    /// </summary>

    ParameterRef getDeviceId() const;
    bool deviceIdIsSet() const;
    void unsetdeviceId();
    void setDeviceId(const ParameterRef& value);

    /// <summary>
    /// 
    /// </summary>

    ParameterRef getNodeId() const;
    bool nodeIdIsSet() const;
    void unsetnodeId();
    void setNodeId(const ParameterRef& value);

    /// <summary>
    /// **参数说明**：设备所属的产品id，可以是一个明确的静态字符串id，也可以是动态的模板参数引用 - 明确的静态字符串：\&quot;642bf260f2f9030e44210d8d\&quot;。**取值范围**：长度不超过36，只允许字母、数字、下划线（_）、连接符（-）的组合。\&quot; - 参数引用: {\&quot;ref\&quot; : \&quot;iotda::certificate::country\&quot;}
    /// </summary>

    Object getProductId() const;
    bool productIdIsSet() const;
    void unsetproductId();
    void setProductId(const Object& value);

    /// <summary>
    /// **参数说明**：设备绑定的标签列表
    /// </summary>

    std::vector<TagRef>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<TagRef>& value);


protected:
    ParameterRef deviceName_;
    bool deviceNameIsSet_;
    ParameterRef deviceId_;
    bool deviceIdIsSet_;
    ParameterRef nodeId_;
    bool nodeIdIsSet_;
    Object productId_;
    bool productIdIsSet_;
    std::vector<TagRef> tags_;
    bool tagsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_DeviceResource_H_
