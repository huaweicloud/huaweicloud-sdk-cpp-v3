
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowRiskInfoEngineRiskDesc_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowRiskInfoEngineRiskDesc_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ShowRiskInfoEngineRiskDesc
    : public ModelBase
{
public:
    ShowRiskInfoEngineRiskDesc();
    virtual ~ShowRiskInfoEngineRiskDesc();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowRiskInfoEngineRiskDesc members

    /// <summary>
    /// 实例id
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 当前引擎
    /// </summary>

    std::string getEngineName() const;
    bool engineNameIsSet() const;
    void unsetengineName();
    void setEngineName(const std::string& value);

    /// <summary>
    /// 当前引擎小版本
    /// </summary>

    std::string getEngineVersion() const;
    bool engineVersionIsSet() const;
    void unsetengineVersion();
    void setEngineVersion(const std::string& value);

    /// <summary>
    /// 风险等级，默认1
    /// </summary>

    int64_t getLevel() const;
    bool levelIsSet() const;
    void unsetlevel();
    void setLevel(int64_t value);

    /// <summary>
    /// 建议升级原因,无风险为空
    /// </summary>

    std::string getSuggest() const;
    bool suggestIsSet() const;
    void unsetsuggest();
    void setSuggest(const std::string& value);

    /// <summary>
    /// 升级影响，无风险为空
    /// </summary>

    std::string getInfluence() const;
    bool influenceIsSet() const;
    void unsetinfluence();
    void setInfluence(const std::string& value);

    /// <summary>
    /// 指导链接，无风险为空
    /// </summary>

    std::string getGuidance() const;
    bool guidanceIsSet() const;
    void unsetguidance();
    void setGuidance(const std::string& value);

    /// <summary>
    /// 业务影响时长，无风险为空
    /// </summary>

    std::string getServiceImpactDuration() const;
    bool serviceImpactDurationIsSet() const;
    void unsetserviceImpactDuration();
    void setServiceImpactDuration(const std::string& value);

    /// <summary>
    /// 升级时长，无风险为空
    /// </summary>

    std::string getUpgradeDuration() const;
    bool upgradeDurationIsSet() const;
    void unsetupgradeDuration();
    void setUpgradeDuration(const std::string& value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string engineName_;
    bool engineNameIsSet_;
    std::string engineVersion_;
    bool engineVersionIsSet_;
    int64_t level_;
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

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowRiskInfoEngineRiskDesc_H_
