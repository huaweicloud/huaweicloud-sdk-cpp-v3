
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_IntelligentKillSessionReq_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_IntelligentKillSessionReq_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 一键自动kill会话请求体
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  IntelligentKillSessionReq
    : public ModelBase
{
public:
    IntelligentKillSessionReq();
    virtual ~IntelligentKillSessionReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// IntelligentKillSessionReq members

    /// <summary>
    /// 是否自动SQL限流
    /// </summary>

    bool isAutoAddSqlLimitRule() const;
    bool autoAddSqlLimitRuleIsSet() const;
    void unsetautoAddSqlLimitRule();
    void setAutoAddSqlLimitRule(bool value);


protected:
    bool autoAddSqlLimitRule_;
    bool autoAddSqlLimitRuleIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_IntelligentKillSessionReq_H_
