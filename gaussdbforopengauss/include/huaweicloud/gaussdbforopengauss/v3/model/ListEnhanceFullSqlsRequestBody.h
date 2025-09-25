
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListEnhanceFullSqlsRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListEnhanceFullSqlsRequestBody_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdbforopengauss/v3/model/CompareConditionOption.h>
#include <string>
#include <huaweicloud/gaussdbforopengauss/v3/model/MultiQueryConditionOption.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 查询全量SQL列表请求体
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  ListEnhanceFullSqlsRequestBody
    : public ModelBase
{
public:
    ListEnhanceFullSqlsRequestBody();
    virtual ~ListEnhanceFullSqlsRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListEnhanceFullSqlsRequestBody members

    /// <summary>
    /// **参数解释**: 最大查询记录数。例如该参数设定为10，则查询结果最多只显示10条记录。 **约束限制**: 对于公有云25.5.0.1及以上版本，此参数弃用，请勿传值。通过系统系统参数控制最大返回记录数量，默认为200。 **取值范围**: [1, 1000] **默认取值**: 默认为10。
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// **参数解释**: 查询开始时间。 **约束限制**: ISO 8601 UTC格式。模式为“yyyy-mm-ddThh:mm:ssZ”。其中，T指某个时间的开始；Z指时区偏移量。 时区中的+号需要进行URL编码，编码为%2B，时区中的-号无需编码。 例如：北京时间偏移显示为+0800，begin_time&#x3D;2024-03-15T17:20:33+0800，传参时编码为begin_time&#x3D;2024-03-15T17:20:33%2B0800。 **取值范围**: 时间区间（begin_time ~ end_time）不能超过30天。 **默认取值**: 不涉及。
    /// </summary>

    std::string getBeginTime() const;
    bool beginTimeIsSet() const;
    void unsetbeginTime();
    void setBeginTime(const std::string& value);

    /// <summary>
    /// **参数解释**: 查询结束时间。 **约束限制**: ISO 8601 UTC格式。模式为“yyyy-mm-ddThh:mm:ssZ”。其中，T指某个时间的开始；Z指时区偏移量。 时区中的+号需要进行URL编码，编码为%2B，时区中的-号无需编码。 例如：北京时间偏移显示为+0800，end_time&#x3D;2024-03-16T17:20:33+0800，传参时编码为end_time&#x3D;2024-03-16T17:20:33%2B0800。 **取值范围**: 时间区间（begin_time ~ end_time）不能超过30天。 **默认取值**: 不涉及。
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);

    /// <summary>
    /// **参数解释**: SQL文本。 **约束限制**: 不涉及。 **取值范围**: 长度1-4096。 **默认取值**: 不涉及。
    /// </summary>

    std::string getQuery() const;
    bool queryIsSet() const;
    void unsetquery();
    void setQuery(const std::string& value);

    /// <summary>
    /// **参数解释**: 归一化SQL ID。 **约束限制**: 不涉及。 **取值范围**: 不涉及。 **默认取值**: 不涉及。
    /// </summary>

    std::string getSqlId() const;
    bool sqlIdIsSet() const;
    void unsetsqlId();
    void setSqlId(const std::string& value);

    /// <summary>
    /// **参数解释**: 唯一SQL ID。 **约束限制**: 不涉及。 **取值范围**: 不涉及。 **默认取值**: 不涉及。
    /// </summary>

    std::string getSqlExecId() const;
    bool sqlExecIdIsSet() const;
    void unsetsqlExecId();
    void setSqlExecId(const std::string& value);

    /// <summary>
    /// **参数解释**: 事务ID。 **约束限制**: 不涉及。 **取值范围**: 不涉及。 **默认取值**: 不涉及。
    /// </summary>

    std::string getTransactionId() const;
    bool transactionIdIsSet() const;
    void unsettransactionId();
    void setTransactionId(const std::string& value);

    /// <summary>
    /// **参数解释**: 链路ID。 **约束限制**: 不涉及。 **取值范围**: 不涉及。 **默认取值**: 不涉及。
    /// </summary>

    std::string getTraceId() const;
    bool traceIdIsSet() const;
    void unsettraceId();
    void setTraceId(const std::string& value);

    /// <summary>
    /// **参数解释**: 数据库名称。 **约束限制**: 不涉及。 **取值范围**: 不涉及。 **默认取值**: 不涉及。
    /// </summary>

    std::string getDbName() const;
    bool dbNameIsSet() const;
    void unsetdbName();
    void setDbName(const std::string& value);

    /// <summary>
    /// **参数解释**: schema名称。 **约束限制**: 不涉及。 **取值范围**: 不涉及。 **默认取值**: 不涉及。
    /// </summary>

    std::string getSchemaName() const;
    bool schemaNameIsSet() const;
    void unsetschemaName();
    void setSchemaName(const std::string& value);

    /// <summary>
    /// **参数解释**: 用户名称。 **约束限制**: 不涉及。 **取值范围**: 不涉及。 **默认取值**: 不涉及。
    /// </summary>

    std::string getUsername() const;
    bool usernameIsSet() const;
    void unsetusername();
    void setUsername(const std::string& value);

    /// <summary>
    /// **参数解释**: 客户端地址。 **约束限制**: 不涉及。 **取值范围**: 不涉及。 **默认取值**: 不涉及。
    /// </summary>

    std::string getClientAddr() const;
    bool clientAddrIsSet() const;
    void unsetclientAddr();
    void setClientAddr(const std::string& value);

    /// <summary>
    /// **参数解释**: 客户端端口。 **约束限制**: 不涉及。 **取值范围**: 不涉及。 **默认取值**: 不涉及。
    /// </summary>

    std::string getClientPort() const;
    bool clientPortIsSet() const;
    void unsetclientPort();
    void setClientPort(const std::string& value);

    /// <summary>
    /// **参数解释**: 排序字段。 **约束限制**: 不涉及。 **取值范围**: - begin_time：起始时间。  **默认取值**: begin_time
    /// </summary>

    std::string getOrderBy() const;
    bool orderByIsSet() const;
    void unsetorderBy();
    void setOrderBy(const std::string& value);

    /// <summary>
    /// **参数解释**: 是否为慢SQL。 **约束限制**: 不涉及。 **取值范围**: - true：是慢SQL。 - false：不是慢SQL。  **默认取值**: 不涉及。
    /// </summary>

    bool isIsSlowSql() const;
    bool isSlowSqlIsSet() const;
    void unsetisSlowSql();
    void setIsSlowSql(bool value);

    /// <summary>
    /// **参数解释**: 排序方式，支持升序和降序。 **约束限制**: 不涉及。 **取值范围**: - DESC：降序。 - ASC：升序。  **默认取值**: DESC
    /// </summary>

    std::string getOrder() const;
    bool orderIsSet() const;
    void unsetorder();
    void setOrder(const std::string& value);

    /// <summary>
    /// **参数解释**: 字段汇聚查询条件列表。默认取值为[]。 **约束限制**: 不涉及。
    /// </summary>

    std::vector<MultiQueryConditionOption>& getMultiQueries();
    bool multiQueriesIsSet() const;
    void unsetmultiQueries();
    void setMultiQueries(const std::vector<MultiQueryConditionOption>& value);

    /// <summary>
    /// **参数解释**: 组合比较查询条件，可针对某个给定过滤字段，进行区间范围、大小、小于等条件合并查询。默认取值为[]。 **约束限制**: 不涉及。
    /// </summary>

    std::vector<CompareConditionOption>& getCompareConditions();
    bool compareConditionsIsSet() const;
    void unsetcompareConditions();
    void setCompareConditions(const std::vector<CompareConditionOption>& value);


protected:
    int32_t limit_;
    bool limitIsSet_;
    std::string beginTime_;
    bool beginTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    std::string query_;
    bool queryIsSet_;
    std::string sqlId_;
    bool sqlIdIsSet_;
    std::string sqlExecId_;
    bool sqlExecIdIsSet_;
    std::string transactionId_;
    bool transactionIdIsSet_;
    std::string traceId_;
    bool traceIdIsSet_;
    std::string dbName_;
    bool dbNameIsSet_;
    std::string schemaName_;
    bool schemaNameIsSet_;
    std::string username_;
    bool usernameIsSet_;
    std::string clientAddr_;
    bool clientAddrIsSet_;
    std::string clientPort_;
    bool clientPortIsSet_;
    std::string orderBy_;
    bool orderByIsSet_;
    bool isSlowSql_;
    bool isSlowSqlIsSet_;
    std::string order_;
    bool orderIsSet_;
    std::vector<MultiQueryConditionOption> multiQueries_;
    bool multiQueriesIsSet_;
    std::vector<CompareConditionOption> compareConditions_;
    bool compareConditionsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListEnhanceFullSqlsRequestBody_H_
