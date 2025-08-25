
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_MigrateNodeExtendParam_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_MigrateNodeExtendParam_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  MigrateNodeExtendParam
    : public ModelBase
{
public:
    MigrateNodeExtendParam();
    virtual ~MigrateNodeExtendParam();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MigrateNodeExtendParam members

    /// <summary>
    /// 节点最大允许创建的实例数(Pod)，该数量包含系统默认实例，取值范围为16~256。 该设置的目的为防止节点因管理过多实例而负载过重，请根据您的业务需要进行设置。 
    /// </summary>

    int32_t getMaxPods() const;
    bool maxPodsIsSet() const;
    void unsetmaxPods();
    void setMaxPods(int32_t value);

    /// <summary>
    /// Docker数据盘配置项（已废弃，请使用storage字段）。  待迁移节点的磁盘类型须和创建时一致（即“DockerLVMConfigOverride”参数中“diskType”字段的值须和创建时一致），请确保单次接口调用时批量选择的节点磁盘类型一致。  默认配置示例如下：  &#x60;&#x60;&#x60; \&quot;DockerLVMConfigOverride\&quot;:\&quot;dockerThinpool&#x3D;vgpaas/90%VG;kubernetesLV&#x3D;vgpaas/10%VG;diskType&#x3D;evs;lvType&#x3D;linear\&quot; &#x60;&#x60;&#x60;  包含如下字段：   - userLV（可选）：用户空间的大小，示例格式：vgpaas/20%VG   - userPath（可选）：用户空间挂载路径，示例格式：/home/wqt-test   - diskType：磁盘类型，目前只有evs、hdd和ssd三种格式   - lvType：逻辑卷的类型，目前支持linear和striped两种，示例格式：striped   - dockerThinpool：Docker盘的空间大小，示例格式：vgpaas/60%VG   - kubernetesLV：Kubelet空间大小，示例格式：vgpaas/20%VG 
    /// </summary>

    std::string getDockerLVMConfigOverride() const;
    bool dockerLVMConfigOverrideIsSet() const;
    void unsetdockerLVMConfigOverride();
    void setDockerLVMConfigOverride(const std::string& value);

    /// <summary>
    /// 安装前执行脚本 &gt; 输入的值需要经过Base64编码，方法为echo -n \&quot;待编码内容\&quot; | base64。 
    /// </summary>

    std::string getAlphaCcePreInstall() const;
    bool alphaCcePreInstallIsSet() const;
    void unsetalphaCcePreInstall();
    void setAlphaCcePreInstall(const std::string& value);

    /// <summary>
    /// 安装后执行脚本 &gt; 输入的值需要经过Base64编码，方法为echo -n \&quot;待编码内容\&quot; | base64。 
    /// </summary>

    std::string getAlphaCcePostInstall() const;
    bool alphaCcePostInstallIsSet() const;
    void unsetalphaCcePostInstall();
    void setAlphaCcePostInstall(const std::string& value);

    /// <summary>
    /// 指定待切换目标操作系统所使用的用户镜像ID。 当指定“alpha.cce/NodeImageID”参数时，“os”参数必须和用户自定义镜像的操作系统一致。 
    /// </summary>

    std::string getAlphaCceNodeImageID() const;
    bool alphaCceNodeImageIDIsSet() const;
    void unsetalphaCceNodeImageID();
    void setAlphaCceNodeImageID(const std::string& value);


protected:
    int32_t maxPods_;
    bool maxPodsIsSet_;
    std::string dockerLVMConfigOverride_;
    bool dockerLVMConfigOverrideIsSet_;
    std::string alphaCcePreInstall_;
    bool alphaCcePreInstallIsSet_;
    std::string alphaCcePostInstall_;
    bool alphaCcePostInstallIsSet_;
    std::string alphaCceNodeImageID_;
    bool alphaCceNodeImageIDIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_MigrateNodeExtendParam_H_
