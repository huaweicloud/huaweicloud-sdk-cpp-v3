
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_DataVolumesRes_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_DataVolumesRes_H_


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
/// 动态挂载响应体。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  DataVolumesRes
    : public ModelBase
{
public:
    DataVolumesRes();
    virtual ~DataVolumesRes();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DataVolumesRes members

    /// <summary>
    /// **参数解释**：存储类型。可选值为OBS/OBSFS/EFS。 **取值范围**：不涉及。
    /// </summary>

    std::string getCategory() const;
    bool categoryIsSet() const;
    void unsetcategory();
    void setCategory(const std::string& value);

    /// <summary>
    /// **参数解释**：动态挂载实例ID。 **取值范围**：不涉及。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释**：在Notebook实例中挂载的路径。 **取值范围**：不涉及。
    /// </summary>

    std::string getMountPath() const;
    bool mountPathIsSet() const;
    void unsetmountPath();
    void setMountPath(const std::string& value);

    /// <summary>
    /// **参数解释**：动态挂载状态。 **取值范围**：枚举类型，取值如下： - MOUNTING：挂载中 - MOUNT_FAILED：挂载失败 - MOUNTED：已挂载 - UNMOUNTING：卸载中 - UNMOUNT_FAILED：卸载失败 - UNMOUNTED：卸载完成
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// **参数解释**：存储路径。 **取值范围**：不涉及。
    /// </summary>

    std::string getUri() const;
    bool uriIsSet() const;
    void unseturi();
    void setUri(const std::string& value);

    /// <summary>
    /// **参数解释**：挂载失败原因，动态挂载状态为MOUNT_FAILED时返回。 **取值范围**：不涉及。
    /// </summary>

    std::string getFailureReason() const;
    bool failureReasonIsSet() const;
    void unsetfailureReason();
    void setFailureReason(const std::string& value);

    /// <summary>
    /// **参数解释**：EFS存储实例ID。 **取值范围**：不涉及。
    /// </summary>

    std::string getEfsId() const;
    bool efsIdIsSet() const;
    void unsetefsId();
    void setEfsId(const std::string& value);

    /// <summary>
    /// **参数解释**：存储挂载类型。 **取值范围**：枚举类型，取值如下：  - STATIC:不支持在实例运行期间挂载以及卸载的存储 - DYNAMIC:支持在实例运行期间挂载以及卸载的存储
    /// </summary>

    std::string getMountType() const;
    bool mountTypeIsSet() const;
    void unsetmountType();
    void setMountType(const std::string& value);


protected:
    std::string category_;
    bool categoryIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string mountPath_;
    bool mountPathIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string uri_;
    bool uriIsSet_;
    std::string failureReason_;
    bool failureReasonIsSet_;
    std::string efsId_;
    bool efsIdIsSet_;
    std::string mountType_;
    bool mountTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_DataVolumesRes_H_
