
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_SqlPlanStateListResponse_sql_plan_bind_state_list_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_SqlPlanStateListResponse_sql_plan_bind_state_list_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  SqlPlanStateListResponse_sql_plan_bind_state_list
    : public ModelBase
{
public:
    SqlPlanStateListResponse_sql_plan_bind_state_list();
    virtual ~SqlPlanStateListResponse_sql_plan_bind_state_list();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SqlPlanStateListResponse_sql_plan_bind_state_list members

    /// <summary>
    /// **参数解释**: 当前计划的概览。 **约束限制**: 不涉及。 **取值范围**: 不涉及。 **默认取值**: 不涉及。
    /// </summary>

    std::string getOutline() const;
    bool outlineIsSet() const;
    void unsetoutline();
    void setOutline(const std::string& value);

    /// <summary>
    /// **参数解释**: SQL执行计划的开销。 **取值范围**: 不涉及。
    /// </summary>

    std::string getCost() const;
    bool costIsSet() const;
    void unsetcost();
    void setCost(const std::string& value);

    /// <summary>
    /// **参数解释**: 绑定状态。 **取值范围**: - bind：绑定。 - drop：解绑。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// **参数解释**: SQL文本的哈希值。 **取值范围**: 不涉及。
    /// </summary>

    std::string getSqlHash() const;
    bool sqlHashIsSet() const;
    void unsetsqlHash();
    void setSqlHash(const std::string& value);

    /// <summary>
    /// **参数解释**: SQL执行计划ID。 **取值范围**: 不涉及。
    /// </summary>

    std::string getPlanId() const;
    bool planIdIsSet() const;
    void unsetplanId();
    void setPlanId(const std::string& value);


protected:
    std::string outline_;
    bool outlineIsSet_;
    std::string cost_;
    bool costIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string sqlHash_;
    bool sqlHashIsSet_;
    std::string planId_;
    bool planIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_SqlPlanStateListResponse_sql_plan_bind_state_list_H_
