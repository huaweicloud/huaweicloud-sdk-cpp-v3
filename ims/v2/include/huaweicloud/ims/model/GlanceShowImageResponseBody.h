
#ifndef HUAWEICLOUD_SDK_IMS_V2_MODEL_GlanceShowImageResponseBody_H_
#define HUAWEICLOUD_SDK_IMS_V2_MODEL_GlanceShowImageResponseBody_H_

#include <huaweicloud/ims/ImsExport.h>

#include "huaweicloud/core/utils/ModelBase.h"
#include "huaweicloud/core/http/HttpResponse.h"

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// 镜像信息响应体
/// </summary>
class HUAWEICLOUD_IMS_EXPORT  GlanceShowImageResponseBody
    : public ModelBase
{
public:
    GlanceShowImageResponseBody();
    virtual ~GlanceShowImageResponseBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// GlanceShowImageResponseBody members

    /// <summary>
    /// 备份ID。如果是备份创建的镜像，则填写为备份的ID，否则为空。
    /// </summary>

    std::string getBackupId() const;
    bool backupIdIsSet() const;
    void unsetbackupId();
    void setBackupId(const std::string& value);

    /// <summary>
    /// 镜像来源。公共镜像为空。
    /// </summary>

    std::string getDataOrigin() const;
    bool dataOriginIsSet() const;
    void unsetdataOrigin();
    void setDataOrigin(const std::string& value);

    /// <summary>
    /// 镜像描述信息。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 镜像文件的大小，单位为字节。目前取值为大于0的字符串。
    /// </summary>

    std::string getImageSize() const;
    bool imageSizeIsSet() const;
    void unsetimageSize();
    void setImageSize(const std::string& value);

    /// <summary>
    /// 镜像后端存储类型，目前只支持uds
    /// </summary>

    std::string getImageSourceType() const;
    bool imageSourceTypeIsSet() const;
    void unsetimageSourceType();
    void setImageSourceType(const std::string& value);

    /// <summary>
    /// 镜像类型，目前支持以下类型：公共镜像：gold私有镜像：private共享镜像：shared
    /// </summary>

    std::string getImagetype() const;
    bool imagetypeIsSet() const;
    void unsetimagetype();
    void setImagetype(const std::string& value);

    /// <summary>
    /// 是否是注册过的镜像，取值为“true”或者“false”。
    /// </summary>

    std::string getIsregistered() const;
    bool isregisteredIsSet() const;
    void unsetisregistered();
    void setIsregistered(const std::string& value);

    /// <summary>
    /// 父镜像ID。公共镜像或通过文件创建的私有镜像，取值为空。
    /// </summary>

    std::string getOriginalimagename() const;
    bool originalimagenameIsSet() const;
    void unsetoriginalimagename();
    void setOriginalimagename(const std::string& value);

    /// <summary>
    /// 操作系统位数，一般取值为“32”或者“64”。
    /// </summary>

    std::string getOsBit() const;
    bool osBitIsSet() const;
    void unsetosBit();
    void setOsBit(const std::string& value);

    /// <summary>
    /// 操作系统类型，目前取值Linux， Windows，Other。
    /// </summary>

    std::string getOsType() const;
    bool osTypeIsSet() const;
    void unsetosType();
    void setOsType(const std::string& value);

    /// <summary>
    /// 操作系统具体版本。
    /// </summary>

    std::string getOsVersion() const;
    bool osVersionIsSet() const;
    void unsetosVersion();
    void setOsVersion(const std::string& value);

    /// <summary>
    /// 镜像平台分类，取值为Windows，Ubuntu，RedHat，SUSE，CentOS，Debian，OpenSUSE, Oracle Linux，Fedora，Other，CoreOS和EulerOS。
    /// </summary>

    std::string getPlatform() const;
    bool platformIsSet() const;
    void unsetplatform();
    void setPlatform(const std::string& value);

    /// <summary>
    /// 市场镜像的产品ID。
    /// </summary>

    std::string getProductcode() const;
    bool productcodeIsSet() const;
    void unsetproductcode();
    void setProductcode(const std::string& value);

    /// <summary>
    /// 表示该镜像支持密集存储。如果镜像支持密集存储性能，则值为true，否则无需增加该属性。
    /// </summary>

    std::string getSupportDiskintensive() const;
    bool supportDiskintensiveIsSet() const;
    void unsetsupportDiskintensive();
    void setSupportDiskintensive(const std::string& value);

    /// <summary>
    /// 表示该镜像支持高计算性能。如果镜像支持高计算性能，则值为true，否则无需增加该属性。
    /// </summary>

    std::string getSupportHighperformance() const;
    bool supportHighperformanceIsSet() const;
    void unsetsupportHighperformance();
    void setSupportHighperformance(const std::string& value);

    /// <summary>
    /// 如果镜像支持KVM，取值为true，否则无需增加该属性。
    /// </summary>

    std::string getSupportKvm() const;
    bool supportKvmIsSet() const;
    void unsetsupportKvm();
    void setSupportKvm(const std::string& value);

    /// <summary>
    /// 表示该镜像是支持KVM虚拟化平台下的GPU类型，如果不支持KVM虚拟机下GPU类型，无需添加该属性。该属性与“__support_xen”和“__support_kvm”属性不共存。
    /// </summary>

    std::string getSupportKvmGpuType() const;
    bool supportKvmGpuTypeIsSet() const;
    void unsetsupportKvmGpuType();
    void setSupportKvmGpuType(const std::string& value);

    /// <summary>
    /// 如果镜像支持KVM虚拟化下Infiniband网卡类型，取值为true。否则，无需添加该属性。该属性与“__support_xen”属性不共存。
    /// </summary>

    std::string getSupportKvmInfiniband() const;
    bool supportKvmInfinibandIsSet() const;
    void unsetsupportKvmInfiniband();
    void setSupportKvmInfiniband(const std::string& value);

    /// <summary>
    /// 表示该镜像支持超大内存。如果镜像支持超大内存，取值为true，否则无需增加该属性
    /// </summary>

    std::string getSupportLargememory() const;
    bool supportLargememoryIsSet() const;
    void unsetsupportLargememory();
    void setSupportLargememory(const std::string& value);

    /// <summary>
    /// 如果镜像支持XEN，取值为true，否则无需增加该属性。
    /// </summary>

    std::string getSupportXen() const;
    bool supportXenIsSet() const;
    void unsetsupportXen();
    void setSupportXen(const std::string& value);

    /// <summary>
    /// 表示该镜像是支持XEN虚拟化平台下的GPU优化类型，取值参考8.10-表 镜像支持的GPU类型说明。镜像操作系统类型请参考8.10-表 镜像类型。如果不支持XEN虚拟化下GPU类型，无需添加该属性。该属性与“__support_xen”和“__support_kvm”属性不共存。
    /// </summary>

    std::string getSupportXenGpuType() const;
    bool supportXenGpuTypeIsSet() const;
    void unsetsupportXenGpuType();
    void setSupportXenGpuType(const std::string& value);

    /// <summary>
    /// 如果镜像支持XEN虚拟化下HANA类型，取值为true。否则，无需添加该属性。该属性与“__support_xen”和“__support_kvm”属性不共存。
    /// </summary>

    std::string getSupportXenHana() const;
    bool supportXenHanaIsSet() const;
    void unsetsupportXenHana();
    void setSupportXenHana(const std::string& value);

    /// <summary>
    /// 目前暂时不使用。
    /// </summary>

    std::string getChecksum() const;
    bool checksumIsSet() const;
    void unsetchecksum();
    void setChecksum(const std::string& value);

    /// <summary>
    /// 容器类型。
    /// </summary>

    std::string getContainerFormat() const;
    bool containerFormatIsSet() const;
    void unsetcontainerFormat();
    void setContainerFormat(const std::string& value);

    /// <summary>
    /// 创建时间。格式为UTC时间。
    /// </summary>

    std::string getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const std::string& value);

    /// <summary>
    /// 是否是删除的镜像，取值为true或者false。
    /// </summary>

    bool isDeleted() const;
    bool deletedIsSet() const;
    void unsetdeleted();
    void setDeleted(bool value);

    /// <summary>
    /// 删除时间。格式为UTC时间
    /// </summary>

    std::string getDeletedAt() const;
    bool deletedAtIsSet() const;
    void unsetdeletedAt();
    void setDeletedAt(const std::string& value);

    /// <summary>
    /// 镜像的格式，目前支持vhd，zvhd、raw，qcow2,zvhd2。默认值是vhd。
    /// </summary>

    std::string getDiskFormat() const;
    bool diskFormatIsSet() const;
    void unsetdiskFormat();
    void setDiskFormat(const std::string& value);

    /// <summary>
    /// 镜像文件下载和上传链接。
    /// </summary>

    std::string getFile() const;
    bool fileIsSet() const;
    void unsetfile();
    void setFile(const std::string& value);

    /// <summary>
    /// 镜像ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 镜像运行需要的最小磁盘容量，单位为GB 
    /// </summary>

    int32_t getMinDisk() const;
    bool minDiskIsSet() const;
    void unsetminDisk();
    void setMinDisk(int32_t value);

    /// <summary>
    /// 镜像运行最小内存，单位为MB。
    /// </summary>

    int32_t getMinRam() const;
    bool minRamIsSet() const;
    void unsetminRam();
    void setMinRam(int32_t value);

    /// <summary>
    /// 镜像名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 镜像属于哪个租户。
    /// </summary>

    std::string getOwner() const;
    bool ownerIsSet() const;
    void unsetowner();
    void setOwner(const std::string& value);

    /// <summary>
    /// 是否是受保护的，受保护的镜像不允许删除。取值为true或false。
    /// </summary>

    bool isProtected() const;
    bool protectedIsSet() const;
    void unsetprotected();
    void setProtected(bool value);

    /// <summary>
    /// 镜像视图。
    /// </summary>

    std::string getSchema() const;
    bool schemaIsSet() const;
    void unsetschema();
    void setSchema(const std::string& value);

    /// <summary>
    /// 镜像链接信息。
    /// </summary>

    std::string getSelf() const;
    bool selfIsSet() const;
    void unsetself();
    void setSelf(const std::string& value);

    /// <summary>
    /// 目前暂时不使用。
    /// </summary>

    int64_t getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(int64_t value);

    /// <summary>
    /// 镜像状态。取值如下：queued：表示镜像元数据已经创建成功，等待上传镜像文件。saving：表示镜像正在上传文件到后端存储。deleted：表示镜像已经删除。killed：表示镜像上传错误。active：表示镜像可以正常使用。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 镜像标签列表，提供用户可以自定义管理私有镜像的能力。用户可以通过镜像标签接口为每个镜像增加不同的标签，在查询接口中可以根据标签进行过滤。
    /// </summary>

    std::vector<std::string>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<std::string>& value);

    /// <summary>
    /// 更新时间。格式为UTC时间。
    /// </summary>

    std::string getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetupdatedAt();
    void setUpdatedAt(const std::string& value);

    /// <summary>
    /// 镜像使用环境类型：FusionCompute，Ironic，DataImage。
    /// </summary>

    std::string getVirtualEnvType() const;
    bool virtualEnvTypeIsSet() const;
    void unsetvirtualEnvType();
    void setVirtualEnvType(const std::string& value);

    /// <summary>
    /// 目前暂时不使用。
    /// </summary>

    int32_t getVirtualSize() const;
    bool virtualSizeIsSet() const;
    void unsetvirtualSize();
    void setVirtualSize(int32_t value);

    /// <summary>
    /// 是否被其他租户可见，取值如下：private：私有镜像public：公共镜像shared：共享镜像
    /// </summary>

    std::string getVisibility() const;
    bool visibilityIsSet() const;
    void unsetvisibility();
    void setVisibility(const std::string& value);

    /// <summary>
    /// 表示当前镜像支持CloudInit密码/密钥注入方式，建议设置为\&quot;true\&quot;或者\&quot;false\&quot;。如果取值为\&quot;true\&quot;，表示该镜像不支持CloudInit注入密码/密钥，其他取值时表示支持CloudInit注入密钥/密码。
    /// </summary>

    std::string getSupportFcInject() const;
    bool supportFcInjectIsSet() const;
    void unsetsupportFcInject();
    void setSupportFcInject(const std::string& value);

    /// <summary>
    /// 表示当前镜像所属的企业项目。 取值为0或无该值，表示属于default企业项目。 取值为UUID，表示属于该UUID对应的企业项目。 关于企业项目ID的获取及企业项目特性的详细信息，请参考《企业管理用户指南》。
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// 云主机云服务器的启动方式。目前支持： bios：表示bios引导启动。 uefi：表示uefi引导启动。
    /// </summary>

    std::string getHwFirmwareType() const;
    bool hwFirmwareTypeIsSet() const;
    void unsethwFirmwareType();
    void setHwFirmwareType(const std::string& value);

    /// <summary>
    /// 是否为ARM架构类型的镜像，取值为“true”或者“false”。
    /// </summary>

    std::string getSupportArm() const;
    bool supportArmIsSet() const;
    void unsetsupportArm();
    void setSupportArm(const std::string& value);

    /// <summary>
    /// 表示当前市场镜像是否下架。 true：已下架 false：未下架
    /// </summary>

    std::string getIsOffshelved() const;
    bool isOffshelvedIsSet() const;
    void unsetisOffshelved();
    void setIsOffshelved(const std::string& value);


