
#ifndef HUAWEICLOUD_SDK_IMS_V2_MODEL_QuickImportImageByFileRequestBody_H_
#define HUAWEICLOUD_SDK_IMS_V2_MODEL_QuickImportImageByFileRequestBody_H_


#include <huaweicloud/ims/v2/ImsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>
#include <huaweicloud/ims/v2/model/ResourceTag.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 快速通道创建镜像的请求体
/// </summary>
class HUAWEICLOUD_IMS_V2_EXPORT  QuickImportImageByFileRequestBody
    : public ModelBase
{
public:
    QuickImportImageByFileRequestBody();
    virtual ~QuickImportImageByFileRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// QuickImportImageByFileRequestBody members

    /// <summary>
    /// 镜像名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 镜像描述信息。_description参数说明请参考镜像属性。支持字母、数字、中文等，不支持回车、&lt;、 &gt;，长度不能超过1024个字符。默认为空。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 操作系统版本。使用上传至OBS桶中的外部镜像文件制作镜像时生效
    /// </summary>

    std::string getOsVersion() const;
    bool osVersionIsSet() const;
    void unsetosVersion();
    void setOsVersion(const std::string& value);

    /// <summary>
    /// OBS桶中外部镜像文件地址。在使用OBS桶的外部镜像文件制作镜像时生效且为必选字段。格式为&lt;OBS桶名&gt;:&lt;OBS镜像文件名称&gt;。注意：此处的OBS桶和镜像文件的存储类别必须是OBS标准存储。
    /// </summary>

    std::string getImageUrl() const;
    bool imageUrlIsSet() const;
    void unsetimageUrl();
    void setImageUrl(const std::string& value);

    /// <summary>
    /// 最小系统盘大小。在使用OBS桶的外部镜像文件制作镜像时生效且为必选字段。取值为1至1024GB。
    /// </summary>

    int32_t getMinDisk() const;
    bool minDiskIsSet() const;
    void unsetminDisk();
    void setMinDisk(int32_t value);

    /// <summary>
    /// 操作系统使用的许可证类型。取值范围： platform：华为云官方许可证 byol：自带许可证（Bring Your Own License） 目前仅Windows操作系统支持设置该参数。
    /// </summary>

    std::string getLicenseType() const;
    bool licenseTypeIsSet() const;
    void unsetlicenseType();
    void setLicenseType(const std::string& value);

    /// <summary>
    /// 镜像标签列表。默认为空。 tags和image_tags只能使用一个。
    /// </summary>

    std::vector<std::string>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<std::string>& value);

    /// <summary>
    /// 制作的镜像类型。系统盘镜像为ECS/BMS，数据盘镜像为DataImage. 制作数据盘镜像时该参数必选.
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 表示当前镜像所属的企业项目。 取值为0或无该值，表示属于default企业项目。 取值为UUID，表示属于该UUID对应的企业项目。 关于企业项目ID的获取及企业项目特性的详细信息，请参考《企业管理用户指南》。
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// 镜像的架构类型。取值包括： x86 arm 默认使用“x86”。
    /// </summary>

    std::string getArchitecture() const;
    bool architectureIsSet() const;
    void unsetarchitecture();
    void setArchitecture(const std::string& value);

    /// <summary>
    /// 云主机云服务器的启动方式。目前支持： bios：表示bios引导启动。 uefi：表示uefi引导启动。
    /// </summary>

    std::string getHwFirmwareType() const;
    bool hwFirmwareTypeIsSet() const;
    void unsethwFirmwareType();
    void setHwFirmwareType(const std::string& value);

    /// <summary>
    /// 操作系统版本。 创建数据盘镜像时该参数取值为Linux或Windows，默认Linux。
    /// </summary>

    std::string getOsType() const;
    bool osTypeIsSet() const;
    void unsetosType();
    void setOsType(const std::string& value);

    /// <summary>
    /// 新规范的镜像标签列表。默认为空。 tags和image_tags只能使用一个。
    /// </summary>

    std::vector<ResourceTag>& getImageTags();
    bool imageTagsIsSet() const;
    void unsetimageTags();
    void setImageTags(const std::vector<ResourceTag>& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string osVersion_;
    bool osVersionIsSet_;
    std::string imageUrl_;
    bool imageUrlIsSet_;
    int32_t minDisk_;
    bool minDiskIsSet_;
    std::string licenseType_;
    bool licenseTypeIsSet_;
    std::vector<std::string> tags_;
    bool tagsIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    std::string architecture_;
    bool architectureIsSet_;
    std::string hwFirmwareType_;
    bool hwFirmwareTypeIsSet_;
    std::string osType_;
    bool osTypeIsSet_;
    std::vector<ResourceTag> imageTags_;
    bool imageTagsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IMS_V2_MODEL_QuickImportImageByFileRequestBody_H_
