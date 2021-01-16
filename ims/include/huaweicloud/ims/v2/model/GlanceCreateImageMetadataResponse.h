
#ifndef HUAWEICLOUD_SDK_IMS_V2_MODEL_GlanceCreateImageMetadataResponse_H_
#define HUAWEICLOUD_SDK_IMS_V2_MODEL_GlanceCreateImageMetadataResponse_H_

#include <huaweicloud/ims/v2/ImsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
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
/// Response Object
/// </summary>
class HUAWEICLOUD_IMS_V2_EXPORT  GlanceCreateImageMetadataResponse
    : public ModelBase, public HttpResponse
{
public:
    GlanceCreateImageMetadataResponse();
    virtual ~GlanceCreateImageMetadataResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// GlanceCreateImageMetadataResponse members

    /// <summary>
    /// 其他租户是否可见。取值为private。
    /// </summary>

    std::string getVisibility() const;
    bool visibilityIsSet() const;
    void unsetvisibility();
    void setVisibility(const std::string& value);

    /// <summary>
    /// 镜像名称，如果未指定name的取值，则默认为空，但是使用该镜像创建虚拟机会失败。名称的长度为1～128位。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 镜像是否被保护，保护后的镜像不可删除。取值为false
    /// </summary>

    bool isProtected() const;
    bool protectedIsSet() const;
    void unsetprotected();
    void setProtected(bool value);

    /// <summary>
    /// 容器格式。取值为bare。
    /// </summary>

    std::string getContainerFormat() const;
    bool containerFormatIsSet() const;
    void unsetcontainerFormat();
    void setContainerFormat(const std::string& value);

    /// <summary>
    /// 镜像文件格式。目前支持vhd、zvhd、raw、qcow2。默认值是vhd。
    /// </summary>

    std::string getDiskFormat() const;
    bool diskFormatIsSet() const;
    void unsetdiskFormat();
    void setDiskFormat(const std::string& value);

    /// <summary>
    /// 镜像标签列表。长度为1～255位。
    /// </summary>

    std::vector<std::string>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<std::string>& value);

    /// <summary>
    /// 镜像运行最小内存，单位为MB。取值参考ECS规格限制，一般设置为0。云服务器的规格限制，请参见规格清单。
    /// </summary>

    int32_t getMinRam() const;
    bool minRamIsSet() const;
    void unsetminRam();
    void setMinRam(int32_t value);

    /// <summary>
    /// 镜像运行需要的最小磁盘容量，单位为GB 。取值为40～1024GB。必须大于镜像系统盘容量，否则创建云主机云服务器可能失败。
    /// </summary>

    int32_t getMinDisk() const;
    bool minDiskIsSet() const;
    void unsetminDisk();
    void setMinDisk(int32_t value);

    /// <summary>
    /// 镜像状态。取值如下：queued：表示镜像元数据已经创建成功，等待上传镜像文件。saving：表示镜像正在上传文件到后端存储。deleted：表示镜像已经删除。killed：表示镜像上传错误。active：表示镜像可以正常使用。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 创建时间。格式为UTC时间。
    /// </summary>

    std::string getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const std::string& value);

    /// <summary>
    /// 更新时间。格式为UTC时间。
    /// </summary>

    std::string getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetupdatedAt();
    void setUpdatedAt(const std::string& value);

    /// <summary>
    /// 本镜像链接。
    /// </summary>

    std::string getSelf() const;
    bool selfIsSet() const;
    void unsetself();
    void setSelf(const std::string& value);

    /// <summary>
    /// 镜像ID，用户调用创建镜像接口后，需保存该镜像的ID，用来调用上传镜像接口完成镜像上传。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 上传下载镜像文件的地址链接。
    /// </summary>

    std::string getFile() const;
    bool fileIsSet() const;
    void unsetfile();
    void setFile(const std::string& value);

    /// <summary>
    /// 视图链接。
    /// </summary>

    std::string getSchema() const;
    bool schemaIsSet() const;
    void unsetschema();
    void setSchema(const std::string& value);

    /// <summary>
    /// 镜像后端存储类型，目前支持uds。
    /// </summary>

    std::string getImageSourceType() const;
    bool imageSourceTypeIsSet() const;
    void unsetimageSourceType();
    void setImageSourceType(const std::string& value);

    /// <summary>
    /// 镜像大小。单位为字节。
    /// </summary>

    std::string getImageSize() const;
    bool imageSizeIsSet() const;
    void unsetimageSize();
    void setImageSize(const std::string& value);

    /// <summary>
    /// 镜像是否注册。只有已注册的镜像才能在Portal界面上查询到。取值为true。
    /// </summary>

    std::string getIsregistered() const;
    bool isregisteredIsSet() const;
    void unsetisregistered();
    void setIsregistered(const std::string& value);

    /// <summary>
    /// 镜像的操作系统具体版本。
    /// </summary>

    std::string getOsVersion() const;
    bool osVersionIsSet() const;
    void unsetosVersion();
    void setOsVersion(const std::string& value);

    /// <summary>
    /// 镜像的操作系统类型，取值由__os_version确定。支持Windows、Linux和other。
    /// </summary>

    std::string getOsType() const;
    bool osTypeIsSet() const;
    void unsetosType();
    void setOsType(const std::string& value);

    /// <summary>
    /// 表示镜像支持的操作系统平台。取值由__os_version确定
    /// </summary>

    std::string getPlatform() const;
    bool platformIsSet() const;
    void unsetplatform();
    void setPlatform(const std::string& value);

    /// <summary>
    /// 表示操作系统位数。取值由__os_version确定，取值为32或64。
    /// </summary>

    std::string getOsBit() const;
    bool osBitIsSet() const;
    void unsetosBit();
    void setOsBit(const std::string& value);

    /// <summary>
    /// 镜像类型。取值为private，表示私有镜像。
    /// </summary>

    std::string getImagetype() const;
    bool imagetypeIsSet() const;
    void unsetimagetype();
    void setImagetype(const std::string& value);

    /// <summary>
    /// 平台类型。镜像使用环境类型：FusionCompute、Ironic、DataImage。如果是云主机云服务器镜像，则取值为FusionCompute。如果是数据卷镜像则取值是DataImage。如果是物理机裸金属服务器镜像，则取值是Ironic。
    /// </summary>

    std::string getVirtualEnvType() const;
    bool virtualEnvTypeIsSet() const;
    void unsetvirtualEnvType();
    void setVirtualEnvType(const std::string& value);

    /// <summary>
    /// 镜像所属项目ID。
    /// </summary>

    std::string getOwner() const;
    bool ownerIsSet() const;
    void unsetowner();
    void setOwner(const std::string& value);

    /// <summary>
    /// 镜像虚拟大小。单位为字节。
    /// </summary>

    int32_t getVirtualSize() const;
    bool virtualSizeIsSet() const;
    void unsetvirtualSize();
    void setVirtualSize(int32_t value);

    /// <summary>
    /// 镜像属性的集合，不表示具体的镜像属性
    /// </summary>

    Object getProperties() const;
    bool propertiesIsSet() const;
    void unsetproperties();
    void setProperties(const Object& value);


