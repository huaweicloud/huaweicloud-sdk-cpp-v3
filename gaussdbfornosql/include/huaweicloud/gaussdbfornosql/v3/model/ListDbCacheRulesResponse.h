
#ifndef HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ListDbCacheRulesResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ListDbCacheRulesResponse_H_


#include <huaweicloud/gaussdbfornosql/v3/GaussDBforNoSQLExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/gaussdbfornosql/v3/model/QueryDBCacheRuleResponse.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDBFORNOSQL_V3_EXPORT  ListDbCacheRulesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListDbCacheRulesResponse();
    virtual ~ListDbCacheRulesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListDbCacheRulesResponse members

    /// <summary>
    /// 总记录数。
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);

    /// <summary>
    /// 内存加速映射ID。
    /// </summary>

    std::string getDbcacheMappingId() const;
    bool dbcacheMappingIdIsSet() const;
    void unsetdbcacheMappingId();
    void setDbcacheMappingId(const std::string& value);

    /// <summary>
    /// 内存加速规则详情。
    /// </summary>

    std::vector<QueryDBCacheRuleResponse>& getRules();
    bool rulesIsSet() const;
    void unsetrules();
    void setRules(const std::vector<QueryDBCacheRuleResponse>& value);


protected:
    int32_t totalCount_;
    bool totalCountIsSet_;
    std::string dbcacheMappingId_;
    bool dbcacheMappingIdIsSet_;
    std::vector<QueryDBCacheRuleResponse> rules_;
    bool rulesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ListDbCacheRulesResponse_H_
