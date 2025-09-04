
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_UpdateAuthenticationTemplateResource_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_UpdateAuthenticationTemplateResource_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <huaweicloud/iotda/v5/model/TimestampResource.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 更新鉴权模板设备资源详情结构体。
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  UpdateAuthenticationTemplateResource
    : public ModelBase
{
public:
    UpdateAuthenticationTemplateResource();
    virtual ~UpdateAuthenticationTemplateResource();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateAuthenticationTemplateResource members

    /// <summary>
    /// 设备ID，json对象只能使用FunctionDefinition下的函数从parameters中获取设备ID的取值。
    /// </summary>

    Object getDeviceId() const;
    bool deviceIdIsSet() const;
    void unsetdeviceId();
    void setDeviceId(const Object& value);

    /// <summary>
    /// 
    /// </summary>

    TimestampResource getTimestamp() const;
    bool timestampIsSet() const;
    void unsettimestamp();
    void setTimestamp(const TimestampResource& value);

    /// <summary>
    /// mqtt认证密码，该字段只在设备认证方式为密码认证时生效，证书认证时无效，只能使用FunctionDefinition下的函数从parameters中编程密码的生成方式，平台比较函数解析结果与设备mqtt连接时携带的password是否相等，相等则认证通过。函数中必须包含设备原始秘钥参数${iotda::device::secret}，且只能在hash函数中使用，若想修改清空该字段则设置为空json:{}。
    /// </summary>

    Object getPassword() const;
    bool passwordIsSet() const;
    void unsetpassword();
    void setPassword(const Object& value);


protected:
    Object deviceId_;
    bool deviceIdIsSet_;
    TimestampResource timestamp_;
    bool timestampIsSet_;
    Object password_;
    bool passwordIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_UpdateAuthenticationTemplateResource_H_
