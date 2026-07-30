
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_VolumeMountRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_VolumeMountRequest_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**：实例的扩展存储配置 **约束限制**：最大数量为30。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  VolumeMountRequest
    : public ModelBase
{
public:
    VolumeMountRequest();
    virtual ~VolumeMountRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// VolumeMountRequest members

    /// <summary>
    /// **参数解释**：notebook支持的扩展存储类型，详见[[开发环境中如何选择存储](https://support.huaweicloud.com/usermanual-standard-modelarts/devtool-modelarts_0004.html#section7)](tag:hc)[[开发环境中如何选择存储](https://support.huaweicloud.com/intl/zh-cn/usermanual-standard-modelarts/devtool-modelarts_0004.html#section6)](tag:hk)[《用户指南》的“开发环境中如何选择存储”章节](tag:fcs,fcs-super) **约束限制**：不涉及 **默认取值**：不涉及。 **取值范围**：枚举类型，取值如下： - EVS：云硬盘 - OBS：对象存储服务 - OBSFS：并行文件系统（PFS） - EFS：弹性文件服务（SFS Turbo）
    /// </summary>

    std::string getCategory() const;
    bool categoryIsSet() const;
    void unsetcategory();
    void setCategory(const std::string& value);

    /// <summary>
    /// **参数解释**：资源所属 **参数约束**：不涉及。 **取值范围**：枚举类型，取值如下： - MANAGED：托管，即资源在服务上。 - DEDICATED：非托管，即资源在用户账号上，只有在category为EFS时支持。 **默认取值**：不涉及。
    /// </summary>

    std::string getOwnership() const;
    bool ownershipIsSet() const;
    void unsetownership();
    void setOwnership(const std::string& value);

    /// <summary>
    /// **参数解释**：EFS专属存储盘uri或OBS并行文件系统路径 - EFS：登录弹性文件服务控制台，在文件系统列表中，单击文件系统名称进入详情页。其中，“共享路径”即为此参数的参数值。 - OBS：并行文件系统命名格式为：obs://&lt;桶名&gt;/&lt;目录路径&gt;/。登录对象存储服务控制台，在并行文件系统列表中，文件系统名称为桶名。单击文件系统名称进入详情页，在文件栏选择特定目录后，单击右侧“更多/复制路径”，该路径即为目录路径。 **参数约束**：只有当category为EFS或OBS或OBSFS，同时ownership为DEDICATED时必填，最大长度1024字符
    /// </summary>

    std::string getUri() const;
    bool uriIsSet() const;
    void unseturi();
    void setUri(const std::string& value);

    /// <summary>
    /// **参数解释**：EFS专属存储盘ID，参数值获取方式如下：登录弹性文件服务控制台，在文件系统列表中，单击文件系统名称进入详情页。其中，“ID”即为此参数的参数值。 **参数约束**：只有当category为EFS，同时ownership为DEDICATED时必填。必须符合 UUID 格式（如 280a8bd5-03e2-4a5c-bea1-83d81e75bc53）。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释**：在Notebook实例中挂载的路径 **参数约束**：最大长度 256 字符
    /// </summary>

    std::string getMountPath() const;
    bool mountPathIsSet() const;
    void unsetmountPath();
    void setMountPath(const std::string& value);

    /// <summary>
    /// **参数解释**：扩展存储挂载目录是否只读。默认值为false，可读写 **参数约束**：不涉及
    /// </summary>

    bool isReadOnly() const;
    bool readOnlyIsSet() const;
    void unsetreadOnly();
    void setReadOnly(bool value);

    /// <summary>
    /// **参数解释**：DEW存储的用户AKSK凭据名称 **参数约束**：当category为OBS时必填，仅支持大小写字母、数字、中划线、下划线，长度 1-64 字符
    /// </summary>

    std::string getDewSecretName() const;
    bool dewSecretNameIsSet() const;
    void unsetdewSecretName();
    void setDewSecretName(const std::string& value);

    /// <summary>
    /// **参数解释**：EVS云硬盘存储容量，单位GB。 **约束限制**：category为EVS时有效。 **取值范围**：不涉及。 **默认取值**：5。
    /// </summary>

    int32_t getCapacity() const;
    bool capacityIsSet() const;
    void unsetcapacity();
    void setCapacity(int32_t value);


protected:
    std::string category_;
    bool categoryIsSet_;
    std::string ownership_;
    bool ownershipIsSet_;
    std::string uri_;
    bool uriIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string mountPath_;
    bool mountPathIsSet_;
    bool readOnly_;
    bool readOnlyIsSet_;
    std::string dewSecretName_;
    bool dewSecretNameIsSet_;
    int32_t capacity_;
    bool capacityIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_VolumeMountRequest_H_
