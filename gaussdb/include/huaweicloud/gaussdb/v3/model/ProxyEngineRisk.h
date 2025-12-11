
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ProxyEngineRisk_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ProxyEngineRisk_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ProxyEngineRisk
    : public ModelBase
{
public:
    ProxyEngineRisk();
    virtual ~ProxyEngineRisk();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ProxyEngineRisk members

    /// <summary>
    /// **参数解释**：  风险级别。  **取值范围**： 1：一级风险。
    /// </summary>

    int32_t getLevel() const;
    bool levelIsSet() const;
    void unsetlevel();
    void setLevel(int32_t value);

    /// <summary>
    /// **参数解释**：  建议升级原因。  **取值范围**：  不涉及。
    /// </summary>

    std::string getSuggest() const;
    bool suggestIsSet() const;
    void unsetsuggest();
    void setSuggest(const std::string& value);

    /// <summary>
    /// **参数解释**：  升级影响。  **取值范围**：  不涉及。
    /// </summary>

    std::string getInfluence() const;
    bool influenceIsSet() const;
    void unsetinfluence();
    void setInfluence(const std::string& value);

    /// <summary>
    /// **参数解释**：  升级指导。  **取值范围**：  不涉及。
    /// </summary>

    std::string getGuidance() const;
    bool guidanceIsSet() const;
    void unsetguidance();
    void setGuidance(const std::string& value);

    /// <summary>
    /// **参数解释**：  预估业务影响时长。  **取值范围**：  不涉及。
    /// </summary>

    std::string getServiceImpactDuration() const;
    bool serviceImpactDurationIsSet() const;
    void unsetserviceImpactDuration();
    void setServiceImpactDuration(const std::string& value);

    /// <summary>
    /// **参数解释**：  预估升级时长。  **取值范围**：  不涉及。
    /// </summary>

    std::string getUpgradeDuration() const;
    bool upgradeDurationIsSet() const;
    void unsetupgradeDuration();
    void setUpgradeDuration(const std::string& value);


protected:
    int32_t level_;
    bool levelIsSet_;
    std::string suggest_;
    bool suggestIsSet_;
    std::string influence_;
    bool influenceIsSet_;
    std::string guidance_;
    bool guidanceIsSet_;
    std::string serviceImpactDuration_;
    bool serviceImpactDurationIsSet_;
    std::string upgradeDuration_;
    bool upgradeDurationIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ProxyEngineRisk_H_
