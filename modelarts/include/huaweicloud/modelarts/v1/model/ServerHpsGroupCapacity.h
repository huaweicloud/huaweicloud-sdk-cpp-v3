
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ServerHpsGroupCapacity_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ServerHpsGroupCapacity_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ServerHpsGroupCapacity
    : public ModelBase
{
public:
    ServerHpsGroupCapacity();
    virtual ~ServerHpsGroupCapacity();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ServerHpsGroupCapacity members

    /// <summary>
    /// **参数解释**：可用区。 **默认取值**：不涉及。
    /// </summary>

    std::string getAvailabilityZone() const;
    bool availabilityZoneIsSet() const;
    void unsetavailabilityZone();
    void setAvailabilityZone(const std::string& value);

    /// <summary>
    /// **参数解释**：hyperinstance-group ID。 **默认取值**：不涉及。
    /// </summary>

    std::string getHyperinstanceGroupId() const;
    bool hyperinstanceGroupIdIsSet() const;
    void unsethyperinstanceGroupId();
    void setHyperinstanceGroupId(const std::string& value);

    /// <summary>
    /// **参数解释**：hyperinstance-group名称。 **默认取值**：不涉及。
    /// </summary>

    std::string getHyperinstanceGroupName() const;
    bool hyperinstanceGroupNameIsSet() const;
    void unsethyperinstanceGroupName();
    void setHyperinstanceGroupName(const std::string& value);

    /// <summary>
    /// **参数解释**：超节点集群ID。 **默认取值**：不涉及。
    /// </summary>

    std::string getHyperinstanceClusterId() const;
    bool hyperinstanceClusterIdIsSet() const;
    void unsethyperinstanceClusterId();
    void setHyperinstanceClusterId(const std::string& value);

    /// <summary>
    /// **参数解释**：规格名称。 **默认取值**：不涉及。
    /// </summary>

    std::string getResourceFlavor() const;
    bool resourceFlavorIsSet() const;
    void unsetresourceFlavor();
    void setResourceFlavor(const std::string& value);

    /// <summary>
    /// **参数解释**：是否售罄。 **默认取值**：不涉及。
    /// </summary>

    bool isIsSoldOut() const;
    bool isSoldOutIsSet() const;
    void unsetisSoldOut();
    void setIsSoldOut(bool value);


protected:
    std::string availabilityZone_;
    bool availabilityZoneIsSet_;
    std::string hyperinstanceGroupId_;
    bool hyperinstanceGroupIdIsSet_;
    std::string hyperinstanceGroupName_;
    bool hyperinstanceGroupNameIsSet_;
    std::string hyperinstanceClusterId_;
    bool hyperinstanceClusterIdIsSet_;
    std::string resourceFlavor_;
    bool resourceFlavorIsSet_;
    bool isSoldOut_;
    bool isSoldOutIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ServerHpsGroupCapacity_H_
