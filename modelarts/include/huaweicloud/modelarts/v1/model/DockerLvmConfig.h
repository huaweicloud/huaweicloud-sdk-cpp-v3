
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_DockerLvmConfig_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_DockerLvmConfig_H_


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
/// 节点容器磁盘配置项信息。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  DockerLvmConfig
    : public ModelBase
{
public:
    DockerLvmConfig();
    virtual ~DockerLvmConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DockerLvmConfig members

    /// <summary>
    /// **参数解释**： 资源池节点Docker盘占数据盘的百分比。例如Docker盘大小占用数据盘20%，该参数值为20。 **取值范围**： 不涉及。
    /// </summary>

    int32_t getDockerThinPool() const;
    bool dockerThinPoolIsSet() const;
    void unsetdockerThinPool();
    void setDockerThinPool(int32_t value);

    /// <summary>
    /// **参数解释**： 资源池节点上kubelet占数据盘的百分比。例如Docker盘大小占用数据盘20%，该参数值为20。 **取值范围**： 不涉及。
    /// </summary>

    int32_t getKubernetesLV() const;
    bool kubernetesLVIsSet() const;
    void unsetkubernetesLV();
    void setKubernetesLV(int32_t value);

    /// <summary>
    /// **参数解释**： 磁盘类型。 **取值范围**： 可选值如下： - evs：云硬盘 - ssd：本地SSD硬盘
    /// </summary>

    std::string getDockerDiskType() const;
    bool dockerDiskTypeIsSet() const;
    void unsetdockerDiskType();
    void setDockerDiskType(const std::string& value);

    /// <summary>
    /// **参数解释**： LVM写入模式。 **取值范围**： 可选值如下： - striped：条带模式，使用多块磁盘组成条带模式，能够提升磁盘性能 - linear：线性模式
    /// </summary>

    std::string getLvType() const;
    bool lvTypeIsSet() const;
    void unsetlvType();
    void setLvType(const std::string& value);


protected:
    int32_t dockerThinPool_;
    bool dockerThinPoolIsSet_;
    int32_t kubernetesLV_;
    bool kubernetesLVIsSet_;
    std::string dockerDiskType_;
    bool dockerDiskTypeIsSet_;
    std::string lvType_;
    bool lvTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_DockerLvmConfig_H_