protected:
    std::string backupId_;
    bool backupIdIsSet_;
    std::string dataOrigin_;
    bool dataOriginIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string imageSize_;
    bool imageSizeIsSet_;
    std::string imageSourceType_;
    bool imageSourceTypeIsSet_;
    std::string imagetype_;
    bool imagetypeIsSet_;
    std::string isregistered_;
    bool isregisteredIsSet_;
    std::string originalimagename_;
    bool originalimagenameIsSet_;
    std::string osBit_;
    bool osBitIsSet_;
    std::string osType_;
    bool osTypeIsSet_;
    std::string osVersion_;
    bool osVersionIsSet_;
    std::string platform_;
    bool platformIsSet_;
    std::string productcode_;
    bool productcodeIsSet_;
    std::string supportDiskintensive_;
    bool supportDiskintensiveIsSet_;
    std::string supportHighperformance_;
    bool supportHighperformanceIsSet_;
    std::string supportKvm_;
    bool supportKvmIsSet_;
    std::string supportKvmGpuType_;
    bool supportKvmGpuTypeIsSet_;
    std::string supportKvmInfiniband_;
    bool supportKvmInfinibandIsSet_;
    std::string supportLargememory_;
    bool supportLargememoryIsSet_;
    std::string supportXen_;
    bool supportXenIsSet_;
    std::string supportXenGpuType_;
    bool supportXenGpuTypeIsSet_;
    std::string supportXenHana_;
    bool supportXenHanaIsSet_;
    std::string checksum_;
    bool checksumIsSet_;
    std::string containerFormat_;
    bool containerFormatIsSet_;
    std::string createdAt_;
    bool createdAtIsSet_;
    bool deleted_;
    bool deletedIsSet_;
    std::string deletedAt_;
    bool deletedAtIsSet_;
    std::string diskFormat_;
    bool diskFormatIsSet_;
    std::string file_;
    bool fileIsSet_;
    std::string id_;
    bool idIsSet_;
    int32_t minDisk_;
    bool minDiskIsSet_;
    int32_t minRam_;
    bool minRamIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string owner_;
    bool ownerIsSet_;
    bool protected_;
    bool protectedIsSet_;
    std::string schema_;
    bool schemaIsSet_;
    std::string self_;
    bool selfIsSet_;
    int64_t size_;
    bool sizeIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::vector<std::string> tags_;
    bool tagsIsSet_;
    std::string updatedAt_;
    bool updatedAtIsSet_;
    std::string virtualEnvType_;
    bool virtualEnvTypeIsSet_;
    int32_t virtualSize_;
    bool virtualSizeIsSet_;
    std::string visibility_;
    bool visibilityIsSet_;
    std::string supportFcInject_;
    bool supportFcInjectIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    std::string hwFirmwareType_;
    bool hwFirmwareTypeIsSet_;
    std::string supportArm_;
    bool supportArmIsSet_;
    std::string isOffshelved_;
    bool isOffshelvedIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IMS_V2_MODEL_GlanceShowImageResponseBody_H_
