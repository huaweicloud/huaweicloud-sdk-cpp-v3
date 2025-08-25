
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_NodeSpecUpdate_nodeNicSpecUpdate_primaryNic_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_NodeSpecUpdate_nodeNicSpecUpdate_primaryNic_H_


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
/// **参数解释**： 主网卡的描述信息。 **约束限制**： 不涉及 **取值范围：** 不涉及 **默认取值：** 不涉及
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  NodeSpecUpdate_nodeNicSpecUpdate_primaryNic
    : public ModelBase
{
public:
    NodeSpecUpdate_nodeNicSpecUpdate_primaryNic();
    virtual ~NodeSpecUpdate_nodeNicSpecUpdate_primaryNic();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NodeSpecUpdate_nodeNicSpecUpdate_primaryNic members

    /// <summary>
    /// **参数解释**： 网卡所在子网的网络ID。 **约束限制**： 主网卡创建时若未指定subnetId,将使用集群子网。若节点池同时配置了subnetList，则节点池扩容子网以subnetList字段为准。扩展网卡创建时必须指定subnetId。 **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getSubnetId() const;
    bool subnetIdIsSet() const;
    void unsetsubnetId();
    void setSubnetId(const std::string& value);

    /// <summary>
    /// **参数解释**： 网卡所在子网的网络ID列表，支持节点池配置多个子网。 **约束限制**： 最多支持配置20个子网。 **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::vector<std::string>& getSubnetList();
    bool subnetListIsSet() const;
    void unsetsubnetList();
    void setSubnetList(const std::vector<std::string>& value);


protected:
    std::string subnetId_;
    bool subnetIdIsSet_;
    std::vector<std::string> subnetList_;
    bool subnetListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_NodeSpecUpdate_nodeNicSpecUpdate_primaryNic_H_
