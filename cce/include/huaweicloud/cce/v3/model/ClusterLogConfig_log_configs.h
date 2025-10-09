
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_ClusterLogConfig_log_configs_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_ClusterLogConfig_log_configs_H_


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
class HUAWEICLOUD_CCE_V3_EXPORT  ClusterLogConfig_log_configs
    : public ModelBase
{
public:
    ClusterLogConfig_log_configs();
    virtual ~ClusterLogConfig_log_configs();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ClusterLogConfig_log_configs members

    /// <summary>
    /// **参数解释**： 日志类型 **约束限制**： 必须为 **kube-apiserver**、**kube-controller-manager**、**kube-scheduler**、**audit** 或者系统插件名称 **取值范围**： - kube-apiserver：采集kube-apiserver组件日志 - kube-controller-manager：采集kube-controller-manager日志 - kube-scheduler：采集kube-scheduler日志 - audit：采集审计日志 - 系统插件名称：采集插件日志  **默认取值**： 不涉及
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**： 是否采集 **取值范围**： - true：开启日志采集 - false：关闭日志采集
    /// </summary>

    bool isEnable() const;
    bool enableIsSet() const;
    void unsetenable();
    void setEnable(bool value);

    /// <summary>
    /// **参数解释**： 组件类型 , 合法取值为control，audit，system-addon。 **约束限制**： - 仅查询集群日志配置信息接口响应中返回该参数 - 作为**配置集群日志**接口更新参数时不支持配置  **取值范围**： - control: 控制面组件日志。 - audit: 控制面审计日志。 - system-addon: 系统插件日志。 **默认取值**： 不涉及
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    bool enable_;
    bool enableIsSet_;
    std::string type_;
    bool typeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_ClusterLogConfig_log_configs_H_
