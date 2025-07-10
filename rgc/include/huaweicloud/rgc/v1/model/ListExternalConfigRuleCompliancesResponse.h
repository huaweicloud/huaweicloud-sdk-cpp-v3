
#ifndef HUAWEICLOUD_SDK_RGC_V1_MODEL_ListExternalConfigRuleCompliancesResponse_H_
#define HUAWEICLOUD_SDK_RGC_V1_MODEL_ListExternalConfigRuleCompliancesResponse_H_


#include <huaweicloud/rgc/v1/RgcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rgc/v1/model/ExternalConfigRuleCompliance.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_RGC_V1_EXPORT  ListExternalConfigRuleCompliancesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListExternalConfigRuleCompliancesResponse();
    virtual ~ListExternalConfigRuleCompliancesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListExternalConfigRuleCompliancesResponse members

    /// <summary>
    /// 纳管账号ID
    /// </summary>

    std::string getAccountId() const;
    bool accountIdIsSet() const;
    void unsetaccountId();
    void setAccountId(const std::string& value);

    /// <summary>
    /// Config规则合规性信息
    /// </summary>

    std::vector<ExternalConfigRuleCompliance>& getConfigRuleCompliances();
    bool configRuleCompliancesIsSet() const;
    void unsetconfigRuleCompliances();
    void setConfigRuleCompliances(const std::vector<ExternalConfigRuleCompliance>& value);


protected:
    std::string accountId_;
    bool accountIdIsSet_;
    std::vector<ExternalConfigRuleCompliance> configRuleCompliances_;
    bool configRuleCompliancesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RGC_V1_MODEL_ListExternalConfigRuleCompliancesResponse_H_
