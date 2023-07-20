
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_SqlFilterRulePattern_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_SqlFilterRulePattern_H_

#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// SQL限流规则和最大并发数
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  SqlFilterRulePattern
    : public ModelBase
{
public:
    SqlFilterRulePattern();
    virtual ~SqlFilterRulePattern();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// SqlFilterRulePattern members

    /// <summary>
    /// SQL限流规则。
    /// </summary>

    std::string getPattern() const;
    bool patternIsSet() const;
    void unsetpattern();
    void setPattern(const std::string& value);

    /// <summary>
    /// 最大并发数。
    /// </summary>

    int32_t getMaxConcurrency() const;
    bool maxConcurrencyIsSet() const;
    void unsetmaxConcurrency();
    void setMaxConcurrency(int32_t value);


protected:
    std::string pattern_;
    bool patternIsSet_;
    int32_t maxConcurrency_;
    bool maxConcurrencyIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_SqlFilterRulePattern_H_
