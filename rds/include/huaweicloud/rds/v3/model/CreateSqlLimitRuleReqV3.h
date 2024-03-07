
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_CreateSqlLimitRuleReqV3_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_CreateSqlLimitRuleReqV3_H_


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
class HUAWEICLOUD_RDS_V3_EXPORT  CreateSqlLimitRuleReqV3
    : public ModelBase
{
public:
    CreateSqlLimitRuleReqV3();
    virtual ~CreateSqlLimitRuleReqV3();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateSqlLimitRuleReqV3 members

    /// <summary>
    /// 数据库名称。
    /// </summary>

    std::string getDbName() const;
    bool dbNameIsSet() const;
    void unsetdbName();
    void setDbName(const std::string& value);

    /// <summary>
    /// 由SQL的语法解析树计算出的内部哈希码，默认为0，取值范围（-9223372036854775808~ 9223372036854775807）。
    /// </summary>

    int64_t getQueryId() const;
    bool queryIdIsSet() const;
    void unsetqueryId();
    void setQueryId(int64_t value);

    /// <summary>
    /// SQL语句的文本形式。（注：query_id与query_string只可以存在一个）
    /// </summary>

    std::string getQueryString() const;
    bool queryStringIsSet() const;
    void unsetqueryString();
    void setQueryString(const std::string& value);

    /// <summary>
    /// 同时执行的SQL数量，小于等于0表示不限制，默认为0，取值范围（-1~50000）。
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

    /// <summary>
    /// 为不是模式限定的名称设置模式搜索顺序，默认为public。
    /// </summary>

    std::string getSearchPath() const;
    bool searchPathIsSet() const;
    void unsetsearchPath();
    void setSearchPath(const std::string& value);


protected:
    std::string dbName_;
    bool dbNameIsSet_;
    int64_t queryId_;
    bool queryIdIsSet_;
    std::string queryString_;
    bool queryStringIsSet_;
    int32_t maxConcurrency_;
    bool maxConcurrencyIsSet_;
    int32_t maxWaiting_;
    bool maxWaitingIsSet_;
    std::string searchPath_;
    bool searchPathIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_CreateSqlLimitRuleReqV3_H_
