
#ifndef HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_UpdateDbCacheRuleRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_UpdateDbCacheRuleRequestBody_H_


#include <huaweicloud/gaussdbfornosql/v3/GaussDBforNoSQLExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 修改内存加速规则请求体。
/// </summary>
class HUAWEICLOUD_GAUSSDBFORNOSQL_V3_EXPORT  UpdateDbCacheRuleRequestBody
    : public ModelBase
{
public:
    UpdateDbCacheRuleRequestBody();
    virtual ~UpdateDbCacheRuleRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateDbCacheRuleRequestBody members

    /// <summary>
    /// 内存加速规则ID。
    /// </summary>

    std::string getDbcacheRuleId() const;
    bool dbcacheRuleIdIsSet() const;
    void unsetdbcacheRuleId();
    void setDbcacheRuleId(const std::string& value);

    /// <summary>
    /// 映射的value使用的column列表。
    /// </summary>

    std::vector<std::string>& getValueColumns();
    bool valueColumnsIsSet() const;
    void unsetvalueColumns();
    void setValueColumns(const std::vector<std::string>& value);

    /// <summary>
    /// key的生存时间。单位:ms。不传该值，默认取2592000000，表示30天。
    /// </summary>

    std::string getTtl() const;
    bool ttlIsSet() const;
    void unsetttl();
    void setTtl(const std::string& value);

    /// <summary>
    /// 映射的value分隔符。只允许一个字符。
    /// </summary>

    std::string getValueSeparator() const;
    bool valueSeparatorIsSet() const;
    void unsetvalueSeparator();
    void setValueSeparator(const std::string& value);


protected:
    std::string dbcacheRuleId_;
    bool dbcacheRuleIdIsSet_;
    std::vector<std::string> valueColumns_;
    bool valueColumnsIsSet_;
    std::string ttl_;
    bool ttlIsSet_;
    std::string valueSeparator_;
    bool valueSeparatorIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_UpdateDbCacheRuleRequestBody_H_
