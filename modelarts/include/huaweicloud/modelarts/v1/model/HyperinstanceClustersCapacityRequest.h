
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_HyperinstanceClustersCapacityRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_HyperinstanceClustersCapacityRequest_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  HyperinstanceClustersCapacityRequest
    : public ModelBase
{
public:
    HyperinstanceClustersCapacityRequest();
    virtual ~HyperinstanceClustersCapacityRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// HyperinstanceClustersCapacityRequest members

    /// <summary>
    /// **参数解释**：超节点集群ID列表。 **约束限制**：数组长度0-5，每个元素长度1-128字符。 **默认取值**：不涉及。
    /// </summary>

    std::vector<std::string>& getHyperinstanceClusterIds();
    bool hyperinstanceClusterIdsIsSet() const;
    void unsethyperinstanceClusterIds();
    void setHyperinstanceClusterIds(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释**：规格名称。 **约束限制**：长度1-65536个字符。 **默认取值**：不涉及。
    /// </summary>

    std::string getFlavor() const;
    bool flavorIsSet() const;
    void unsetflavor();
    void setFlavor(const std::string& value);

    /// <summary>
    /// **参数解释**：可用区。 **约束限制**：长度1-65536个字符。 **默认取值**：不涉及。
    /// </summary>

    std::string getAvailabilityZone() const;
    bool availabilityZoneIsSet() const;
    void unsetavailabilityZone();
    void setAvailabilityZone(const std::string& value);

    /// <summary>
    /// **参数解释**：资源规格。 **约束限制**：长度1-65536个字符。 **默认取值**：不涉及。
    /// </summary>

    std::string getResourceFlavor() const;
    bool resourceFlavorIsSet() const;
    void unsetresourceFlavor();
    void setResourceFlavor(const std::string& value);


protected:
    std::vector<std::string> hyperinstanceClusterIds_;
    bool hyperinstanceClusterIdsIsSet_;
    std::string flavor_;
    bool flavorIsSet_;
    std::string availabilityZone_;
    bool availabilityZoneIsSet_;
    std::string resourceFlavor_;
    bool resourceFlavorIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_HyperinstanceClustersCapacityRequest_H_
