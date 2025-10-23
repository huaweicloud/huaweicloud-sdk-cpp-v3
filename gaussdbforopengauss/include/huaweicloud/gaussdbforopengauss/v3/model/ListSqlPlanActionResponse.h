
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListSqlPlanActionResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListSqlPlanActionResponse_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/gaussdbforopengauss/v3/model/SqlPlanStateListResponse_sql_plan_bind_state_list.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  ListSqlPlanActionResponse
    : public ModelBase, public HttpResponse
{
public:
    ListSqlPlanActionResponse();
    virtual ~ListSqlPlanActionResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListSqlPlanActionResponse members

    /// <summary>
    /// **参数解释**: sql执行计划总数。 **取值范围**: 不涉及。
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);

    /// <summary>
    /// **参数解释**: 执行计划列表。 **取值范围**: 不涉及。
    /// </summary>

    std::vector<SqlPlanStateListResponse_sql_plan_bind_state_list>& getSqlPlanBindStateList();
    bool sqlPlanBindStateListIsSet() const;
    void unsetsqlPlanBindStateList();
    void setSqlPlanBindStateList(const std::vector<SqlPlanStateListResponse_sql_plan_bind_state_list>& value);


protected:
    int32_t total_;
    bool totalIsSet_;
    std::vector<SqlPlanStateListResponse_sql_plan_bind_state_list> sqlPlanBindStateList_;
    bool sqlPlanBindStateListIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListSqlPlanActionResponse_H_
