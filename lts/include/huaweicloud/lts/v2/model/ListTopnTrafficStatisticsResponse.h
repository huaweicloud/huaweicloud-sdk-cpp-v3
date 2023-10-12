
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_ListTopnTrafficStatisticsResponse_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_ListTopnTrafficStatisticsResponse_H_


#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/lts/v2/model/ResultsTopnBody.h>
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
class HUAWEICLOUD_LTS_V2_EXPORT  ListTopnTrafficStatisticsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListTopnTrafficStatisticsResponse();
    virtual ~ListTopnTrafficStatisticsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListTopnTrafficStatisticsResponse members

    /// <summary>
    /// 响应结果
    /// </summary>

    std::vector<ResultsTopnBody>& getResults();
    bool resultsIsSet() const;
    void unsetresults();
    void setResults(const std::vector<ResultsTopnBody>& value);


protected:
    std::vector<ResultsTopnBody> results_;
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

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_ListTopnTrafficStatisticsResponse_H_
