
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_DataVolumesReq_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_DataVolumesReq_H_


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
/// 动态挂载存储请求体。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  DataVolumesReq
    : public ModelBase
{
public:
    DataVolumesReq();
    virtual ~DataVolumesReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DataVolumesReq members

    /// <summary>
    /// **参数解释**：动态挂载存储类型。 **约束限制**：不涉及。 **取值范围**：枚举类型，取值如下： - OBS：对象存储服务 - OBSFS：并行文件系统PFS - EFS：高性能弹性文件服务SFS Turbo  **默认取值**：无。
    /// </summary>

    std::string getCategory() const;
    bool categoryIsSet() const;
    void unsetcategory();
    void setCategory(const std::string& value);

    /// <summary>
    /// **参数解释**：在Notebook实例中挂载的路径。 **约束限制**：必须是/data目录的子目录。 **取值范围**：限制长度为256个字符，必须在Notebook的/data/的子目录下。 **默认取值**：无。
    /// </summary>

    std::string getMountPath() const;
    bool mountPathIsSet() const;
    void unsetmountPath();
    void setMountPath(const std::string& value);

    /// <summary>
    /// **参数解释**：存储路径，示例：obs://modelarts/notebook/ 或 da669f6e-5591-4c10-b2a7-18d053a75677.sfsturbo.internal:/notebook。 **约束限制**：并行文件系统PFS 或 高性能弹性文件服务SFS Turbo中合法的挂载路径。 **取值范围**：限制长度为256个字符。 **默认取值**：不涉及。
    /// </summary>

    std::string getUri() const;
    bool uriIsSet() const;
    void unseturi();
    void setUri(const std::string& value);

    /// <summary>
    /// **参数解释**：高性能弹性文件服务SFS Turbo实例id。 **约束限制**：若category字段为EFS，则此字段必填。 **取值范围**：合法UUID类型。 **默认取值**：无
    /// </summary>

    std::string getEfsId() const;
    bool efsIdIsSet() const;
    void unsetefsId();
    void setEfsId(const std::string& value);


protected:
    std::string category_;
    bool categoryIsSet_;
    std::string mountPath_;
    bool mountPathIsSet_;
    std::string uri_;
    bool uriIsSet_;
    std::string efsId_;
    bool efsIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_DataVolumesReq_H_
