
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ServerHpsClusterCapacity_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ServerHpsClusterCapacity_H_


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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ServerHpsClusterCapacity
    : public ModelBase
{
public:
    ServerHpsClusterCapacity();
    virtual ~ServerHpsClusterCapacity();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ServerHpsClusterCapacity members

    /// <summary>
    /// **参数解释**：规格名称。 **约束限制**：长度1-65536个字符。 **默认取值**：不涉及。
    /// </summary>

    std::string getFlavor() const;
    bool flavorIsSet() const;
    void unsetflavor();
    void setFlavor(const std::string& value);

    /// <summary>
    /// **参数解释**：可用区ID。 **约束限制**：长度1-65536个字符。 **默认取值**：不涉及。
    /// </summary>

    std::string getAvailabilityZone() const;
    bool availabilityZoneIsSet() const;
    void unsetavailabilityZone();
    void setAvailabilityZone(const std::string& value);

    /// <summary>
    /// **参数解释**：超节点集群ID。 **约束限制**：长度1-65536个字符。 **默认取值**：不涉及。
    /// </summary>

    std::string getHyperinstanceClusterId() const;
    bool hyperinstanceClusterIdIsSet() const;
    void unsethyperinstanceClusterId();
    void setHyperinstanceClusterId(const std::string& value);

    /// <summary>
    /// **参数解释**：超节点集群名称。 **约束限制**：长度1-65536个字符。 **默认取值**：不涉及。
    /// </summary>

    std::string getHyperinstanceClusterName() const;
    bool hyperinstanceClusterNameIsSet() const;
    void unsethyperinstanceClusterName();
    void setHyperinstanceClusterName(const std::string& value);

    /// <summary>
    /// **参数解释**：资源规格。 **约束限制**：长度1-65536个字符。 **默认取值**：不涉及。
    /// </summary>

    std::string getResourceFlavor() const;
    bool resourceFlavorIsSet() const;
    void unsetresourceFlavor();
    void setResourceFlavor(const std::string& value);

    /// <summary>
    /// **参数解释**：售罄状态。 **约束限制**：布尔值（true/false）。 **默认取值**：不涉及。
    /// </summary>

    bool isIsSoldOut() const;
    bool isSoldOutIsSet() const;
    void unsetisSoldOut();
    void setIsSoldOut(bool value);


protected:
    std::string flavor_;
    bool flavorIsSet_;
    std::string availabilityZone_;
    bool availabilityZoneIsSet_;
    std::string hyperinstanceClusterId_;
    bool hyperinstanceClusterIdIsSet_;
    std::string hyperinstanceClusterName_;
    bool hyperinstanceClusterNameIsSet_;
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

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ServerHpsClusterCapacity_H_
