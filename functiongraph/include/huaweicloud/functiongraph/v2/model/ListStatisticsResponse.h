
#ifndef HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ListStatisticsResponse_H_
#define HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ListStatisticsResponse_H_


#include <huaweicloud/functiongraph/v2/FunctionGraphExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/functiongraph/v2/model/MonthUsed.h>
#include <huaweicloud/functiongraph/v2/model/ListFunctionStatisticsResponseBody.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_FUNCTIONGRAPH_V2_EXPORT  ListStatisticsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListStatisticsResponse();
    virtual ~ListStatisticsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListStatisticsResponse members

    /// <summary>
    /// 月度调用次数
    /// </summary>

    std::vector<MonthUsed>& getCount();
    bool countIsSet() const;
    void unsetcount();
    void setCount(const std::vector<MonthUsed>& value);

    /// <summary>
    /// 月度资源用量
    /// </summary>

    std::vector<MonthUsed>& getGbs();
    bool gbsIsSet() const;
    void unsetgbs();
    void setGbs(const std::vector<MonthUsed>& value);

    /// <summary>
    /// 月度gpu资源用量
    /// </summary>

    std::vector<MonthUsed>& getGpuGbs();
    bool gpuGbsIsSet() const;
    void unsetgpuGbs();
    void setGpuGbs(const std::vector<MonthUsed>& value);

    /// <summary>
    /// 
    /// </summary>

    ListFunctionStatisticsResponseBody getStatistics() const;
    bool statisticsIsSet() const;
    void unsetstatistics();
    void setStatistics(const ListFunctionStatisticsResponseBody& value);


protected:
    std::vector<MonthUsed> count_;
    bool countIsSet_;
    std::vector<MonthUsed> gbs_;
    bool gbsIsSet_;
    std::vector<MonthUsed> gpuGbs_;
    bool gpuGbsIsSet_;
    ListFunctionStatisticsResponseBody statistics_;
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

#endif // HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ListStatisticsResponse_H_
