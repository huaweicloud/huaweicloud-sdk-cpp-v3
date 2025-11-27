
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_RecycleBinVolume_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_RecycleBinVolume_H_


#include <huaweicloud/evs/v2/EvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/evs/v2/model/Attachment.h>
#include <huaweicloud/core/utils/Object.h>
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
/// 回收站云硬盘详情
/// </summary>
class HUAWEICLOUD_EVS_V2_EXPORT  RecycleBinVolume
    : public ModelBase
{
public:
    RecycleBinVolume();
    virtual ~RecycleBinVolume();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RecycleBinVolume members

    /// <summary>
    /// **参数解释** 云硬盘ID。 **取值范围** 不涉及。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释** 云硬盘名称。 **取值范围** 不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释** 云硬盘描述。 **取值范围** 不涉及。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// **参数解释** 云硬盘状态，具体请参见[云硬盘状态](evs_04_0040.xml)。 **取值范围** 不涉及。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// **参数解释** 云硬盘的挂载信息。 **取值范围** 不涉及。
    /// </summary>

    std::vector<Attachment>& getAttachments();
    bool attachmentsIsSet() const;
    void unsetattachments();
    void setAttachments(const std::vector<Attachment>& value);

    /// <summary>
    /// **参数解释** 云硬盘是否共享。 **取值范围** - true：表示为共享云硬盘。 - false：表示为普通云硬盘。
    /// </summary>

    bool isMultiattach() const;
    bool multiattachIsSet() const;
    void unsetmultiattach();
    void setMultiattach(bool value);

    /// <summary>
    /// **参数解释** 云硬盘大小，单位为GiB。 **取值范围** 不涉及。
    /// </summary>

    int32_t getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(int32_t value);

    /// <summary>
    /// **参数解释** 云硬盘的metadata信息 ，调用方可以添加或删除metadata信息。 **取值范围** 当前部分key在EVS服务中有业务场景含义，这部分key的描述如下： - __system__cmkid    metadata中的加密cmkid字段，与__system__encrypted配合表示需要加密，cmkid长度固定为36个字节。    请求获取密钥ID的方法请参考：\&quot;[查询密钥列表](https://support.huaweicloud.com/api-dew/ListKeys.html)\&quot;。      - __system__encrypted    metadata中的表示加密功能的字段，0代表不加密，1代表加密。    不指定该字段时，云硬盘的加密属性与数据源保持一致，如果不是从数据源创建的场景，则默认不加密。   - hw:passthrough    - true表示云硬盘的设备类型为SCSI类型，即允许ECS操作系统直接访问底层存储介质。支持SCSI锁命令。    - false表示云硬盘的设备类型为VBD (虚拟块存储设备 , Virtual Block Device)类型，即为默认类型，VBD只能支持简单的SCSI读写命令。    - 该字段不存在时，云硬盘默认为VBD类型。
    /// </summary>

    std::map<std::string, Object>& getMetadata();
    bool metadataIsSet() const;
    void unsetmetadata();
    void setMetadata(const std::map<std::string, Object>& value);

    /// <summary>
    /// **参数解释** 云硬盘是否为启动盘。 **取值范围** - true：表示为启动云硬盘。 - false：表示为非启动云硬盘。
    /// </summary>

    std::string getBootable() const;
    bool bootableIsSet() const;
    void unsetbootable();
    void setBootable(const std::string& value);

    /// <summary>
    /// **参数解释** 云硬盘标签。 **取值范围** 不涉及。
    /// </summary>

    std::map<std::string, std::string>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::map<std::string, std::string>& value);

    /// <summary>
    /// **参数解释** 云硬盘所属可用区。 **取值范围** 不涉及。
    /// </summary>

    std::string getAvailabilityZone() const;
    bool availabilityZoneIsSet() const;
    void unsetavailabilityZone();
    void setAvailabilityZone(const std::string& value);

    /// <summary>
    /// **参数解释** 云硬盘创建时间。 **取值范围** 时间格式：UTC YYYY-MM-DDTHH:MM:SS.XXXXXX
    /// </summary>

    std::string getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const std::string& value);

    /// <summary>
    /// **参数解释** 云硬盘所属的服务类型。 **取值范围** - EVS：云硬盘。 - DSS：专属分布式存储服务。
    /// </summary>

    std::string getServiceType() const;
    bool serviceTypeIsSet() const;
    void unsetserviceType();
    void setServiceType(const std::string& value);

    /// <summary>
    /// **参数解释** 云硬盘信息被更新的时间。 **取值范围** 时间格式：UTC YYYY-MM-DDTHH:MM:SS.XXXXXX
    /// </summary>

    std::string getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetupdatedAt();
    void setUpdatedAt(const std::string& value);

    /// <summary>
    /// **参数解释** 云硬盘类型。 **取值范围** 目前支持\&quot;SATA\&quot;，\&quot;SAS\&quot;，\&quot;GPSSD\&quot;，\&quot;SSD\&quot;，\&quot;ESSD\&quot;，\&quot;GPSSD2\&quot;，\&quot;ESSD2\&quot;七种。   - \&quot;SATA\&quot;为普通IO云硬盘(已售罄) - \&quot;SAS\&quot;为高IO云硬盘 - \&quot;GPSSD\&quot;为通用型SSD云硬盘 - \&quot;SSD\&quot;为超高IO云硬盘 - \&quot;ESSD\&quot;为极速型SSD云硬盘 - \&quot;GPSSD2\&quot;为通用型SSD V2云硬盘 - \&quot;ESSD2\&quot;为极速型SSD V2云硬盘
    /// </summary>

    std::string getVolumeType() const;
    bool volumeTypeIsSet() const;
    void unsetvolumeType();
    void setVolumeType(const std::string& value);

    /// <summary>
    /// **参数解释** 企业项目ID。 **取值范围** 不涉及。
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// **参数解释** 预计到期清理的时间。 **取值范围** 时间格式：UTC YYYY-MM-DDTHH:MM:SS.XXXXXX
    /// </summary>

    std::string getPlanDeleteAt() const;
    bool planDeleteAtIsSet() const;
    void unsetplanDeleteAt();
    void setPlanDeleteAt(const std::string& value);

    /// <summary>
    /// **参数解释** 放入回收站的时间。 **取值范围** 时间格式：UTC YYYY-MM-DDTHH:MM:SS.XXXXXX
    /// </summary>

    std::string getPreDeletedAt() const;
    bool preDeletedAtIsSet() const;
    void unsetpreDeletedAt();
    void setPreDeletedAt(const std::string& value);

    /// <summary>
    /// **参数解释** 云硬盘所属的专属存储池ID。 **取值范围** 不涉及。
    /// </summary>

    std::string getDedicatedStorageId() const;
    bool dedicatedStorageIdIsSet() const;
    void unsetdedicatedStorageId();
    void setDedicatedStorageId(const std::string& value);

    /// <summary>
    /// **参数解释** 云硬盘所属的专属存储池的名称。 **取值范围** 不涉及。
    /// </summary>

    std::string getDedicatedStorageName() const;
    bool dedicatedStorageNameIsSet() const;
    void unsetdedicatedStorageName();
    void setDedicatedStorageName(const std::string& value);

    /// <summary>
    /// **参数解释** 云硬盘镜像的元数据。 关于“volume_image_metadata”字段的详细说明，具体请参见：\&quot;[查询镜像详情](https://support.huaweicloud.com/api-ims/ims_03_0703.html)\&quot;。  **取值范围** 不涉及。
    /// </summary>

    std::map<std::string, Object>& getVolumeImageMetadata();
    bool volumeImageMetadataIsSet() const;
    void unsetvolumeImageMetadata();
    void setVolumeImageMetadata(const std::map<std::string, Object>& value);

    /// <summary>
    /// **参数解释** 云硬盘的唯一标识。 **取值范围** 不涉及。
    /// </summary>

    std::string getWwn() const;
    bool wwnIsSet() const;
    void unsetwwn();
    void setWwn(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::vector<Attachment> attachments_;
    bool attachmentsIsSet_;
    bool multiattach_;
    bool multiattachIsSet_;
    int32_t size_;
    bool sizeIsSet_;
    std::map<std::string, Object> metadata_;
    bool metadataIsSet_;
    std::string bootable_;
    bool bootableIsSet_;
    std::map<std::string, std::string> tags_;
    bool tagsIsSet_;
    std::string availabilityZone_;
    bool availabilityZoneIsSet_;
    std::string createdAt_;
    bool createdAtIsSet_;
    std::string serviceType_;
    bool serviceTypeIsSet_;
    std::string updatedAt_;
    bool updatedAtIsSet_;
    std::string volumeType_;
    bool volumeTypeIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    std::string planDeleteAt_;
    bool planDeleteAtIsSet_;
    std::string preDeletedAt_;
    bool preDeletedAtIsSet_;
    std::string dedicatedStorageId_;
    bool dedicatedStorageIdIsSet_;
    std::string dedicatedStorageName_;
    bool dedicatedStorageNameIsSet_;
    std::map<std::string, Object> volumeImageMetadata_;
    bool volumeImageMetadataIsSet_;
    std::string wwn_;
    bool wwnIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_RecycleBinVolume_H_
