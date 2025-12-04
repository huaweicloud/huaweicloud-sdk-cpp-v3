
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowIntelligentKillSessionStatisticResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowIntelligentKillSessionStatisticResponse_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/IntelligentKillSessionStatistic.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ShowIntelligentKillSessionStatisticResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowIntelligentKillSessionStatisticResponse();
    virtual ~ShowIntelligentKillSessionStatisticResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowIntelligentKillSessionStatisticResponse members

    /// <summary>
    /// **参数解释**：  不同维度下的统计信息。  **约束限制**：  不涉及。
    /// </summary>

    std::vector<IntelligentKillSessionStatistic>& getStatistics();
    bool statisticsIsSet() const;
    void unsetstatistics();
    void setStatistics(const std::vector<IntelligentKillSessionStatistic>& value);


protected:
    std::vector<IntelligentKillSessionStatistic> statistics_;
    bool statisticsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowIntelligentKillSessionStatisticResponse_H_
