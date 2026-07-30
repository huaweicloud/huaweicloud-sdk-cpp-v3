
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_SubnetIpAvailability_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_SubnetIpAvailability_H_


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
/// 子网可用的IP信息。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  SubnetIpAvailability
    : public ModelBase
{
public:
    SubnetIpAvailability();
    virtual ~SubnetIpAvailability();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SubnetIpAvailability members

    /// <summary>
    /// **参数解释**：子网的cidr。 **取值范围**：不涉及。
    /// </summary>

    std::string getCidr() const;
    bool cidrIsSet() const;
    void unsetcidr();
    void setCidr(const std::string& value);

    /// <summary>
    /// **参数解释**：网络版本。 **取值范围**：可选值如下： - 4：代表ipV4
    /// </summary>

    int32_t getIpVersion() const;
    bool ipVersionIsSet() const;
    void unsetipVersion();
    void setIpVersion(int32_t value);

    /// <summary>
    /// **参数解释**：已使用的IP数量。 **取值范围**：不涉及。
    /// </summary>

    int32_t getUsedIps() const;
    bool usedIpsIsSet() const;
    void unsetusedIps();
    void setUsedIps(int32_t value);

    /// <summary>
    /// **参数解释**：子网中总的IP数量。 **取值范围**：不涉及。
    /// </summary>

    int32_t getTotalIps() const;
    bool totalIpsIsSet() const;
    void unsettotalIps();
    void setTotalIps(int32_t value);


protected:
    std::string cidr_;
    bool cidrIsSet_;
    int32_t ipVersion_;
    bool ipVersionIsSet_;
    int32_t usedIps_;
    bool usedIpsIsSet_;
    int32_t totalIps_;
    bool totalIpsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_SubnetIpAvailability_H_
