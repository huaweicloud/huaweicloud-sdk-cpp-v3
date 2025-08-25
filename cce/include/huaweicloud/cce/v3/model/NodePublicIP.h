
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_NodePublicIP_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_NodePublicIP_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/NodeEIPSpec.h>
#include <string>
#include <huaweicloud/cce/v3/model/NodeBandwidth.h>
#include <vector>

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
class HUAWEICLOUD_CCE_V3_EXPORT  NodePublicIP
    : public ModelBase
{
public:
    NodePublicIP();
    virtual ~NodePublicIP();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NodePublicIP members

    /// <summary>
    /// **参数解释**： 已有的弹性IP的ID列表。数量不得大于待创建节点数 &gt; 若已配置ids参数，则无需配置count和eip参数 **约束限制**： 该参数仅给节点使用
    /// </summary>

    std::vector<std::string>& getIds();
    bool idsIsSet() const;
    void unsetids();
    void setIds(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释**： 要动态创建的弹性IP个数。 &gt; count参数与eip参数必须同时配置。 **约束限制**： 该参数仅给节点使用
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    NodeEIPSpec getEip() const;
    bool eipIsSet() const;
    void unseteip();
    void setEip(const NodeEIPSpec& value);

    /// <summary>
    /// **参数解释**： 表示节点所属分区。分区可以选择中心云[或者[边缘小站](https://support.huaweicloud.com/usermanual-cloudpond/ies_02_0401.html)。](tag:hws)[或者[边缘小站](https://support.huaweicloud.com/intl/zh-cn/usermanual-cloudpond/ies_02_0401.html)。](tag:hws_hk) 仅开启了对分布式云支持的Turbo集群支持指定该字段。 弹性IP类型，取值请参见申请EIP接口中publicip.type说明。 [链接请参见[申请EIP](https://support.huaweicloud.com/api-eip/eip_api_0001.html)](tag:hws) [链接请参见[申请EIP](https://support.huaweicloud.com/intl/zh-cn/api-eip/eip_api_0001.html)](tag:hws_hk) **约束限制**： 该参数仅给节点池使用 
    /// </summary>

    std::string getIptype() const;
    bool iptypeIsSet() const;
    void unsetiptype();
    void setIptype(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    NodeBandwidth getBandwidth() const;
    bool bandwidthIsSet() const;
    void unsetbandwidth();
    void setBandwidth(const NodeBandwidth& value);


protected:
    std::vector<std::string> ids_;
    bool idsIsSet_;
    int32_t count_;
    bool countIsSet_;
    NodeEIPSpec eip_;
    bool eipIsSet_;
    std::string iptype_;
    bool iptypeIsSet_;
    NodeBandwidth bandwidth_;
    bool bandwidthIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_NodePublicIP_H_
