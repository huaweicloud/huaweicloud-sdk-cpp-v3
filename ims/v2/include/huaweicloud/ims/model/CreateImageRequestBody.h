
#ifndef HUAWEICLOUD_SDK_IMS_V2_MODEL_CreateImageRequestBody_H_
#define HUAWEICLOUD_SDK_IMS_V2_MODEL_CreateImageRequestBody_H_

#include <huaweicloud/ims/ImsExport.h>

#include "huaweicloud/core/utils/ModelBase.h"
#include "huaweicloud/core/http/HttpResponse.h"

#include "huaweicloud/ims/model/TagKeyValue.h"
#include "huaweicloud/ims/model/CreateDataImage.h"
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
/// 创建镜像请求参数体
/// </summary>
class HUAWEICLOUD_IMS_EXPORT  CreateImageRequestBody
    : public ModelBase
{
public:
    CreateImageRequestBody();
    virtual ~CreateImageRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateImageRequestBody members

    /// <summary>
    /// 需要转换的数据盘信息，其中，当使用云服务器上的数据盘进行私有数据盘镜像创建时，该字段必选。 如果不是用于制作数据盘镜像，该字段默认为空。
    /// </summary>

    std::vector<CreateDataImage>& getDataImages();
    bool dataImagesIsSet() const;
    void unsetdataImages();
    void setDataImages(const std::vector<CreateDataImage>& value);

    /// <summary>
    /// 镜像描述信息。支持字母、数字、中文等，不支持回车、&lt;、 &gt;，长度不能超过1024个字符。默认为空。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 表示当前镜像所属的企业项目。取值为0或无该值，表示属于default企业项目。取值为UUID，表示属于该UUID对应的企业项目。
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// 新规范的镜像标签列表。默认为空。tags和image_tags只能使用一个。
    /// </summary>

    std::vector<TagKeyValue>& getImageTags();
    bool imageTagsIsSet() const;
    void unsetimageTags();
    void setImageTags(const std::vector<TagKeyValue>& value);

    /// <summary>
    /// 需要转换的云服务器ID。使用instance_id字段，从云服务器制作私有镜像时，该字段填写云服务器ID。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 镜像名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 镜像标签列表。默认为空。tags和image_tags只能使用一个。
    /// </summary>

    std::vector<std::string>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<std::string>& value);

    /// <summary>
    /// 表示镜像支持的最大内存，单位为MB。
    /// </summary>

    int32_t getMaxRam() const;
    bool maxRamIsSet() const;
    void unsetmaxRam();
    void setMaxRam(int32_t value);

    /// <summary>
    /// 表示镜像支持的最小内存，单位为MB，默认为0，表示不受限制。
    /// </summary>

    int32_t getMinRam() const;
    bool minRamIsSet() const;
    void unsetminRam();
    void setMinRam(int32_t value);

    /// <summary>
    /// 操作系统版本。 使用上传至OBS桶中的外部镜像文件制作镜像时生效。 当“is_quick_import”的值为“true”时，即使用镜像文件快速导入方式导入系统盘镜像，则该参数为必填参数。
    /// </summary>

    std::string getOsVersion() const;
    bool osVersionIsSet() const;
    void unsetosVersion();
    void setOsVersion(const std::string& value);

    /// <summary>
    /// OBS桶中外部镜像文件地址。 在使用OBS桶的外部镜像文件制作镜像时生效且为必选字段。格式为&lt;OBS桶名&gt;:&lt;OBS镜像文件名称&gt;。
    /// </summary>

    std::string getImageUrl() const;
    bool imageUrlIsSet() const;
    void unsetimageUrl();
    void setImageUrl(const std::string& value);

    /// <summary>
    /// 最小系统盘大小。 在使用OBS桶的外部镜像文件制作镜像时生效且为必选字段。取值为40～1024GB。
    /// </summary>

    int32_t getMinDisk() const;
    bool minDiskIsSet() const;
    void unsetminDisk();
    void setMinDisk(int32_t value);

    /// <summary>
    /// 是否自动配置。 取值为true或false。 如果需要后台自动配置，取值为true，否则为false。默认取值为false。
    /// </summary>

    bool isIsConfig() const;
    bool isConfigIsSet() const;
    void unsetisConfig();
    void setIsConfig(bool value);

    /// <summary>
    /// 创建加密镜像的用户主密钥，具体取值请参考《密钥管理服务用户指南》获取。
    /// </summary>

    std::string getCmkId() const;
    bool cmkIdIsSet() const;
    void unsetcmkId();
    void setCmkId(const std::string& value);

    /// <summary>
    /// 镜像的类型。 取值为ECS、BMS、FusionCompute、Ironic。默认使用“ECS”。 ECS/FusionCompute：表示是ECS服务器的镜像。 BMS/Ironic：表示是BMS服务器的镜像。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 是否使用镜像文件快速导入方式，导入系统盘镜像。 是，配置为true。 否，配置为false。 关于镜像文件快速导入的约束与限制请参见镜像文件快速导入。
    /// </summary>

    bool isIsQuickImport() const;
    bool isQuickImportIsSet() const;
    void unsetisQuickImport();
    void setIsQuickImport(bool value);

    /// <summary>
    /// 镜像的架构类型。取值包括： x86 arm 默认使用“x86”。 当架构类型为arm时，镜像引导方式将自动转为UEFI的引导方式。
    /// </summary>

    std::string getArchitecture() const;
    bool architectureIsSet() const;
    void unsetarchitecture();
    void setArchitecture(const std::string& value);

    /// <summary>
    /// 数据盘的卷ID。当数据盘创建系统盘镜像时，该参数必选
    /// </summary>

    std::string getVolumeId() const;
    bool volumeIdIsSet() const;
    void unsetvolumeId();
    void setVolumeId(const std::string& value);


protected:
    std::vector<CreateDataImage> dataImages_;
    bool dataImagesIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    std::vector<TagKeyValue> imageTags_;
    bool imageTagsIsSet_;
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::vector<std::string> tags_;
    bool tagsIsSet_;
    int32_t maxRam_;
    bool maxRamIsSet_;
    int32_t minRam_;
    bool minRamIsSet_;
    std::string osVersion_;
    bool osVersionIsSet_;
    std::string imageUrl_;
    bool imageUrlIsSet_;
    int32_t minDisk_;
    bool minDiskIsSet_;
    bool isConfig_;
    bool isConfigIsSet_;
    std::string cmkId_;
    bool cmkIdIsSet_;
    std::string type_;
    bool typeIsSet_;
    bool isQuickImport_;
    bool isQuickImportIsSet_;
    std::string architecture_;
    bool architectureIsSet_;
    std::string volumeId_;
    bool volumeIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IMS_V2_MODEL_CreateImageRequestBody_H_
