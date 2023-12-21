
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_ListAssetDailySummaryLogResponse_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_ListAssetDailySummaryLogResponse_H_


#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vod/v1/model/AssetDailySummaryResult.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_VOD_V1_EXPORT  ListAssetDailySummaryLogResponse
    : public ModelBase, public HttpResponse
{
public:
    ListAssetDailySummaryLogResponse();
    virtual ~ListAssetDailySummaryLogResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListAssetDailySummaryLogResponse members

    /// <summary>
    /// 记录总数 
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);

    /// <summary>
    /// 日志文件列表 
    /// </summary>

    std::vector<AssetDailySummaryResult>& getSummaryResults();
    bool summaryResultsIsSet() const;
    void unsetsummaryResults();
    void setSummaryResults(const std::vector<AssetDailySummaryResult>& value);


protected:
    int32_t total_;
    bool totalIsSet_;
    std::vector<AssetDailySummaryResult> summaryResults_;
    bool summaryResultsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_ListAssetDailySummaryLogResponse_H_
