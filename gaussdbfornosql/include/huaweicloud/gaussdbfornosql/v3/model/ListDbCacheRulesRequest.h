
#ifndef HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ListDbCacheRulesRequest_H_
#define HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ListDbCacheRulesRequest_H_


#include <huaweicloud/gaussdbfornosql/v3/GaussDBforNoSQLExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_GAUSSDBFORNOSQL_V3_EXPORT  ListDbCacheRulesRequest
    : public ModelBase
{
public:
    ListDbCacheRulesRequest();
    virtual ~ListDbCacheRulesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListDbCacheRulesRequest members

    /// <summary>
    /// 内存加速映射ID。
    /// </summary>

    std::string getDbcacheMappingId() const;
    bool dbcacheMappingIdIsSet() const;
    void unsetdbcacheMappingId();
    void setDbcacheMappingId(const std::string& value);

    /// <summary>
    /// 内存加速规则ID。
    /// </summary>

    std::string getRuleId() const;
    bool ruleIdIsSet() const;
    void unsetruleId();
    void setRuleId(const std::string& value);

    /// <summary>
    /// 内存加速规则名称。名称以“*”起始，表示按照“*”后面的值模糊匹配，否则，按照实际填写的名称精确匹配查询。
    /// </summary>

    std::string getRuleName() const;
    bool ruleNameIsSet() const;
    void unsetruleName();
    void setRuleName(const std::string& value);

    /// <summary>
    /// 源端数据库名。名称以“*”起始，表示按照“*”后面的值模糊匹配，否则，按照实际填写的名称精确匹配查询。
    /// </summary>

    std::string getSourceDbSchema() const;
    bool sourceDbSchemaIsSet() const;
    void unsetsourceDbSchema();
    void setSourceDbSchema(const std::string& value);

    /// <summary>
    /// 源端数据表名。名称以“*”起始，表示按照“*”后面的值模糊匹配，否则，按照实际填写的名称精确匹配查询。
    /// </summary>

    std::string getSourceDbTable() const;
    bool sourceDbTableIsSet() const;
    void unsetsourceDbTable();
    void setSourceDbTable(const std::string& value);

    /// <summary>
    /// 索引位置，偏移量。 从第一条数据偏移offset条数据后开始查询，默认为0（偏移0条数据，表示从第一条数据开始查询）。 取值必须为数字，不能为负数。
    /// </summary>

    std::string getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(const std::string& value);

    /// <summary>
    /// 查询个数上限值。取值范围：1~100。不传该参数时，默认查询前100条信息。
    /// </summary>

    std::string getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(const std::string& value);


protected:
    std::string dbcacheMappingId_;
    bool dbcacheMappingIdIsSet_;
    std::string ruleId_;
    bool ruleIdIsSet_;
    std::string ruleName_;
    bool ruleNameIsSet_;
    std::string sourceDbSchema_;
    bool sourceDbSchemaIsSet_;
    std::string sourceDbTable_;
    bool sourceDbTableIsSet_;
    std::string offset_;
    bool offsetIsSet_;
    std::string limit_;
    bool limitIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListDbCacheRulesRequest& dereference_from_shared_ptr(std::shared_ptr<ListDbCacheRulesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ListDbCacheRulesRequest_H_
