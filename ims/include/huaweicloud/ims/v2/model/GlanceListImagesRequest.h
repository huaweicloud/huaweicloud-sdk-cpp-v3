
#ifndef HUAWEICLOUD_SDK_IMS_V2_MODEL_GlanceListImagesRequest_H_
#define HUAWEICLOUD_SDK_IMS_V2_MODEL_GlanceListImagesRequest_H_

#include <huaweicloud/ims/v2/ImsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_IMS_V2_EXPORT  GlanceListImagesRequest
    : public ModelBase
{
public:
    GlanceListImagesRequest();
    virtual ~GlanceListImagesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// GlanceListImagesRequest members

    /// <summary>
    /// 镜像类型，目前支持以下类型：公共镜像：gold私有镜像：private共享镜像：shared 市场镜像：market
    /// </summary>

    std::string getImagetype() const;
    bool imagetypeIsSet() const;
    void unsetimagetype();
    void setImagetype(const std::string& value);

    /// <summary>
    /// 镜像是否是受保护，取值为true/false。一般查询公共镜像时候取值为true，查询私有镜像可以不指定。
    /// </summary>

    bool isIsregistered() const;
    bool isregisteredIsSet() const;
    void unsetisregistered();
    void setIsregistered(bool value);

    /// <summary>
    /// 操作系统位数，一般取值为32或者64
    /// </summary>

    std::string getOsBit() const;
    bool osBitIsSet() const;
    void unsetosBit();
    void setOsBit(const std::string& value);

    /// <summary>
    /// 镜像系统类型，取值为Linux，Windows，Other
    /// </summary>

    std::string getOsType() const;
    bool osTypeIsSet() const;
    void unsetosType();
    void setOsType(const std::string& value);

    /// <summary>
    /// 镜像平台分类，取值为Windows，Ubuntu，RedHat，SUSE，CentOS，Debian，OpenSUSE, Oracle Linux，Fedora，Other，CoreOS和EulerOS
    /// </summary>

    std::string getPlatform() const;
    bool platformIsSet() const;
    void unsetplatform();
    void setPlatform(const std::string& value);

    /// <summary>
    /// 表示该镜像支持密集存储。如果镜像支持密集存储性能，则值为true，否则无需增加该属性
    /// </summary>

    std::string getSupportDiskintensive() const;
    bool supportDiskintensiveIsSet() const;
    void unsetsupportDiskintensive();
    void setSupportDiskintensive(const std::string& value);

    /// <summary>
    /// 表示该镜像支持高计算性能。如果镜像支持高计算性能，则值为true，否则无需增加该属性
    /// </summary>

    std::string getSupportHighperformance() const;
    bool supportHighperformanceIsSet() const;
    void unsetsupportHighperformance();
    void setSupportHighperformance(const std::string& value);

    /// <summary>
    /// 如果镜像支持KVM，取值为true，否则无需增加该属性
    /// </summary>

    std::string getSupportKvm() const;
    bool supportKvmIsSet() const;
    void unsetsupportKvm();
    void setSupportKvm(const std::string& value);

    /// <summary>
    /// 表示该镜像是支持KVM虚拟化平台下的GPU类型,如果不支持KVM虚拟机下GPU类型，无需添加该属性。该属性与“__support_xen”和“__support_kvm”属性不共存
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
    /// 如果镜像支持XEN，取值为true，否则无需增加该属性
    /// </summary>

    std::string getSupportXen() const;
    bool supportXenIsSet() const;
    void unsetsupportXen();
    void setSupportXen(const std::string& value);

    /// <summary>
    /// 表示该镜像是支持XEN虚拟化平台下的GPU优化类型,如果不支持XEN虚拟化下GPU类型，无需添加该属性。该属性与“__support_xen”和“__support_kvm”属性不共存
    /// </summary>

    std::string getSupportXenGpuType() const;
    bool supportXenGpuTypeIsSet() const;
    void unsetsupportXenGpuType();
    void setSupportXenGpuType(const std::string& value);

    /// <summary>
    /// 如果镜像支持XEN虚拟化下HANA类型，取值为true。否则，无需添加该属性。该属性与“__support_xen”和“__support_kvm”属性不共存
    /// </summary>

    std::string getSupportXenHana() const;
    bool supportXenHanaIsSet() const;
    void unsetsupportXenHana();
    void setSupportXenHana(const std::string& value);

    /// <summary>
    /// 容器类型
    /// </summary>

    std::string getContainerFormat() const;
    bool containerFormatIsSet() const;
    void unsetcontainerFormat();
    void setContainerFormat(const std::string& value);

    /// <summary>
    /// 镜像格式，目前支持vhd，zvhd、raw，qcow2。默认值是vhd
    /// </summary>

    std::string getDiskFormat() const;
    bool diskFormatIsSet() const;
    void unsetdiskFormat();
    void setDiskFormat(const std::string& value);

    /// <summary>
    /// 镜像ID
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 用于分页，表示查询几条镜像记录，取值为整数，默认返回25条镜像记录
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 用于分页，表示从哪个镜像开始查询，取值为镜像ID。
    /// </summary>

    std::string getMarker() const;
    bool markerIsSet() const;
    void unsetmarker();
    void setMarker(const std::string& value);

    /// <summary>
    /// 成员状态。目前取值有accepted、rejected、pending。accepted表示已经接受共享的镜像，rejected表示已经拒绝了其他用户共享的镜像，pending表示需要确认的其他用户的共享镜像。需要在查询时，设置“visibility”参数为“shared”
    /// </summary>

    std::string getMemberStatus() const;
    bool memberStatusIsSet() const;
    void unsetmemberStatus();
    void setMemberStatus(const std::string& value);

    /// <summary>
    /// 镜像运行需要的最小磁盘，单位为GB 。取值为40～1024GB。取值为1～1024GB。取值为40～255GB
    /// </summary>

    int32_t getMinDisk() const;
    bool minDiskIsSet() const;
    void unsetminDisk();
    void setMinDisk(int32_t value);

    /// <summary>
    /// 镜像运行需要的最小内存，单位为MB。参数取值依据弹性云服务器的规格限制，一般设置为0。
    /// </summary>

    int32_t getMinRam() const;
    bool minRamIsSet() const;
    void unsetminRam();
    void setMinRam(int32_t value);

    /// <summary>
    /// 镜像名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 镜像属于哪个租户
    /// </summary>

    std::string getOwner() const;
    bool ownerIsSet() const;
    void unsetowner();
    void setOwner(const std::string& value);

    /// <summary>
    /// 镜像是否是受保护，查询公共镜像时候取值为True，查询私有镜像可以不指定。
    /// </summary>

    bool isProtected() const;
    bool protectedIsSet() const;
    void unsetprotected();
    void setProtected(bool value);

    /// <summary>
    /// 用于排序，表示升序还是降序，取值为asc和desc。与sort_key一起组合使用，默认为降序desc
    /// </summary>

    std::string getSortDir() const;
    bool sortDirIsSet() const;
    void unsetsortDir();
    void setSortDir(const std::string& value);

    /// <summary>
    /// 用于排序，表示按照哪个字段排序。取值为镜像属性name，container_format，disk_format，status，id，size字段，默认为创建时间。
    /// </summary>

    std::string getSortKey() const;
    bool sortKeyIsSet() const;
    void unsetsortKey();
    void setSortKey(const std::string& value);

    /// <summary>
    /// 镜像状态。取值如下：queued：表示镜像元数据已经创建成功，等待上传镜像文件。saving：表示镜像正在上传文件到后端存储。deleted：表示镜像已经删除。killed：表示镜像上传错误。active：表示镜像可以正常使用
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 标签，用户为镜像增加自定义标签后可以通过该参数过滤查询
    /// </summary>

    std::string getTag() const;
    bool tagIsSet() const;
    void unsettag();
    void setTag(const std::string& value);

    /// <summary>
    /// 是否被其他租户可见，取值如下： public：公共镜像 private：私有镜像 shared：共享镜像
    /// </summary>

    std::string getVisibility() const;
    bool visibilityIsSet() const;
    void unsetvisibility();
    void setVisibility(const std::string& value);

    /// <summary>
    /// 镜像创建时间。支持按照时间点过滤查询，取值格式为“ 操作符:UTC时间”。 其中操作符支持如下几种： gt：大于 gte：大于等于 lt：小于 lte：小于等于 eq：等于 neq：不等于 时间格式支持：yyyy-MM-ddThh:mm:ssZ或者yyyy-MM-dd hh:mm:ss 例如，查询创建时间在2018-10-28 10:00:00之前的镜像，可以通过如下条件过滤： created_at&#x3D;gt:2018-10-28T10:00:00Z
    /// </summary>

    std::string getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const std::string& value);

    /// <summary>
    /// 镜像修改时间。支持按照时间点过滤查询，取值格式为 “ 操作符:UTC时间”。 其中操作符支持如下几种： gt：大于 gte：大于等于 lt：小于 lte：小于等于 eq：等于 neq：不等于 时间格式支持：yyyy-MM-ddThh:mm:ssZ或者yyyy-MM-dd hh:mm:ss 例如，查询修改时间在2018-10-28 10:00:00之前的镜像，可以通过如下条件过滤： updated_at&#x3D;gt:2018-10-28T10:00:00Z
    /// </summary>

    std::string getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetupdatedAt();
    void setUpdatedAt(const std::string& value);


protected:
    std::string imagetype_;
    bool imagetypeIsSet_;
    bool isregistered_;
    bool isregisteredIsSet_;
    std::string osBit_;
    bool osBitIsSet_;
    std::string osType_;
    bool osTypeIsSet_;
    std::string platform_;
    bool platformIsSet_;
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
    std::string containerFormat_;
    bool containerFormatIsSet_;
    std::string diskFormat_;
    bool diskFormatIsSet_;
    std::string id_;
    bool idIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    std::string marker_;
    bool markerIsSet_;
    std::string memberStatus_;
    bool memberStatusIsSet_;
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
    std::string sortDir_;
    bool sortDirIsSet_;
    std::string sortKey_;
    bool sortKeyIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string tag_;
    bool tagIsSet_;
    std::string visibility_;
    bool visibilityIsSet_;
    std::string createdAt_;
    bool createdAtIsSet_;
    std::string updatedAt_;
    bool updatedAtIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    GlanceListImagesRequest& dereference_from_shared_ptr(std::shared_ptr<GlanceListImagesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IMS_V2_MODEL_GlanceListImagesRequest_H_
