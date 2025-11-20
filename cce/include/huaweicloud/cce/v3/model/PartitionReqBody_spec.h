
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_PartitionReqBody_spec_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_PartitionReqBody_spec_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/PartitionReqBody_spec_hostNetwork.h>
#include <string>
#include <vector>
#include <huaweicloud/cce/v3/model/PartitionReqBody_spec_containerNetwork.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**： 分区的配置信息 **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及 
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  PartitionReqBody_spec
    : public ModelBase
{
public:
    PartitionReqBody_spec();
    virtual ~PartitionReqBody_spec();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PartitionReqBody_spec members

    /// <summary>
    /// 
    /// </summary>

    PartitionReqBody_spec_hostNetwork getHostNetwork() const;
    bool hostNetworkIsSet() const;
    void unsethostNetwork();
    void setHostNetwork(const PartitionReqBody_spec_hostNetwork& value);

    /// <summary>
    /// **参数解释**： 分区容器子网 **约束限制**： 列表长度不能大于20 **取值范围**： 不涉及 **默认取值**： 不涉及 
    /// </summary>

    std::vector<PartitionReqBody_spec_containerNetwork>& getContainerNetwork();
    bool containerNetworkIsSet() const;
    void unsetcontainerNetwork();
    void setContainerNetwork(const std::vector<PartitionReqBody_spec_containerNetwork>& value);

    /// <summary>
    /// **参数解释**： 群组，IES边缘场景为可用区ID，中心区统一为“center”。 **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及 
    /// </summary>

    std::string getPublicBorderGroup() const;
    bool publicBorderGroupIsSet() const;
    void unsetpublicBorderGroup();
    void setPublicBorderGroup(const std::string& value);

    /// <summary>
    /// **参数解释**： 可用区分类 **约束限制**： 不涉及 **取值范围**： - Default: 中心云可用区 - IES: 专属云可用区 - HomeZone: 智能边缘云可用区 **默认取值**： 不涉及
    /// </summary>

    std::string getCategory() const;
    bool categoryIsSet() const;
    void unsetcategory();
    void setCategory(const std::string& value);


protected:
    PartitionReqBody_spec_hostNetwork hostNetwork_;
    bool hostNetworkIsSet_;
    std::vector<PartitionReqBody_spec_containerNetwork> containerNetwork_;
    bool containerNetworkIsSet_;
    std::string publicBorderGroup_;
    bool publicBorderGroupIsSet_;
    std::string category_;
    bool categoryIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_PartitionReqBody_spec_H_
