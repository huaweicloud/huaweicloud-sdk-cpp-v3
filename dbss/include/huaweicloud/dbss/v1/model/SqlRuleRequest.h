
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_SqlRuleRequest_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_SqlRuleRequest_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  SqlRuleRequest
    : public ModelBase
{
public:
    SqlRuleRequest();
    virtual ~SqlRuleRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SqlRuleRequest members

    /// <summary>
    /// 风险级别 - HIGH - MEDIUM - LOW - NO_RISK
    /// </summary>

    std::string getRiskLevels() const;
    bool riskLevelsIsSet() const;
    void unsetriskLevels();
    void setRiskLevels(const std::string& value);


protected:
    std::string riskLevels_;
    bool riskLevelsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_SqlRuleRequest_H_
