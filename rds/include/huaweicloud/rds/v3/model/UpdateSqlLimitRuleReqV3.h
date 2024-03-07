
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_UpdateSqlLimitRuleReqV3_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_UpdateSqlLimitRuleReqV3_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  UpdateSqlLimitRuleReqV3
    : public ModelBase
{
public:
    UpdateSqlLimitRuleReqV3();
    virtual ~UpdateSqlLimitRuleReqV3();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateSqlLimitRuleReqV3 members

    /// <summary>
    /// 数据库名称。
    /// </summary>

    std::string getDbName() const;
    bool dbNameIsSet() const;
    void unsetdbName();
    void setDbName(const std::string& value);

    /// <summary>
    /// SQL限流ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 同时执行的sql数量，小于等于0表示不限制，默认为0，取值范围（-1~50000）。
    /// </summary>

    int32_t getMaxConcurrency() const;
    bool maxConcurrencyIsSet() const;
    void unsetmaxConcurrency();
    void setMaxConcurrency(int32_t value);

    /// <summary>
    /// 最大等待时间，单位为秒。
    /// </summary>

    int32_t getMaxWaiting() const;
    bool maxWaitingIsSet() const;
    void unsetmaxWaiting();
    void setMaxWaiting(int32_t value);


protected:
    std::string dbName_;
    bool dbNameIsSet_;
    std::string id_;
    bool idIsSet_;
    int32_t maxConcurrency_;
    bool maxConcurrencyIsSet_;
    int32_t maxWaiting_;
    bool maxWaitingIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_UpdateSqlLimitRuleReqV3_H_
