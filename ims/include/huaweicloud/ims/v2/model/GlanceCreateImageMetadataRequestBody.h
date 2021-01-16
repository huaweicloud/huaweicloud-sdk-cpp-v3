
#ifndef HUAWEICLOUD_SDK_IMS_V2_MODEL_GlanceCreateImageMetadataRequestBody_H_
#define HUAWEICLOUD_SDK_IMS_V2_MODEL_GlanceCreateImageMetadataRequestBody_H_

#include <huaweicloud/ims/v2/ImsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

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
/// 创建镜像请求体
/// </summary>
class HUAWEICLOUD_IMS_V2_EXPORT  GlanceCreateImageMetadataRequestBody
    : public ModelBase
{
public:
    GlanceCreateImageMetadataRequestBody();
    virtual ~GlanceCreateImageMetadataRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// GlanceCreateImageMetadataRequestBody members

    /// <summary>
    /// 镜像的操作系统具体版本,如果未指定__os_version，则默认设置为Other Linux(64 bit)，不保证该镜像能成功创建虚拟机以及通过该镜像创建的虚拟机能够正常使用。
    /// </summary>

    std::string getOsVersion() const;
    bool osVersionIsSet() const;
    void unsetosVersion();
    void setOsVersion(const std::string& value);

    /// <summary>
    /// 容器格式。默认取值为bare。
    /// </summary>

    std::string getContainerFormat() const;
    bool containerFormatIsSet() const;
    void unsetcontainerFormat();
    void setContainerFormat(const std::string& value);

    /// <summary>
    /// 镜像文件格式。目前支持vhd，zvhd、zvhd2、raw，qcow2。默认取值为vhd
    /// </summary>

    std::string getDiskFormat() const;
    bool diskFormatIsSet() const;
    void unsetdiskFormat();
    void setDiskFormat(const std::string& value);

    /// <summary>
    /// 镜像运行需要的最小磁盘，单位为GB 。必须大于镜像系统盘容量，否则创建云主机云服务器可能失败。
    /// </summary>

    int32_t getMinDisk() const;
    bool minDiskIsSet() const;
    void unsetminDisk();
    void setMinDisk(int32_t value);

    /// <summary>
    /// 镜像运行需要的最小内存，单位为MB。参数取值依据云主机云服务器的规格限制。默认取值为0。
    /// </summary>

    int32_t getMinRam() const;
    bool minRamIsSet() const;
    void unsetminRam();
    void setMinRam(int32_t value);

    /// <summary>
    /// 镜像名称，如果未指定name的取值，则默认为空，但是使用该镜像创建虚拟机会失败。名称的长度为1-255位。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 镜像是否被保护，保护后的镜像不可删除。默认取值为false。
    /// </summary>

    bool isProtected() const;
    bool protectedIsSet() const;
    void unsetprotected();
    void setProtected(bool value);

    /// <summary>
    /// 镜像标签列表。长度为1-255位。默认为空。
    /// </summary>

    std::vector<std::string>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<std::string>& value);

    /// <summary>
    /// 其他租户是否可见。默认取值为private。创建镜像元数据时，visibility取值只能为private。
    /// </summary>

    std::string getVisibility() const;
    bool visibilityIsSet() const;
    void unsetvisibility();
    void setVisibility(const std::string& value);


protected:
    std::string osVersion_;
    bool osVersionIsSet_;
    std::string containerFormat_;
    bool containerFormatIsSet_;
    std::string diskFormat_;
    bool diskFormatIsSet_;
    int32_t minDisk_;
    bool minDiskIsSet_;
    int32_t minRam_;
    bool minRamIsSet_;
    std::string name_;
    bool nameIsSet_;
    bool protected_;
    bool protectedIsSet_;
    std::vector<std::string> tags_;
    bool tagsIsSet_;
    std::string visibility_;
    bool visibilityIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IMS_V2_MODEL_GlanceCreateImageMetadataRequestBody_H_
