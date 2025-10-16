#ifndef HUAWEICLOUD_SDK_LIVE_V2_LiveClient_H_
#define HUAWEICLOUD_SDK_LIVE_V2_LiveClient_H_

#include <huaweicloud/live/v2/LiveExport.h>
#include <huaweicloud/core/Client.h>
#include <huaweicloud/core/ClientBuilder.h>


#include <huaweicloud/live/v2/model/ListAreaDetailRequest.h>
#include <huaweicloud/live/v2/model/ListAreaDetailResponse.h>
#include <huaweicloud/live/v2/model/ListBandwidthDetailRequest.h>
#include <huaweicloud/live/v2/model/ListBandwidthDetailResponse.h>
#include <huaweicloud/live/v2/model/ListDomainBandwidthPeakRequest.h>
#include <huaweicloud/live/v2/model/ListDomainBandwidthPeakResponse.h>
#include <huaweicloud/live/v2/model/ListDomainTrafficDetailRequest.h>
#include <huaweicloud/live/v2/model/ListDomainTrafficDetailResponse.h>
#include <huaweicloud/live/v2/model/ListDomainTrafficSummaryRequest.h>
#include <huaweicloud/live/v2/model/ListDomainTrafficSummaryResponse.h>
#include <huaweicloud/live/v2/model/ListHistoryStreamsRequest.h>
#include <huaweicloud/live/v2/model/ListHistoryStreamsResponse.h>
#include <huaweicloud/live/v2/model/ListPlayDomainStreamInfoRequest.h>
#include <huaweicloud/live/v2/model/ListPlayDomainStreamInfoResponse.h>
#include <huaweicloud/live/v2/model/ListQueryHttpCodeRequest.h>
#include <huaweicloud/live/v2/model/ListQueryHttpCodeResponse.h>
#include <huaweicloud/live/v2/model/ListRecordDataRequest.h>
#include <huaweicloud/live/v2/model/ListRecordDataResponse.h>
#include <huaweicloud/live/v2/model/ListSnapshotDataRequest.h>
#include <huaweicloud/live/v2/model/ListSnapshotDataResponse.h>
#include <huaweicloud/live/v2/model/ListTranscodeConcurrencyNumRequest.h>
#include <huaweicloud/live/v2/model/ListTranscodeConcurrencyNumResponse.h>
#include <huaweicloud/live/v2/model/ListTranscodeDataRequest.h>
#include <huaweicloud/live/v2/model/ListTranscodeDataResponse.h>
#include <huaweicloud/live/v2/model/ListUsersOfStreamRequest.h>
#include <huaweicloud/live/v2/model/ListUsersOfStreamResponse.h>
#include <huaweicloud/live/v2/model/ShowStreamCountRequest.h>
#include <huaweicloud/live/v2/model/ShowStreamCountResponse.h>
#include <huaweicloud/live/v2/model/ShowStreamPortraitRequest.h>
#include <huaweicloud/live/v2/model/ShowStreamPortraitResponse.h>
#include <huaweicloud/live/v2/model/ShowUpBandwidthRequest.h>
#include <huaweicloud/live/v2/model/ShowUpBandwidthResponse.h>
#include <string>

#include <huaweicloud/live/v2/model/ListSingleStreamBitrateRequest.h>
#include <huaweicloud/live/v2/model/ListSingleStreamBitrateResponse.h>
#include <huaweicloud/live/v2/model/ListSingleStreamDetailRequest.h>
#include <huaweicloud/live/v2/model/ListSingleStreamDetailResponse.h>
#include <huaweicloud/live/v2/model/ListSingleStreamFramerateRequest.h>
#include <huaweicloud/live/v2/model/ListSingleStreamFramerateResponse.h>
#include <huaweicloud/live/v2/model/ListUpStreamDetailRequest.h>
#include <huaweicloud/live/v2/model/ListUpStreamDetailResponse.h>
#include <string>

#include <cpprest/details/basic_types.h>
#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Object.h>
#undef U
#include <boost/optional.hpp>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V2 {

using namespace HuaweiCloud::Sdk::Core;
using namespace HuaweiCloud::Sdk::Live::V2::Model;

