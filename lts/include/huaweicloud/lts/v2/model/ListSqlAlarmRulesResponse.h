
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_ListSqlAlarmRulesResponse_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_ListSqlAlarmRulesResponse_H_

#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/lts/v2/model/SqlAlarmRuleRespList.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  ListSqlAlarmRulesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListSqlAlarmRulesResponse();
    virtual ~ListSqlAlarmRulesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListSqlAlarmRulesResponse members

    /// <summary>
    /// SQL告警
    /// </summary>

    std::vector<SqlAlarmRuleRespList>& getSqlAlarmRules();
    bool sqlAlarmRulesIsSet() const;
    void unsetsqlAlarmRules();
    void setSqlAlarmRules(const std::vector<SqlAlarmRuleRespList>& value);


protected:
    std::vector<SqlAlarmRuleRespList> sqlAlarmRules_;
    bool sqlAlarmRulesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_ListSqlAlarmRulesResponse_H_
