
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_RankRiskRuleNew_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_RankRiskRuleNew_H_


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
class HUAWEICLOUD_DBSS_V1_EXPORT  RankRiskRuleNew
    : public ModelBase
{
public:
    RankRiskRuleNew();
    virtual ~RankRiskRuleNew();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RankRiskRuleNew members

    /// <summary>
    /// 规则ID
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 优先级序号，从1开始越小优先级越高
    /// </summary>

    int32_t getNewRank() const;
    bool newRankIsSet() const;
    void unsetnewRank();
    void setNewRank(int32_t value);


protected:
    std::string id_;
    bool idIsSet_;
    int32_t newRank_;
    bool newRankIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_RankRiskRuleNew_H_
