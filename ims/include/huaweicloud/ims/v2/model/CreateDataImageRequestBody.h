
#ifndef HUAWEICLOUD_SDK_IMS_V2_MODEL_CreateDataImageRequestBody_H_
#define HUAWEICLOUD_SDK_IMS_V2_MODEL_CreateDataImageRequestBody_H_

#include <huaweicloud/ims/v2/ImsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/ims/v2/model/ImageTag.h>
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
class HUAWEICLOUD_IMS_V2_EXPORT  CreateDataImageRequestBody
    : public ModelBase
{
public:
    CreateDataImageRequestBody();
    virtual ~CreateDataImageRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateDataImageRequestBody members

    /// <summary>
    /// 创建加密镜像的用户主密钥，具体取值请参考《密钥管理服务用户指南》获取。
    /// </summary>

    std::string getCmkId() const;
    bool cmkIdIsSet() const;
    void unsetcmkId();
    void setCmkId(const std::string& value);

    /// <summary>
    /// 镜像描述信息。_description参数说明请参考镜像属性。支持字母、数字、中文等，不支持回车、&lt;、 &gt;，长度不能超过1024个字符。默认为空。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 表示当前镜像所属的企业项目。取值为0或无该值，表示属于default企业项目；取值为UUID，表示属于该UUID对应的企业项目。
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// 新规范的镜像标签列表。默认为空。 tags和image_tags只能使用一个。
    /// </summary>

    std::vector<ImageTag>& getImageTags();
    bool imageTagsIsSet() const;
    void unsetimageTags();
    void setImageTags(const std::vector<ImageTag>& value);

    /// <summary>
    /// OBS桶中外部镜像文件地址。格式为&lt;OBS桶名&gt;:&lt;OBS镜像文件名称&gt;。 此处的OBS桶和镜像文件的存储类别必须是OBS标准存储。
    /// </summary>

    std::string getImageUrl() const;
    bool imageUrlIsSet() const;
    void unsetimageUrl();
    void setImageUrl(const std::string& value);

    /// <summary>
    /// 最小数据盘大小。取值范围40-2048GB。
    /// </summary>

    int32_t getMinDisk() const;
    bool minDiskIsSet() const;
    void unsetminDisk();
    void setMinDisk(int32_t value);

    /// <summary>
    /// 镜像名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 操作系统类型。只能是Windows、Linux二者之一，默认Linux。
    /// </summary>

    std::string getOsType() const;
    bool osTypeIsSet() const;
    void unsetosType();
    void setOsType(const std::string& value);

    /// <summary>
    /// 镜像标签列表。默认为空。 tags和image_tags只能使用一个。
    /// </summary>

    std::vector<std::string>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<std::string>& value);


protected:
    std::string cmkId_;
    bool cmkIdIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    std::vector<ImageTag> imageTags_;
    bool imageTagsIsSet_;
    std::string imageUrl_;
    bool imageUrlIsSet_;
    int32_t minDisk_;
    bool minDiskIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string osType_;
    bool osTypeIsSet_;
    std::vector<std::string> tags_;
    bool tagsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IMS_V2_MODEL_CreateDataImageRequestBody_H_
