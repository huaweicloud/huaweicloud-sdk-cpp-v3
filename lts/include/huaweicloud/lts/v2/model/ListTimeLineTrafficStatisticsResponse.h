
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_ListTimeLineTrafficStatisticsResponse_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_ListTimeLineTrafficStatisticsResponse_H_

#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/lts/v2/model/Resulits.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  ListTimeLineTrafficStatisticsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListTimeLineTrafficStatisticsResponse();
    virtual ~ListTimeLineTrafficStatisticsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListTimeLineTrafficStatisticsResponse members

    /// <summary>
    /// 响应结果
    /// </summary>

    std::vector<Resulits>& getResults();
    bool resultsIsSet() const;
    void unsetresults();
    void setResults(const std::vector<Resulits>& value);


protected:
    std::vector<Resulits> results_;
    bool resultsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_ListTimeLineTrafficStatisticsResponse_H_
