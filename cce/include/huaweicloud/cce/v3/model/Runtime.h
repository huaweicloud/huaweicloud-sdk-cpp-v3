
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_Runtime_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_Runtime_H_


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
class HUAWEICLOUD_CCE_V3_EXPORT  Runtime
    : public ModelBase
{
public:
    Runtime();
    virtual ~Runtime();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Runtime members

    /// <summary>
    /// 容器运行时，默认场景： - v1.25以下集群：默认为\&quot;docker\&quot; - v1.25及以上集群，随操作系统变化，默认的容器运行时不同：操作系统为EulerOS 2.5[、EulerOS 2.8](tag:hws,hws_hk)的节点默认为\&quot;docker\&quot;，其余操作系统的节点默认为\&quot;containerd\&quot; 
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**： 容器运行时子类别。 **约束限制**： 仅CCE Turbo集群下弹性云服务器-物理机类型节点且上级运行时为containerd场景支持使用安全运行时。 **取值范围**： - runc: 普通运行时。 - kata: 安全运行时，需配套c6、c7系列弹性云服务器-物理机，支持的操作系统为EulerOS 2.10。 - kuasar-vmm: 安全运行时v2，支持kc2、ki2、c7、ac8h系列弹性服务器-物理机，配套操作系统为HCE 2.0，集群版本需为v1.28.15-r70、v1.29.15-r30、v1.30.14-r30、v1.31.10-r30、v1.32.6-r30、v1.33.5-r20或以上版本。  **默认取值**： runc
    /// </summary>

    std::string getRuntimeClass() const;
    bool runtimeClassIsSet() const;
    void unsetruntimeClass();
    void setRuntimeClass(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string runtimeClass_;
    bool runtimeClassIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_Runtime_H_
