
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_VolumeRes_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_VolumeRes_H_


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
/// **参数解释**：实例存储信息。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  VolumeRes
    : public ModelBase
{
public:
    VolumeRes();
    virtual ~VolumeRes();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// VolumeRes members

    /// <summary>
    /// **参数解释**：存储容量。 **取值范围**：EVS默认5G，EFS默认50G，最大限制4096G。
    /// </summary>

    int32_t getCapacity() const;
    bool capacityIsSet() const;
    void unsetcapacity();
    void setCapacity(int32_t value);

    /// <summary>
    /// **参数解释**：支持的存储类型。不同存储类型的差异，详见[[开发环境中如何选择存储](https://support.huaweicloud.com/usermanual-standard-modelarts/devtool-modelarts_0004.html#section6)](tag:hc)[[开发环境中如何选择存储](https://support.huaweicloud.com/intl/zh-cn/usermanual-standard-modelarts/devtool-modelarts_0004.html#section5)](tag:hk)[《用户指南》的“开发环境中如何选择存储”章节](tag:fcs,fcs-super)。 **取值范围**：枚举类型，取值如下： - SFS：弹性文件服务 - EVS：云硬盘 - OBS：对象存储服务 - OBSFS：并行文件系统 - EFS：弹性文件服务（SFS Turbo）
    /// </summary>

    std::string getCategory() const;
    bool categoryIsSet() const;
    void unsetcategory();
    void setCategory(const std::string& value);

    /// <summary>
    /// **参数解释**：存储挂载至Notebook实例的目录，当前固定在/home/ma-user/work/下。 **取值范围**：不涉及。
    /// </summary>

    std::string getMountPath() const;
    bool mountPathIsSet() const;
    void unsetmountPath();
    void setMountPath(const std::string& value);

    /// <summary>
    /// **参数解释**：资源所属。 **取值范围**：枚举类型，取值如下： - MANAGED：托管，即资源在服务上。 - DEDICATED：非托管，即资源在用户账号上，只有在category为EFS时支持。
    /// </summary>

    std::string getOwnership() const;
    bool ownershipIsSet() const;
    void unsetownership();
    void setOwnership(const std::string& value);

    /// <summary>
    /// **参数解释**：EVS扩容状态，扩容时的状态为RESIZING，此时实例可以正常使用。 **取值范围**：不涉及。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// **参数解释**：EFS专属存储盘ID或OBS存储ID，只有作为扩展存储时返回。 **取值范围**：不涉及。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释**：扩展存储挂载目录是否只读。 **取值范围**：不涉及。
    /// </summary>

    bool isReadOnly() const;
    bool readOnlyIsSet() const;
    void unsetreadOnly();
    void setReadOnly(bool value);

    /// <summary>
    /// **参数解释**：DEW存储的用户AKSK凭据名称。 **取值范围**：不涉及。
    /// </summary>

    std::string getDewSecretName() const;
    bool dewSecretNameIsSet() const;
    void unsetdewSecretName();
    void setDewSecretName(const std::string& value);

    /// <summary>
    /// **参数解释**：规格包含的evs时，evs存储的sku编码。 **取值范围**：不涉及。
    /// </summary>

    std::string getEvsSkuCode() const;
    bool evsSkuCodeIsSet() const;
    void unsetevsSkuCode();
    void setEvsSkuCode(const std::string& value);

    /// <summary>
    /// **参数解释**：只有当category为EFS或OBS或OBSFS时，挂载存储源路径。 **取值范围**：不涉及。
    /// </summary>

    std::string getUri() const;
    bool uriIsSet() const;
    void unseturi();
    void setUri(const std::string& value);

    /// <summary>
    /// **参数解释**：存储挂载类型。 **取值范围**：枚举类型，取值如下：  - STATIC:不支持在实例运行期间挂载以及卸载的存储 - DYNAMIC:支持在实例运行期间挂载以及卸载的存储
    /// </summary>

    std::string getMountType() const;
    bool mountTypeIsSet() const;
    void unsetmountType();
    void setMountType(const std::string& value);


protected:
    int32_t capacity_;
    bool capacityIsSet_;
    std::string category_;
    bool categoryIsSet_;
    std::string mountPath_;
    bool mountPathIsSet_;
    std::string ownership_;
    bool ownershipIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string id_;
    bool idIsSet_;
    bool readOnly_;
    bool readOnlyIsSet_;
    std::string dewSecretName_;
    bool dewSecretNameIsSet_;
    std::string evsSkuCode_;
    bool evsSkuCodeIsSet_;
    std::string uri_;
    bool uriIsSet_;
    std::string mountType_;
    bool mountTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_VolumeRes_H_
