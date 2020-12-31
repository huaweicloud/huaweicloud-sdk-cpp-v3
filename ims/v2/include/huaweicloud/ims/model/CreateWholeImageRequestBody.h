
#ifndef HUAWEICLOUD_SDK_IMS_V2_MODEL_CreateWholeImageRequestBody_H_
#define HUAWEICLOUD_SDK_IMS_V2_MODEL_CreateWholeImageRequestBody_H_

#include <huaweicloud/ims/ImsExport.h>

#include "huaweicloud/core/utils/ModelBase.h"
#include "huaweicloud/core/http/HttpResponse.h"

#include "huaweicloud/ims/model/TagKeyValue.h"
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
/// 
/// </summary>
class HUAWEICLOUD_IMS_EXPORT  CreateWholeImageRequestBody
    : public ModelBase
{
public:
    CreateWholeImageRequestBody();
    virtual ~CreateWholeImageRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateWholeImageRequestBody members

    /// <summary>
    /// 镜像描述信息。 支持字母、数字、中文等，不支持回车、&lt;、 &gt;，长度不能超过1024个字符。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 表示当前镜像所属的企业项目。取值为0或无该值，表示属于default企业项目。取值为UUID，表示属于该UUID对应的企业项目。关于企业项目ID的获取及企业项目特性的详细信息，请参考《企业管理用户指南》。
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
    /// 弹性云服务器ID。使用弹性云服务器制作整机镜像时使用此参数。 如果使用备份创建整机镜像，该参数应换成backup_id
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 镜像名称。 名称的首尾字母不能为空格。 名称的长度至为1～128位。 名称包含以下4种字符： 大写字母 小写字母 数字 特殊字符包含-、.、_、空格和中文。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 镜像标签列表。tags和image_tags只能使用一个。
    /// </summary>

    std::vector<std::string>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<std::string>& value);

    /// <summary>
    /// 使用云服务器备份创建整机镜像使用此参数。 如果使用ECS创建整机镜像，则该参数应传为instance_id
    /// </summary>

    std::string getBackupId() const;
    bool backupIdIsSet() const;
    void unsetbackupId();
    void setBackupId(const std::string& value);

    /// <summary>
    /// 使用备份创建整机镜像时，该字段区分是CBR服务的备份还是CSBS服务的备份，取值为：CBR/CSBS。 使用ECS创建整机镜像时，该字段不填
    /// </summary>

    std::string getWholeImageType() const;
    bool wholeImageTypeIsSet() const;
    void unsetwholeImageType();
    void setWholeImageType(const std::string& value);

    /// <summary>
    /// 表示镜像支持的最大内存，单位为MB，默认不设置。
    /// </summary>

    int32_t getMaxRam() const;
    bool maxRamIsSet() const;
    void unsetmaxRam();
    void setMaxRam(int32_t value);

    /// <summary>
    /// 表示镜像支持的最小内存，单位为MB，默认为0。
    /// </summary>

    int32_t getMinRam() const;
    bool minRamIsSet() const;
    void unsetminRam();
    void setMinRam(int32_t value);

    /// <summary>
    /// 表示云服务器待加入的或已加入的存储库的ID。 使用云服务器创建整机镜像的过程为：先创建一个备份，再将备份创建为整机镜像。如果这个备份为CBR，vault_id为必填项；如果备份为CSBS，vault_id参数可不填。
    /// </summary>

    std::string getVaultId() const;
    bool vaultIdIsSet() const;
    void unsetvaultId();
    void setVaultId(const std::string& value);


protected:
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
    std::string backupId_;
    bool backupIdIsSet_;
    std::string wholeImageType_;
    bool wholeImageTypeIsSet_;
    int32_t maxRam_;
    bool maxRamIsSet_;
    int32_t minRam_;
    bool minRamIsSet_;
    std::string vaultId_;
    bool vaultIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IMS_V2_MODEL_CreateWholeImageRequestBody_H_
