
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_SqlRuleRequest_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_SqlRuleRequest_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  SqlRuleRequest
    : public ModelBase
{
public:
    SqlRuleRequest();
    virtual ~SqlRuleRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SqlRuleRequest members

    /// <summary>
    /// 当前页
    /// </summary>

    int32_t getPage() const;
    bool pageIsSet() const;
    void unsetpage();
    void setPage(int32_t value);

    /// <summary>
    /// 每页大小
    /// </summary>

    int32_t getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(int32_t value);

    /// <summary>
    /// 风险级别 - HIGH：高 - MEDIUM：中 - LOW：低 - NO_RISK：无风险
    /// </summary>

    std::string getRiskLevels() const;
    bool riskLevelsIsSet() const;
    void unsetriskLevels();
    void setRiskLevels(const std::string& value);


protected:
    int32_t page_;
    bool pageIsSet_;
    int32_t size_;
    bool sizeIsSet_;
    std::string riskLevels_;
    bool riskLevelsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_SqlRuleRequest_H_
