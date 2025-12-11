
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_ListAuditRuleRisksRequest_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_ListAuditRuleRisksRequest_H_


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
class HUAWEICLOUD_DBSS_V1_EXPORT  ListAuditRuleRisksRequest
    : public ModelBase
{
public:
    ListAuditRuleRisksRequest();
    virtual ~ListAuditRuleRisksRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListAuditRuleRisksRequest members

    /// <summary>
    /// **参数解释**： 实例ID。可通过查询实例列表接口ID字段获取 **约束限制**： 不涉及 **取值范围**： 以查询实例列表接口值为准，字符长度32-64。 **默认取值**： 不涉及 
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 风险名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 风险级别 - LOW：低 - MEDIUM：中 - HIGH：高 - NO_RISK：无风险
    /// </summary>

    std::string getRiskLevels() const;
    bool riskLevelsIsSet() const;
    void unsetriskLevels();
    void setRiskLevels(const std::string& value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string riskLevels_;
    bool riskLevelsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListAuditRuleRisksRequest& dereference_from_shared_ptr(std::shared_ptr<ListAuditRuleRisksRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_ListAuditRuleRisksRequest_H_
