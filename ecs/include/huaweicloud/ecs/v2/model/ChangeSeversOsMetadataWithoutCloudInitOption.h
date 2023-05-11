
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_ChangeSeversOsMetadataWithoutCloudInitOption_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_ChangeSeversOsMetadataWithoutCloudInitOption_H_

#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  ChangeSeversOsMetadataWithoutCloudInitOption
    : public ModelBase
{
public:
    ChangeSeversOsMetadataWithoutCloudInitOption();
    virtual ~ChangeSeversOsMetadataWithoutCloudInitOption();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ChangeSeversOsMetadataWithoutCloudInitOption members

    /// <summary>
    /// metadata中的表示加密功能的字段，0代表不加密，1代表加密。  该字段不存在时，云硬盘默认为不加密。
    /// </summary>

    std::string getSystemEncrypted() const;
    bool systemEncryptedIsSet() const;
    void unsetsystemEncrypted();
    void setSystemEncrypted(const std::string& value);

    /// <summary>
    /// metadata中的加密cmkid字段，与__system__encrypted配合表示需要加密，cmkid长度固定为36个字节。  &gt; 说明：  - 请参考[查询密钥列表](https://support.huaweicloud.com/api-dew/ListKeys.html)，通过HTTPS请求获取密钥ID。
    /// </summary>

    std::string getSystemCmkid() const;
    bool systemCmkidIsSet() const;
    void unsetsystemCmkid();
    void setSystemCmkid(const std::string& value);


protected:
    std::string systemEncrypted_;
    bool systemEncryptedIsSet_;
    std::string systemCmkid_;
    bool systemCmkidIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_ChangeSeversOsMetadataWithoutCloudInitOption_H_
