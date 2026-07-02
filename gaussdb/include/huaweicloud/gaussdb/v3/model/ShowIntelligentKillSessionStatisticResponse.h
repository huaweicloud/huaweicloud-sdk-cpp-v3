
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowIntelligentKillSessionStatisticResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowIntelligentKillSessionStatisticResponse_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/IntelligentKillSessionStatistic.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ShowIntelligentKillSessionStatisticResponse
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
    /// **参数解释**：  预览智能Kill会话结果列表。
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

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowIntelligentKillSessionStatisticResponse_H_
