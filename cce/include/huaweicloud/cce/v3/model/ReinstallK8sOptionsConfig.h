
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_ReinstallK8sOptionsConfig_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_ReinstallK8sOptionsConfig_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cce/v3/model/Taint.h>
#include <map>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 节点重装场景Kubernetes节点配置
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  ReinstallK8sOptionsConfig
    : public ModelBase
{
public:
    ReinstallK8sOptionsConfig();
    virtual ~ReinstallK8sOptionsConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ReinstallK8sOptionsConfig members

    /// <summary>
    /// 格式为key/value键值对。键值对个数不超过20条。 - Key：必须以字母或数字开头，可以包含字母、数字、连字符、下划线和点，最长63个字符；另外可以使用DNS子域作为前缀，例如example.com/my-key，DNS子域最长253个字符。 - Value：可以为空或者非空字符串，非空字符串必须以字符或数字开头，可以包含字母、数字、连字符、下划线和点，最长63个字符。  示例： &#x60;&#x60;&#x60; \&quot;k8sTags\&quot;: {   \&quot;key\&quot;: \&quot;value\&quot; } &#x60;&#x60;&#x60; 
    /// </summary>

    std::map<std::string, std::string>& getLabels();
    bool labelsIsSet() const;
    void unsetlabels();
    void setLabels(const std::map<std::string, std::string>& value);

    /// <summary>
    /// 支持给创建出来的节点加Taints来设置反亲和性，taints配置不超过20条。每条Taints包含以下3个参数：  - Key：必须以字母或数字开头，可以包含字母、数字、连字符、下划线和点，最长63个字符；另外可以使用DNS子域作为前缀。 - Value：必须以字符或数字开头，可以包含字母、数字、连字符、下划线和点，最长63个字符。 - Effect：只可选NoSchedule，PreferNoSchedule或NoExecute。  示例：  &#x60;&#x60;&#x60; \&quot;taints\&quot;: [{   \&quot;key\&quot;: \&quot;status\&quot;,   \&quot;value\&quot;: \&quot;unavailable\&quot;,   \&quot;effect\&quot;: \&quot;NoSchedule\&quot; }, {   \&quot;key\&quot;: \&quot;looks\&quot;,   \&quot;value\&quot;: \&quot;bad\&quot;,   \&quot;effect\&quot;: \&quot;NoSchedule\&quot; }] &#x60;&#x60;&#x60; 
    /// </summary>

    std::vector<Taint>& getTaints();
    bool taintsIsSet() const;
    void unsettaints();
    void setTaints(const std::vector<Taint>& value);

    /// <summary>
    /// 节点最大允许创建的实例数(Pod)，该数量包含系统默认实例，取值范围为16~256。 该设置的目的为防止节点因管理过多实例而负载过重，请根据您的业务需要进行设置。 
    /// </summary>

    int32_t getMaxPods() const;
    bool maxPodsIsSet() const;
    void unsetmaxPods();
    void setMaxPods(int32_t value);

    /// <summary>
    /// - 弹性网卡队列数配置，默认配置示例如下： &#x60;&#x60;&#x60; \&quot;[{\\\&quot;queue\\\&quot;:4}]\&quot; &#x60;&#x60;&#x60; 包含如下字段： - queue: 弹性网卡队列数。 - 仅在turbo集群的BMS节点时，该字段才可配置。 - 当前支持可配置队列数以及弹性网卡数：{\&quot;1\&quot;:128, \&quot;2\&quot;:92, \&quot;4\&quot;:92, \&quot;8\&quot;:32, \&quot;16\&quot;:16,\&quot;28\&quot;:9}, 既1弹性网卡队列可绑定128张弹性网卡，2队列弹性网卡可绑定92张，以此类推。 - 弹性网卡队列数越多，性能越强，但可绑定弹性网卡数越少，请根据您的需求进行配置（创建后不可修改）。 
    /// </summary>

    std::string getNicMultiqueue() const;
    bool nicMultiqueueIsSet() const;
    void unsetnicMultiqueue();
    void setNicMultiqueue(const std::string& value);

    /// <summary>
    /// - 弹性网卡预绑定比例配置，默认配置示例如下： &#x60;&#x60;&#x60; \&quot;0.3:0.6\&quot; &#x60;&#x60;&#x60;   - 第一位小数：预绑定低水位，弹性网卡预绑定的最低比例（最小预绑定弹性网卡数 &#x3D; ⌊节点的总弹性网卡数 * 预绑定低水位⌋）   - 第二位小数：预绑定高水位，弹性网卡预绑定的最高比例（最大预绑定弹性网卡数 &#x3D; ⌊节点的总弹性网卡数 * 预绑定高水位⌋）   - BMS节点上绑定的弹性网卡数：Pod正在使用的弹性网卡数 + 最小预绑定弹性网卡数 &lt; BMS节点上绑定的弹性网卡数 &lt; Pod正在使用的弹性网卡数 + 最大预绑定弹性网卡数   - BMS节点上当预绑定弹性网卡数 &lt; 最小预绑定弹性网卡数时：会绑定弹性网卡，使得预绑定弹性网卡数 &#x3D; 最小预绑定弹性网卡数   - BMS节点上当预绑定弹性网卡数 &gt; 最大预绑定弹性网卡数时：会定时解绑弹性网卡（约2分钟一次），直到预绑定弹性网卡数 &#x3D; 最大预绑定弹性网卡数   - 取值范围：[0.0, 1.0]; 一位小数; 低水位 &lt;&#x3D; 高水位 - 仅在turbo集群的BMS节点时，该字段才可配置。 - 弹性网卡预绑定能加快工作负载的创建，但会占用IP，请根据您的需求进行配置。 
    /// </summary>

    std::string getNicThreshold() const;
    bool nicThresholdIsSet() const;
    void unsetnicThreshold();
    void setNicThreshold(const std::string& value);


protected:
    std::map<std::string, std::string> labels_;
    bool labelsIsSet_;
    std::vector<Taint> taints_;
    bool taintsIsSet_;
    int32_t maxPods_;
    bool maxPodsIsSet_;
    std::string nicMultiqueue_;
    bool nicMultiqueueIsSet_;
    std::string nicThreshold_;
    bool nicThresholdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_ReinstallK8sOptionsConfig_H_
