
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_VolumeResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_VolumeResponse_H_


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
/// 
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  VolumeResponse
    : public ModelBase
{
public:
    VolumeResponse();
    virtual ~VolumeResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// VolumeResponse members

    /// <summary>
    /// **参数解释**：notebook返回的扩展存储类型 **参数约束**：不涉及 - OBS：对象存储服务 - OBSFS：并行文件存储 - EFS：弹性文件服务
    /// </summary>

    std::string getCategory() const;
    bool categoryIsSet() const;
    void unsetcategory();
    void setCategory(const std::string& value);

    /// <summary>
    /// **参数解释**：存储挂载至Notebook实例的目录 **参数约束**：不涉及
    /// </summary>

    std::string getMountPath() const;
    bool mountPathIsSet() const;
    void unsetmountPath();
    void setMountPath(const std::string& value);

    /// <summary>
    /// **参数解释**：当category为OBS、OBSFS时，挂载存储源路径。 **参数约束**：不涉及
    /// </summary>

    std::string getUrl() const;
    bool urlIsSet() const;
    void unseturl();
    void setUrl(const std::string& value);

    /// <summary>
    /// **参数解释**：存储状态 - MOUNTING: 正在挂载中； - MOUNTED: 已挂载成功； - UNMOUNTING: 正在卸载中； - UNMOUNTED: 已卸载完成； - MOUNT_FAILED: 挂载失败 - UNMOUNT_FAILED：卸载失败； **参数约束**：不涉及
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// **参数解释**：存储挂载类型，枚举类。 **约束限制**：无限制。 - STATIC:不支持在实例运行期间挂载以及卸载的存储 - DYNAMIC:支持在实例运行期间挂载以及卸载的存储
    /// </summary>

    std::string getMountType() const;
    bool mountTypeIsSet() const;
    void unsetmountType();
    void setMountType(const std::string& value);


protected:
    std::string category_;
    bool categoryIsSet_;
    std::string mountPath_;
    bool mountPathIsSet_;
    std::string url_;
    bool urlIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string mountType_;
    bool mountTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_VolumeResponse_H_