class HUAWEICLOUD_LIVE_V2_EXPORT  LiveClient : public Client
{
public:

    LiveClient();

    virtual ~LiveClient();

    static ClientBuilder<LiveClient> newBuilder();

    // 查询直播各区域指标分布接口
    //
    // 查询直播全球区域维度的详细数据接口。
    // 
    // 如果不传入域名，则查询租户下所有播放域名的详细数据。
    // 
    // 当查询租户级别数据时，参数app、stream不生效。
    // 
    // 最大查询跨度1天，最大查询周期90天。
    // 
    // 支持查询当天，当前数据延时少于5分钟。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAreaDetailResponse> listAreaDetail(
        ListAreaDetailRequest &request
    );
    // 查询播放带宽趋势接口
    //
    // 查询播放域名带宽数据。
    // 
    // 如果不传入域名，则查询租户下所有播放域名的带宽数据。
    // 
    // 当查询租户级别带宽数据时，参数app、stream不生效。
    // 
    // 最大查询跨度31天，最大查询周期一年。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListBandwidthDetailResponse> listBandwidthDetail(
        ListBandwidthDetailRequest &request
    );
    // 查询播放带宽峰值接口
    //
    // 查询指定时间范围内播放带宽峰值。
    // 
    // 如果不传入域名，则查询租户下所有播放域名的带宽峰值。
    // 
    // 当查询租户级别带宽数据时，参数app、stream不生效。
    // 
    // 最大查询跨度31天，最大查询周期一年。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListDomainBandwidthPeakResponse> listDomainBandwidthPeak(
        ListDomainBandwidthPeakRequest &request
    );
    // 查询播放流量趋势接口
    //
    // 查询播放域名流量数据。
    // 
    // 如果不传入域名，则查询租户下所有播放域名的流量数据。
    // 
    // 当查询租户级别流量数据时，参数app、stream不生效。
    // 
    // 最大查询跨度31天，最大查询周期一年。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListDomainTrafficDetailResponse> listDomainTrafficDetail(
        ListDomainTrafficDetailRequest &request
    );
    // 查询播放流量汇总接口
    //
    // 查询指定时间范围内流量汇总量。
    // 
    // 如果不传入域名，则查询租户下所有播放域名的流量汇总量。
    // 
    // 当查询租户级别流量数据时，参数app、stream不生效。
    // 
    // 最大查询跨度31天，最大查询周期一年。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListDomainTrafficSummaryResponse> listDomainTrafficSummary(
        ListDomainTrafficSummaryRequest &request
    );
    // 查询历史推流列表接口
    //
    // 查询历史推流列表。
    // 
    // 不能查询现推流。
    // 
    // 最大查询跨度1天。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListHistoryStreamsResponse> listHistoryStreams(
        ListHistoryStreamsRequest &request
    );
    // 查询播放域名下的流数据
    //
    // 查询播放域名下的监控数据，根据输入时间点，返回查询该时间点所有流的带宽、在线人数、协议。
    // 返回的数据粒度为1分钟。
    // 最大查询周期7天，数据延迟5分钟。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListPlayDomainStreamInfoResponse> listPlayDomainStreamInfo(
        ListPlayDomainStreamInfoRequest &request
    );
    // 查询直播拉流HTTP状态码接口
    //
    // 查询直播拉流HTTP状态码接口。  获取加速域名1分钟粒度的HTTP返回码  最大查询跨度不能超过24小时，最大查询周期7天。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListQueryHttpCodeResponse> listQueryHttpCode(
        ListQueryHttpCodeRequest &request
    );
    // 查询录制用量接口
    //
    // 查询直播租户每小时录制的最大并发数，计算1小时内每分钟的并发总路数，取最大值做为统计值。  最大查询跨度31天，最大查询周期90天。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListRecordDataResponse> listRecordData(
        ListRecordDataRequest &request
    );
    // 查询截图用量接口
    //
    // 查询直播域名每小时的截图数量。  最大查询跨度31天，最大查询周期90天。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListSnapshotDataResponse> listSnapshotData(
        ListSnapshotDataRequest &request
    );
    // 查询推流域名转码路数
    //
    // 查询推流域名下的转码路数，根据输入时间点和时间粒度，返回转码路数。
    // 最大查询跨度1天，最大查询周期90天，数据延迟5分钟。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListTranscodeConcurrencyNumResponse> listTranscodeConcurrencyNum(
        ListTranscodeConcurrencyNumRequest &request
    );
    // 查询转码用量接口
    //
    // 查询直播域名每小时的转码时长数据。  最大查询跨度31天，最大查询周期90天。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListTranscodeDataResponse> listTranscodeData(
        ListTranscodeDataRequest &request
    );
    // 查询观众趋势接口
    //
    // 查询观众趋势。  最大查询跨度31天，最大查询周期一年。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListUsersOfStreamResponse> listUsersOfStream(
        ListUsersOfStreamRequest &request
    );
    // 查询域名维度推流路数接口
    //
    // 查询域名维度推流路数接口。  最大查询跨度31天，最大查询周期1年。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowStreamCountResponse> showStreamCount(
        ShowStreamCountRequest &request
    );
    // 查询播放画像信息接口
    //
    // 查询播放画像信息。  最大查询跨度1天，最大查询周期31天。
    // 不统计协议为HLS的播放时长（play_duration）信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowStreamPortraitResponse> showStreamPortrait(
        ShowStreamPortraitRequest &request
    );
    // 查询上行带宽数据接口
    //
    // 查询上行带宽数据。  最大查询跨度31天，最大查询周期1年。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowUpBandwidthResponse> showUpBandwidth(
        ShowUpBandwidthRequest &request
    );

    // 查询推流码率数据接口
    //
    // 查询推流监控码率数据接口。
    // 
    // 最大查询跨度1天，最大查询周期1个月。
    // 
    // 返回的码率数据列表粒度为1秒钟。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListSingleStreamBitrateResponse> listSingleStreamBitrate(
        ListSingleStreamBitrateRequest &request
    );
    // 查询推流监控数据接口
    //
    // 查询流监控数据接口，包括帧率码率断流情况。
    // 
    // 最大查询跨度1天，最大查询周期1个月。
    // 
    // 返回的码率数据列表粒度为1秒钟。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListSingleStreamDetailResponse> listSingleStreamDetail(
        ListSingleStreamDetailRequest &request
    );
    // 查询推流帧率数据接口
    //
    // 查询推流帧率数据接口。
    // 
    // 最大查询跨度1天，最大查询周期1个月。
    // 
    // 返回的帧率数据列表粒度为1秒钟。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListSingleStreamFramerateResponse> listSingleStreamFramerate(
        ListSingleStreamFramerateRequest &request
    );
    // 查询CDN上行推流质量数据接口
    //
    // 查询CDN上行推流质量数据。
    // 
    // 最大查询跨度1天，最大查询周期7天。
    // 
    // 返回的CDN上行推流质量数据列表粒度为1分钟。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListUpStreamDetailResponse> listUpStreamDetail(
        ListUpStreamDetailRequest &request
    );


private:
#if defined(WIN32) || defined(__WIN32__) || defined(_WIN32) || defined(_MSC_VER)
    std::string parameterToString(utility::string_t value);
#endif
    std::string parameterToString(std::string value);
    std::string parameterToString(int32_t value);
    std::string parameterToString(int64_t value);
    std::string parameterToString(float value);
    std::string parameterToString(double value);
    std::string parameterToString(const Object& obj);
    std::string parameterToString(const utility::datetime &value);

    template<class T>
    std::string parameterToString(const std::vector<T> &value)
    {
        std::stringstream ss;
        for( size_t i = 0; i < value.size(); i++)
        {
            if (i > 0) {
                ss << ", ";
            }
            ss << parameterToString(value[i]);
        }

    return ss.str();
    }

    template<class T>
    std::string parameterToString(const std::shared_ptr<T> &value)
    {
        return parameterToString(*value.get());
    }

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};

}
}
}
}

template class HUAWEICLOUD_LIVE_V2_EXPORT ::HuaweiCloud::Sdk::Core::ClientBuilder<::HuaweiCloud::Sdk::Live::V2::LiveClient>;

#endif // HUAWEICLOUD_SDK_LIVE_V2_LiveClient_H_

