
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_ReinstallRuntimeConfig_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_ReinstallRuntimeConfig_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/Runtime.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 节点重装场景容器运行时配置
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  ReinstallRuntimeConfig
    : public ModelBase
{
public:
    ReinstallRuntimeConfig();
    virtual ~ReinstallRuntimeConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ReinstallRuntimeConfig members

    /// <summary>
    /// **参数解释**: 节点上单容器的可用磁盘空间大小（已废弃，请优先使用containerBaseSize参数），单位G。  不配置该值或值为0时将使用默认值，Devicemapper模式下默认值为10；OverlayFS模式默认不限制单容器可用空间大小，且dockerBaseSize设置仅在新版本集群的EulerOS[/HCEOS2.0](tag:hws,hws_hk,ctc,cmcc)节点上生效。  CCE节点容器运行时空间配置请参考[数据盘空间分配说明](cce_01_0341.xml)。  Devicemapper模式下建议dockerBaseSize配置不超过80G，设置过大时可能会导致容器运行时初始化时间过长而启动失败，若对容器磁盘大小有特殊要求，可考虑使用挂载外部或本地存储方式代替。 **约束限制**: 不涉及 **取值范围**: 不涉及 **默认取值**: 不涉及
    /// </summary>

    int32_t getDockerBaseSize() const;
    bool dockerBaseSizeIsSet() const;
    void unsetdockerBaseSize();
    void setDockerBaseSize(int32_t value);

    /// <summary>
    /// **参数解释**： 节点上单容器的可用磁盘空间大小，单位G。 &gt; - 更新节点池时，不支持更新此参数 &gt; - 不配置该值或值为0时将使用默认值，OverlayFS模式默认不限制单容器可用空间大小；Devicemapper模式下默认值为10，且containerBaseSize设置仅在新版本集群（v1.23.14-r0/v1.25.9-r0/v1.27.6-r0/v1.28.4-r0及以上）的EulerOS[/HCEOS2.0](tag:hws,hws_hk,ctc,cmcc)节点上生效。           &gt; - CCE节点容器运行时空间配置请参考[数据盘空间分配说明](cce_01_0341.xml)。        &gt; - Devicemapper模式下建议containerBaseSize配置不超过80G，设置过大时可能会导致容器运行时初始化时间过长而启动失败，若对容器磁盘大小有特殊要求，可考虑使用挂载外部或本地存储方式代替；Devicemapper模式在新版中仅有共池裸机使用，已逐步废弃。  **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及 
    /// </summary>

    int32_t getContainerBaseSize() const;
    bool containerBaseSizeIsSet() const;
    void unsetcontainerBaseSize();
    void setContainerBaseSize(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    Runtime getRuntime() const;
    bool runtimeIsSet() const;
    void unsetruntime();
    void setRuntime(const Runtime& value);


protected:
    int32_t dockerBaseSize_;
    bool dockerBaseSizeIsSet_;
    int32_t containerBaseSize_;
    bool containerBaseSizeIsSet_;
    Runtime runtime_;
    bool runtimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_ReinstallRuntimeConfig_H_
