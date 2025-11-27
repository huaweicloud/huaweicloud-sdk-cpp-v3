
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_VolumeMetadata_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_VolumeMetadata_H_


#include <huaweicloud/evs/v2/EvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 云硬盘的元数据。
/// </summary>
class HUAWEICLOUD_EVS_V2_EXPORT  VolumeMetadata
    : public ModelBase
{
public:
    VolumeMetadata();
    virtual ~VolumeMetadata();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// VolumeMetadata members

    /// <summary>
    /// metadata中的加密cmkid字段，与__system__encrypted配合表示需要加密，cmkid长度固定为36个字节。 &gt; 说明： &gt;  &gt; 请求获取密钥ID的方法请参考：\&quot;[查询密钥列表](https://support.huaweicloud.com/api-dew/dew_02_0017.html)\&quot;。
    /// </summary>

    std::string getSystemCmkid() const;
    bool systemCmkidIsSet() const;
    void unsetsystemCmkid();
    void setSystemCmkid(const std::string& value);

    /// <summary>
    /// metadata中的表示加密功能的字段，0代表不加密，1代表加密。 不指定该字段时，云硬盘的加密属性与数据源保持一致，如果不是从数据源创建的场景，则默认不加密。
    /// </summary>

    std::string getSystemEncrypted() const;
    bool systemEncryptedIsSet() const;
    void unsetsystemEncrypted();
    void setSystemEncrypted(const std::string& value);

    /// <summary>
    /// * true表示云硬盘的设备类型为SCSI类型，即允许ECS操作系统直接访问底层存储介质。支持SCSI锁命令。 * false表示云硬盘的设备类型为VBD (虚拟块存储设备 , Virtual Block Device)类型，即为默认类型，VBD只能支持简单的SCSI读写命令。 * 该字段不存在时，云硬盘默认为VBD类型。
    /// </summary>

    std::string getHwPassthrough() const;
    bool hwPassthroughIsSet() const;
    void unsethwPassthrough();
    void setHwPassthrough(const std::string& value);

    /// <summary>
    /// metadata中的表示云硬盘计费类型的字段。 当该字段有值时，表示该云硬盘的计费类型为包周期计费，否则计费类型为按需计费。
    /// </summary>

    std::string getOrderID() const;
    bool orderIDIsSet() const;
    void unsetorderID();
    void setOrderID(const std::string& value);


protected:
    std::string systemCmkid_;
    bool systemCmkidIsSet_;
    std::string systemEncrypted_;
    bool systemEncryptedIsSet_;
    std::string hwPassthrough_;
    bool hwPassthroughIsSet_;
    std::string orderID_;
    bool orderIDIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_VolumeMetadata_H_
