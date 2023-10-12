
#ifndef HUAWEICLOUD_SDK_LIVE_V2_MODEL_ListTranscodeDataResponse_H_
#define HUAWEICLOUD_SDK_LIVE_V2_MODEL_ListTranscodeDataResponse_H_


#include <huaweicloud/live/v2/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/live/v2/model/TranscodeData.h>
#include <string>
#include <vector>
#include <huaweicloud/live/v2/model/TranscodeSummary.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_LIVE_V2_EXPORT  ListTranscodeDataResponse
    : public ModelBase, public HttpResponse
{
public:
    ListTranscodeDataResponse();
    virtual ~ListTranscodeDataResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListTranscodeDataResponse members

    /// <summary>
    /// 采样数据列表。
    /// </summary>

    std::vector<TranscodeData>& getTranscodeDataList();
    bool transcodeDataListIsSet() const;
    void unsettranscodeDataList();
    void setTranscodeDataList(const std::vector<TranscodeData>& value);

    /// <summary>
    /// 指定时间区间内各转码规格转码时长总和。
    /// </summary>

    std::vector<TranscodeSummary>& getSummaryList();
    bool summaryListIsSet() const;
    void unsetsummaryList();
    void setSummaryList(const std::vector<TranscodeSummary>& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXRequestId() const;
    bool xRequestIdIsSet() const;
    void unsetxRequestId();
    void setXRequestId(const std::string& value);


protected:
    std::vector<TranscodeData> transcodeDataList_;
    bool transcodeDataListIsSet_;
    std::vector<TranscodeSummary> summaryList_;
    bool summaryListIsSet_;
    std::string xRequestId_;
    bool xRequestIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V2_MODEL_ListTranscodeDataResponse_H_
