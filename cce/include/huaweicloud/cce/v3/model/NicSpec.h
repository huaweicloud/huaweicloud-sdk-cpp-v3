
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_NicSpec_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_NicSpec_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 主网卡的描述信息。 
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  NicSpec
    : public ModelBase
{
public:
    NicSpec();
    virtual ~NicSpec();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NicSpec members

    /// <summary>
    /// 网卡所在子网的网络ID。主网卡创建时若未指定subnetId,将使用集群子网。若节点池同时配置了subnetList，则节点池扩容子网以subnetList字段为准。扩展网卡创建时必须指定subnetId。  
    /// </summary>

    std::string getSubnetId() const;
    bool subnetIdIsSet() const;
    void unsetsubnetId();
    void setSubnetId(const std::string& value);

    /// <summary>
    /// **参数解释**： 主网卡的IP将通过fixedIps指定，数量不得大于创建的节点数。 **约束限制**： - fixedIps或ipBlock同时只能指定一个 - 扩展网卡不支持指定fiexdIps - 创建节点池场景不支持该配置参数
    /// </summary>

    std::vector<std::string>& getFixedIps();
    bool fixedIpsIsSet() const;
    void unsetfixedIps();
    void setFixedIps(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释**： 主网卡的IP段的CIDR格式，创建的节点IP将属于该IP段内。 **约束限制**： - fixedIps或ipBlock同时只能指定一个。 - 创建节点池场景不支持该配置参数  **取值范围**： 不涉及 **默认取值**： 不涉及
    /// </summary>

    std::string getIpBlock() const;
    bool ipBlockIsSet() const;
    void unsetipBlock();
    void setIpBlock(const std::string& value);

    /// <summary>
    /// 网卡所在子网的网络ID列表，支持节点池配置多个子网，最多支持配置20个子网。
    /// </summary>

    std::vector<std::string>& getSubnetList();
    bool subnetListIsSet() const;
    void unsetsubnetList();
    void setSubnetList(const std::vector<std::string>& value);


protected:
    std::string subnetId_;
    bool subnetIdIsSet_;
    std::vector<std::string> fixedIps_;
    bool fixedIpsIsSet_;
    std::string ipBlock_;
    bool ipBlockIsSet_;
    std::vector<std::string> subnetList_;
    bool subnetListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_NicSpec_H_
