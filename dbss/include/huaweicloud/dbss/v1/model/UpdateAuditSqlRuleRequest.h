
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_UpdateAuditSqlRuleRequest_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_UpdateAuditSqlRuleRequest_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/dbss/v1/model/RuleAddSqlRequest.h>

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
class HUAWEICLOUD_DBSS_V1_EXPORT  UpdateAuditSqlRuleRequest
    : public ModelBase
{
public:
    UpdateAuditSqlRuleRequest();
    virtual ~UpdateAuditSqlRuleRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateAuditSqlRuleRequest members

    /// <summary>
    /// **参数解释**： 实例ID。可通过查询实例列表接口ID字段获取 **约束限制**： 不涉及 **取值范围**： 以查询实例列表接口值为准，字符长度32-64。 **默认取值**： 不涉及 
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// **参数解释**： SQL规则ID。可通过查询SQL注入规则策略接口的ID字段获取。 **约束限制**： 不涉及 **取值范围**： 以查询SQL注入规则策略接口值为准，字符长度16-64。 **默认取值**： 不涉及 
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    RuleAddSqlRequest getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const RuleAddSqlRequest& value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string id_;
    bool idIsSet_;
    RuleAddSqlRequest body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateAuditSqlRuleRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateAuditSqlRuleRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_UpdateAuditSqlRuleRequest_H_
