
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_VolumeDetail_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_VolumeDetail_H_

#include <huaweicloud/evs/v2/EvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/evs/v2/model/Attachment.h>
#include <huaweicloud/evs/v2/model/Link.h>
#include <huaweicloud/core/utils/Object.h>
#include <string>
#include <map>
#include <huaweicloud/evs/v2/model/Iops.h>
#include <vector>
#include <huaweicloud/evs/v2/model/Throughput.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 云硬盘详情。
/// </summary>
class HUAWEICLOUD_EVS_V2_EXPORT  VolumeDetail
    : public ModelBase
{
public:
    VolumeDetail();
    virtual ~VolumeDetail();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// VolumeDetail members

    /// <summary>
    /// 云硬盘的ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 云硬盘URI自描述信息。请参见 [links参数说明](https://support.huaweicloud.com/api-evs/evs_04_2006.html#evs_04_2006__evs_04_2010_li1077125119136)。
    /// </summary>

    std::vector<Link>& getLinks();
    bool linksIsSet() const;
    void unsetlinks();
    void setLinks(const std::vector<Link>& value);

    /// <summary>
    /// 云硬盘名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 云硬盘状态，请参见[云硬盘状态](https://support.huaweicloud.com/api-evs/evs_04_0040.html)。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 云硬盘的挂载信息，请参见•[attachments参数说明](https://support.huaweicloud.com/api-evs/evs_04_2006.html#evs_04_2006__evs_04_2010_li12430153610291)。
    /// </summary>

    std::vector<Attachment>& getAttachments();
    bool attachmentsIsSet() const;
    void unsetattachments();
    void setAttachments(const std::vector<Attachment>& value);

    /// <summary>
    /// 云硬盘所属的AZ信息。
    /// </summary>

    std::string getAvailabilityZone() const;
    bool availabilityZoneIsSet() const;
    void unsetavailabilityZone();
    void setAvailabilityZone(const std::string& value);

    /// <summary>
    /// 预留属性。
    /// </summary>

    std::string getOsVolHostAttrhost() const;
    bool osVolHostAttrhostIsSet() const;
    void unsetosVolHostAttrhost();
    void setOsVolHostAttrhost(const std::string& value);

    /// <summary>
    /// 源云硬盘ID，如果是从源云硬盘创建，则有值。  当前云硬盘服务不支持该字段。
    /// </summary>

    std::string getSourceVolid() const;
    bool sourceVolidIsSet() const;
    void unsetsourceVolid();
    void setSourceVolid(const std::string& value);

    /// <summary>
    /// 快照ID，如果是从快照创建，则有值。
    /// </summary>

    std::string getSnapshotId() const;
    bool snapshotIdIsSet() const;
    void unsetsnapshotId();
    void setSnapshotId(const std::string& value);

    /// <summary>
    /// 云硬盘描述。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 云硬盘创建时间。 时间格式：UTC YYYY-MM-DDTHH:MM:SS.XXXXXX
    /// </summary>

    std::string getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const std::string& value);

    /// <summary>
    /// 云硬盘所属的租户ID。租户ID就是项目ID。
    /// </summary>

    std::string getOsVolTenantAttrtenantId() const;
    bool osVolTenantAttrtenantIdIsSet() const;
    void unsetosVolTenantAttrtenantId();
    void setOsVolTenantAttrtenantId(const std::string& value);

    /// <summary>
    /// 云硬盘镜像的元数据。 &gt; 说明： &gt;  &gt; 关于“volume_image_metadata”字段的详细说明，具体请参见：\&quot;[查询镜像详情](https://support.huaweicloud.com/api-ims/ims_03_0703.html)\&quot;。
    /// </summary>

    std::map<std::string, Object>& getVolumeImageMetadata();
    bool volumeImageMetadataIsSet() const;
    void unsetvolumeImageMetadata();
    void setVolumeImageMetadata(const std::map<std::string, Object>& value);

    /// <summary>
    /// 云硬盘类型。 目前支持\&quot;SATA\&quot;，\&quot;SAS\&quot;，\&quot;GPSSD\&quot;，\&quot;SSD\&quot;和\&quot;ESSD\&quot;五种。  - \&quot;SATA\&quot;为普通IO云硬盘 - \&quot;SAS\&quot;为高IO云硬盘 - \&quot;GPSSD\&quot;为通用型SSD云硬盘 - \&quot;SSD\&quot;为超高IO云硬盘 - \&quot;ESSD\&quot;为极速IO云硬盘
    /// </summary>

    std::string getVolumeType() const;
    bool volumeTypeIsSet() const;
    void unsetvolumeType();
    void setVolumeType(const std::string& value);

    /// <summary>
    /// 云硬盘大小，单位为GB。
    /// </summary>

    int32_t getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(int32_t value);

    /// <summary>
    /// 预留属性。
    /// </summary>

    std::string getConsistencygroupId() const;
    bool consistencygroupIdIsSet() const;
    void unsetconsistencygroupId();
    void setConsistencygroupId(const std::string& value);

    /// <summary>
    /// 是否为启动云硬盘。 true：表示为启动云硬盘。 false：表示为非启动云硬盘。
    /// </summary>

    std::string getBootable() const;
    bool bootableIsSet() const;
    void unsetbootable();
    void setBootable(const std::string& value);

    /// <summary>
    /// 云硬盘的元数据。  __system__cmkid metadata中的加密cmkid字段，与__system__encrypted配合表示需要加密，cmkid长度固定为36个字节。 &gt;  &gt; 请求获取密钥ID的方法请参考：\&quot;[查询密钥列表](https://support.huaweicloud.com/api-dew/ListKeys.html)\&quot;。  __system__encrypted metadata中的表示加密功能的字段，0代表不加密，1代表加密。 不指定该字段时，云硬盘的加密属性与数据源保持一致，如果不是从数据源创建的场景，则默认不加密。  full_clone 从快照创建云硬盘时的创建方式。 * 0表示使用链接克隆方式。 * 1表示使用全量克隆方式。  hw:passthrough * true表示云硬盘的设备类型为SCSI类型，即允许ECS操作系统直接访问底层存储介质。支持SCSI锁命令。 * false表示云硬盘的设备类型为VBD (虚拟块存储设备 , Virtual Block Device)类型，即为默认类型，VBD只能支持简单的SCSI读写命令。 * 该字段不存在时，云硬盘默认为VBD类型。  orderID metadata中的表示云硬盘计费类型的字段。 当该字段有值时，表示该云硬盘的计费类型为包周期计费，否则计费类型为按需计费。
    /// </summary>

    std::map<std::string, Object>& getMetadata();
    bool metadataIsSet() const;
    void unsetmetadata();
    void setMetadata(const std::map<std::string, Object>& value);

    /// <summary>
    /// 云硬盘更新时间。 时间格式：UTC YYYY-MM-DDTHH:MM:SS.XXXXXX
    /// </summary>

    std::string getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetupdatedAt();
    void setUpdatedAt(const std::string& value);

    /// <summary>
    /// 当前云硬盘服务不支持该字段。
    /// </summary>

    bool isEncrypted() const;
    bool encryptedIsSet() const;
    void unsetencrypted();
    void setEncrypted(bool value);

    /// <summary>
    /// 预留属性。
    /// </summary>

    std::string getReplicationStatus() const;
    bool replicationStatusIsSet() const;
    void unsetreplicationStatus();
    void setReplicationStatus(const std::string& value);

    /// <summary>
    /// 预留属性。
    /// </summary>

    std::string getOsVolumeReplicationextendedStatus() const;
    bool osVolumeReplicationextendedStatusIsSet() const;
    void unsetosVolumeReplicationextendedStatus();
    void setOsVolumeReplicationextendedStatus(const std::string& value);

    /// <summary>
    /// 预留属性。
    /// </summary>

    std::string getOsVolMigStatusAttrmigstat() const;
    bool osVolMigStatusAttrmigstatIsSet() const;
    void unsetosVolMigStatusAttrmigstat();
    void setOsVolMigStatusAttrmigstat(const std::string& value);

    /// <summary>
    /// 预留属性。
    /// </summary>

    std::string getOsVolMigStatusAttrnameId() const;
    bool osVolMigStatusAttrnameIdIsSet() const;
    void unsetosVolMigStatusAttrnameId();
    void setOsVolMigStatusAttrnameId(const std::string& value);

    /// <summary>
    /// 是否为共享云硬盘。true为共享盘，false为普通云硬盘。 该字段已经废弃，请使用multiattach。
    /// </summary>

    std::string getShareable() const;
    bool shareableIsSet() const;
    void unsetshareable();
    void setShareable(const std::string& value);

    /// <summary>
    /// 预留属性。
    /// </summary>

    std::string getUserId() const;
    bool userIdIsSet() const;
    void unsetuserId();
    void setUserId(const std::string& value);

    /// <summary>
    /// 服务类型，结果为EVS、DSS、DESS。
    /// </summary>

    std::string getServiceType() const;
    bool serviceTypeIsSet() const;
    void unsetserviceType();
    void setServiceType(const std::string& value);

    /// <summary>
    /// 是否为共享云硬盘。
    /// </summary>

    bool isMultiattach() const;
    bool multiattachIsSet() const;
    void unsetmultiattach();
    void setMultiattach(bool value);

    /// <summary>
    /// 云硬盘所属的专属存储池ID。
    /// </summary>

    std::string getDedicatedStorageId() const;
    bool dedicatedStorageIdIsSet() const;
    void unsetdedicatedStorageId();
    void setDedicatedStorageId(const std::string& value);

    /// <summary>
    /// 云硬盘所属的专属存储池的名称。
    /// </summary>

    std::string getDedicatedStorageName() const;
    bool dedicatedStorageNameIsSet() const;
    void unsetdedicatedStorageName();
    void setDedicatedStorageName(const std::string& value);

    /// <summary>
    /// 云硬盘的标签。 如果云硬盘有标签，则会有该字段，否则该字段为空。
    /// </summary>

    std::map<std::string, std::string>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::map<std::string, std::string>& value);

    /// <summary>
    /// 云硬盘挂载时的唯一标识。
    /// </summary>

    std::string getWwn() const;
    bool wwnIsSet() const;
    void unsetwwn();
    void setWwn(const std::string& value);

    /// <summary>
    /// 云硬盘上绑定的企业项目ID。 &gt; 说明： &gt;  &gt; 关于企业项目ID的获取及企业项目特性的详细信息，请参见：\&quot;[企业管理用户指南](https://support.huaweicloud.com/usermanual-em/zh-cn_topic_0123692049.html)\&quot;。
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// 云硬盘序列号。 只有SCSI类型的非双活卷才会返回该字段，用于与虚拟机中的盘做对应关系。
    /// </summary>

    std::string getSerialNumber() const;
    bool serialNumberIsSet() const;
    void unsetserialNumber();
    void setSerialNumber(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    Iops getIops() const;
    bool iopsIsSet() const;
    void unsetiops();
    void setIops(const Iops& value);

    /// <summary>
    /// 
    /// </summary>

    Throughput getThroughput() const;
    bool throughputIsSet() const;
    void unsetthroughput();
    void setThroughput(const Throughput& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::vector<Link> links_;
    bool linksIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::vector<Attachment> attachments_;
    bool attachmentsIsSet_;
    std::string availabilityZone_;
    bool availabilityZoneIsSet_;
    std::string osVolHostAttrhost_;
    bool osVolHostAttrhostIsSet_;
    std::string sourceVolid_;
    bool sourceVolidIsSet_;
    std::string snapshotId_;
    bool snapshotIdIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string createdAt_;
    bool createdAtIsSet_;
    std::string osVolTenantAttrtenantId_;
    bool osVolTenantAttrtenantIdIsSet_;
    std::map<std::string, Object> volumeImageMetadata_;
    bool volumeImageMetadataIsSet_;
    std::string volumeType_;
    bool volumeTypeIsSet_;
    int32_t size_;
    bool sizeIsSet_;
    std::string consistencygroupId_;
    bool consistencygroupIdIsSet_;
    std::string bootable_;
    bool bootableIsSet_;
    std::map<std::string, Object> metadata_;
    bool metadataIsSet_;
    std::string updatedAt_;
    bool updatedAtIsSet_;
    bool encrypted_;
    bool encryptedIsSet_;
    std::string replicationStatus_;
    bool replicationStatusIsSet_;
    std::string osVolumeReplicationextendedStatus_;
    bool osVolumeReplicationextendedStatusIsSet_;
    std::string osVolMigStatusAttrmigstat_;
    bool osVolMigStatusAttrmigstatIsSet_;
    std::string osVolMigStatusAttrnameId_;
    bool osVolMigStatusAttrnameIdIsSet_;
    std::string shareable_;
    bool shareableIsSet_;
    std::string userId_;
    bool userIdIsSet_;
    std::string serviceType_;
    bool serviceTypeIsSet_;
    bool multiattach_;
    bool multiattachIsSet_;
    std::string dedicatedStorageId_;
    bool dedicatedStorageIdIsSet_;
    std::string dedicatedStorageName_;
    bool dedicatedStorageNameIsSet_;
    std::map<std::string, std::string> tags_;
    bool tagsIsSet_;
    std::string wwn_;
    bool wwnIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    std::string serialNumber_;
    bool serialNumberIsSet_;
    Iops iops_;
    bool iopsIsSet_;
    Throughput throughput_;
    bool throughputIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_VolumeDetail_H_
