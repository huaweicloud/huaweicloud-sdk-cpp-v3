
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_ShowAuditRuleRiskRequest_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_ShowAuditRuleRiskRequest_H_


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
/// Request Object
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  ShowAuditRuleRiskRequest
    : public ModelBase
{
public:
    ShowAuditRuleRiskRequest();
    virtual ~ShowAuditRuleRiskRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowAuditRuleRiskRequest members

    /// <summary>
    /// 实例ID
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 风险规则ID
    /// </summary>

    std::string getRiskId() const;
    bool riskIdIsSet() const;
    void unsetriskId();
    void setRiskId(const std::string& value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string riskId_;
    bool riskIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowAuditRuleRiskRequest& dereference_from_shared_ptr(std::shared_ptr<ShowAuditRuleRiskRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_ShowAuditRuleRiskRequest_H_
