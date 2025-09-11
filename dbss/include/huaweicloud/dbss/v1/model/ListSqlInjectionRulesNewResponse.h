
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_ListSqlInjectionRulesNewResponse_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_ListSqlInjectionRulesNewResponse_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/dbss/v1/model/SqlRuleResponse_rules.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  ListSqlInjectionRulesNewResponse
    : public ModelBase, public HttpResponse
{
public:
    ListSqlInjectionRulesNewResponse();
    virtual ~ListSqlInjectionRulesNewResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListSqlInjectionRulesNewResponse members

    /// <summary>
    /// SQL规则列表
    /// </summary>

    std::vector<SqlRuleResponse_rules>& getRules();
    bool rulesIsSet() const;
    void unsetrules();
    void setRules(const std::vector<SqlRuleResponse_rules>& value);

    /// <summary>
    /// 总数
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);


protected:
    std::vector<SqlRuleResponse_rules> rules_;
    bool rulesIsSet_;
    int32_t total_;
    bool totalIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_ListSqlInjectionRulesNewResponse_H_
