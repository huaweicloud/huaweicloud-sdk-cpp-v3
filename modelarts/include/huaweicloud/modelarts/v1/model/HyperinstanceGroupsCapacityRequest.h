
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_HyperinstanceGroupsCapacityRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_HyperinstanceGroupsCapacityRequest_H_


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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  HyperinstanceGroupsCapacityRequest
    : public ModelBase
{
public:
    HyperinstanceGroupsCapacityRequest();
    virtual ~HyperinstanceGroupsCapacityRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// HyperinstanceGroupsCapacityRequest members

    /// <summary>
    /// **参数解释**：hyperinstance-group ID列表。 **默认取值**：不涉及。 **取值范围**：1-5
    /// </summary>

    std::vector<std::string>& getHyperinstanceGroupIds();
    bool hyperinstanceGroupIdsIsSet() const;
    void unsethyperinstanceGroupIds();
    void setHyperinstanceGroupIds(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释**：可用区。 **默认取值**：不涉及。
    /// </summary>

    std::string getAvailabilityZone() const;
    bool availabilityZoneIsSet() const;
    void unsetavailabilityZone();
    void setAvailabilityZone(const std::string& value);

    /// <summary>
    /// **参数解释**：规格名称。 **默认取值**：不涉及。
    /// </summary>

    std::string getResourceFlavor() const;
    bool resourceFlavorIsSet() const;
    void unsetresourceFlavor();
    void setResourceFlavor(const std::string& value);


protected:
    std::vector<std::string> hyperinstanceGroupIds_;
    bool hyperinstanceGroupIdsIsSet_;
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

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_HyperinstanceGroupsCapacityRequest_H_
