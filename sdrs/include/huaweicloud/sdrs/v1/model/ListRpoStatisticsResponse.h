
#ifndef HUAWEICLOUD_SDK_SDRS_V1_MODEL_ListRpoStatisticsResponse_H_
#define HUAWEICLOUD_SDK_SDRS_V1_MODEL_ListRpoStatisticsResponse_H_


#include <huaweicloud/sdrs/v1/SdrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/sdrs/v1/model/RpoStattisticsParams.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_SDRS_V1_EXPORT  ListRpoStatisticsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListRpoStatisticsResponse();
    virtual ~ListRpoStatisticsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListRpoStatisticsResponse members

    /// <summary>
    /// 资源的RPO超标趋势记录列表。
    /// </summary>

    std::vector<RpoStattisticsParams>& getResourceRpoStatistics();
    bool resourceRpoStatisticsIsSet() const;
    void unsetresourceRpoStatistics();
    void setResourceRpoStatistics(const std::vector<RpoStattisticsParams>& value);

    /// <summary>
    /// 列表中包含的资源的RPO超标趋势记录个数。
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);


protected:
    std::vector<RpoStattisticsParams> resourceRpoStatistics_;
    bool resourceRpoStatisticsIsSet_;
    int32_t count_;
    bool countIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SDRS_V1_MODEL_ListRpoStatisticsResponse_H_
