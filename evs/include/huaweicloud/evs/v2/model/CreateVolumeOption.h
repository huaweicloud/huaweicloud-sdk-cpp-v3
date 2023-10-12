
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_CreateVolumeOption_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_CreateVolumeOption_H_


#include <huaweicloud/evs/v2/EvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <map>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 创建云硬盘的信息。
/// </summary>
class HUAWEICLOUD_EVS_V2_EXPORT  CreateVolumeOption
    : public ModelBase
{
public:
    CreateVolumeOption();
    virtual ~CreateVolumeOption();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateVolumeOption members

    /// <summary>
    /// 指定要创建云硬盘的可用区。 获取方法请参见\&quot;[获取可用区](https://apiexplorer.developer.huaweicloud.com/apiexplorer/sdk?product&#x3D;EVS&amp;api&#x3D;CinderListAvailabilityZones)\&quot;。
    /// </summary>

    std::string getAvailabilityZone() const;
    bool availabilityZoneIsSet() const;
    void unsetavailabilityZone();
    void setAvailabilityZone(const std::string& value);

    /// <summary>
    /// 备份ID，从备份创建云硬盘时为必选。
    /// </summary>

    std::string getBackupId() const;
    bool backupIdIsSet() const;
    void unsetbackupId();
    void setBackupId(const std::string& value);

    /// <summary>
    /// 批量创云硬盘的个数。如果无该参数，表明只创建1个云硬盘，目前最多支持批量创建100个。 从备份创建云硬盘时，不支持批量创建，数量只能为“1”。  如果发送请求时，将参数值设置为小数，则默认取小数点前的整数。
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);

    /// <summary>
    /// 云硬盘的描述。最大支持255个字节。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 企业项目ID。创建云硬盘时，给云硬盘绑定企业项目ID。
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// 镜像ID，指定该参数表示创建云硬盘方式为从镜像创建云硬盘。
    /// </summary>

    std::string getImageRef() const;
    bool imageRefIsSet() const;
    void unsetimageRef();
    void setImageRef(const std::string& value);

    /// <summary>
    /// 创建云硬盘的metadata信息     可选参数如下:    [\\_\\_system\\_\\_cmkid]   metadata中的加密cmkid字段，与\\_\\_system\\_\\_encrypted配合表示需要加密，cmkid长度固定为36个字节。 &gt; 说明： &gt;  &gt; 请求获取密钥ID的方法请参考：\&quot;[查询密钥列表](https://support.huaweicloud.com/api-dew/ListKeys.html)\&quot;。   [\\_\\_system\\_\\_encrypted]   metadata中的表示加密功能的字段,0代表不加密,1代表加密。不指定该字段时,云硬盘的加密属性与数据源保持一致,如果不是从数据源创建的场景,则默认不加密。    [full_clone]   从快照创建云硬盘时，如需使用link克隆方式，请指定该字段的值为0。    [hw:passthrough]    * true表示云硬盘的设备类型为SCSI类型，即允许ECS操作系统直接访问底层存储介质。支持SCSI锁命令。   * false表示云硬盘的设备类型为VBD (虚拟块存储设备 , Virtual Block Device)类型，即为默认类型，VBD只能支持简单的SCSI读写命令。   * 该字段不存在时，云硬盘默认为VBD类型。    [create\\_for\\_volume\\_id]  * true表示接口响应中会通过volume_ids字段返回本次创建的云硬盘ID。 * false表示接口响应中不会返回本次创建的云硬盘ID。  该字段不存在时，默认为false。
    /// </summary>

    std::map<std::string, std::string>& getMetadata();
    bool metadataIsSet() const;
    void unsetmetadata();
    void setMetadata(const std::map<std::string, std::string>& value);

    /// <summary>
    /// 是否为共享云硬盘。true为共享盘，false为普通云硬盘。
    /// </summary>

    bool isMultiattach() const;
    bool multiattachIsSet() const;
    void unsetmultiattach();
    void setMultiattach(bool value);

    /// <summary>
    /// 云硬盘名称。 如果为创建单个云硬盘，name为云硬盘名称。最大支持255个字节。 创建的云硬盘数量（count字段对应的值）大于1时，为区分不同云硬盘，创建过程中系统会自动在名称后加“-0000”的类似标记。例如：volume-0001、volume-0002。最大支持250个字节。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 云硬盘大小，单位为GB，其限制如下： 系统盘：1GB-1024GB 数据盘：10GB-32768GB 创建空白云硬盘和从 镜像/快照 创建云硬盘时，size为必选，且云硬盘大小不能小于 镜像/快照 大小。 从备份创建云硬盘时，size为可选，不指定size时，云硬盘大小和备份大小一致。
    /// </summary>

    int32_t getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(int32_t value);

    /// <summary>
    /// 快照ID，指定该参数表示创建云硬盘方式为从快照创建云硬盘
    /// </summary>

    std::string getSnapshotId() const;
    bool snapshotIdIsSet() const;
    void unsetsnapshotId();
    void setSnapshotId(const std::string& value);

    /// <summary>
    /// 云硬盘类型。  目前支持\&quot;SATA\&quot;，\&quot;SAS\&quot;，\&quot;GPSSD\&quot;，\&quot;SSD\&quot;，\&quot;ESSD\&quot;，\&quot;GPSSD2\&quot;和\&quot;ESSD2\&quot;七种。  - \&quot;SATA\&quot;为普通IO云硬盘(已售罄) - \&quot;SAS\&quot;为高IO云硬盘 - \&quot;GPSSD\&quot;为通用型SSD云硬盘 - \&quot;SSD\&quot;为超高IO云硬盘 - \&quot;ESSD\&quot;为极速IO云硬盘 - \&quot;GPSSD2\&quot;为通用型SSD V2云硬盘 - \&quot;ESSD2\&quot;为极速型SSD V2云硬盘 当指定的云硬盘类型在avaliability_zone内不存在时，则创建云硬盘失败。  说明： 从快照创建云硬盘时，volume_type字段必须和快照源云硬盘保持一致。 了解不同磁盘类型的详细信息，请参见 [磁盘类型及性能介绍](https://support.huaweicloud.com/productdesc-evs/zh-cn_topic_0044524691.html)。 获取region可用的卷类型，请参见[查询云硬盘类型列表](https://apiexplorer.developer.huaweicloud.com/apiexplorer/doc?product&#x3D;EVS&amp;api&#x3D;CinderListVolumeTypes)
    /// </summary>

    std::string getVolumeType() const;
    bool volumeTypeIsSet() const;
    void unsetvolumeType();
    void setVolumeType(const std::string& value);

    /// <summary>
    /// 云硬盘标签信息。
    /// </summary>

    std::map<std::string, std::string>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::map<std::string, std::string>& value);

    /// <summary>
    /// 给云硬盘配置iops，购买GPSSD2、ESSD2类型的云硬盘时必填，其他类型不能设置。  说明： 1、了解GPSSD2、ESSD2类型的iops大小范围，请参见 [云硬盘类型及性能介绍里面的云硬盘性能数据表](https://support.huaweicloud.com/productdesc-evs/zh-cn_topic_0044524691.html)。 2、只支持按需计费。
    /// </summary>

    int32_t getIops() const;
    bool iopsIsSet() const;
    void unsetiops();
    void setIops(int32_t value);

    /// <summary>
    /// 给云硬盘配置吞吐量，单位是MiB/s，购买GPSSD2类型云盘时必填，其他类型不能设置。  说明： 1、了解GPSSD2类型的吞吐量大小范围，请参见 [云硬盘类型及性能介绍里面的云硬盘性能数据表](https://support.huaweicloud.com/productdesc-evs/zh-cn_topic_0044524691.html)。 2、只支持按需计费。
    /// </summary>

    int32_t getThroughput() const;
    bool throughputIsSet() const;
    void unsetthroughput();
    void setThroughput(int32_t value);


protected:
    std::string availabilityZone_;
    bool availabilityZoneIsSet_;
    std::string backupId_;
    bool backupIdIsSet_;
    int32_t count_;
    bool countIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    std::string imageRef_;
    bool imageRefIsSet_;
    std::map<std::string, std::string> metadata_;
    bool metadataIsSet_;
    bool multiattach_;
    bool multiattachIsSet_;
    std::string name_;
    bool nameIsSet_;
    int32_t size_;
    bool sizeIsSet_;
    std::string snapshotId_;
    bool snapshotIdIsSet_;
    std::string volumeType_;
    bool volumeTypeIsSet_;
    std::map<std::string, std::string> tags_;
    bool tagsIsSet_;
    int32_t iops_;
    bool iopsIsSet_;
    int32_t throughput_;
    bool throughputIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_CreateVolumeOption_H_