protected:
    std::string visibility_;
    bool visibilityIsSet_;
    std::string name_;
    bool nameIsSet_;
    bool protected_;
    bool protectedIsSet_;
    std::string containerFormat_;
    bool containerFormatIsSet_;
    std::string diskFormat_;
    bool diskFormatIsSet_;
    std::vector<std::string> tags_;
    bool tagsIsSet_;
    int32_t minRam_;
    bool minRamIsSet_;
    int32_t minDisk_;
    bool minDiskIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string createdAt_;
    bool createdAtIsSet_;
    std::string updatedAt_;
    bool updatedAtIsSet_;
    std::string self_;
    bool selfIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string file_;
    bool fileIsSet_;
    std::string schema_;
    bool schemaIsSet_;
    std::string imageSourceType_;
    bool imageSourceTypeIsSet_;
    std::string imageSize_;
    bool imageSizeIsSet_;
    std::string isregistered_;
    bool isregisteredIsSet_;
    std::string osVersion_;
    bool osVersionIsSet_;
    std::string osType_;
    bool osTypeIsSet_;
    std::string platform_;
    bool platformIsSet_;
    std::string osBit_;
    bool osBitIsSet_;
    std::string imagetype_;
    bool imagetypeIsSet_;
    std::string virtualEnvType_;
    bool virtualEnvTypeIsSet_;
    std::string owner_;
    bool ownerIsSet_;
    int32_t virtualSize_;
    bool virtualSizeIsSet_;
    Object properties_;
    bool propertiesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IMS_V2_MODEL_GlanceCreateImageMetadataResponse_H_
