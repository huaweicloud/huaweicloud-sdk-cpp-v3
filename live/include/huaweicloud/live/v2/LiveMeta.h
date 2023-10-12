#ifndef HUAWEICLOUD_SDK_LIVE_V2_LiveMeta_H_
#define HUAWEICLOUD_SDK_LIVE_V2_LiveMeta_H_

#include <huaweicloud/core/http/HttpRequestDef.h>
#include <huaweicloud/live/v2/LiveExport.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V2 {

using namespace HuaweiCloud::Sdk::Core::Http;

class HUAWEICLOUD_LIVE_V2_EXPORT  LiveMeta {
public:
    static HttpRequestDef genRequestDefForListAreaDetail();
    static HttpRequestDef genRequestDefForListBandwidthDetail();
    static HttpRequestDef genRequestDefForListDomainBandwidthPeak();
    static HttpRequestDef genRequestDefForListDomainTrafficDetail();
    static HttpRequestDef genRequestDefForListDomainTrafficSummary();
    static HttpRequestDef genRequestDefForListHistoryStreams();
    static HttpRequestDef genRequestDefForListQueryHttpCode();
    static HttpRequestDef genRequestDefForListRecordData();
    static HttpRequestDef genRequestDefForListSnapshotData();
    static HttpRequestDef genRequestDefForListTranscodeData();
    static HttpRequestDef genRequestDefForListUsersOfStream();
    static HttpRequestDef genRequestDefForShowStreamCount();
    static HttpRequestDef genRequestDefForShowStreamPortrait();
    static HttpRequestDef genRequestDefForShowUpBandwidth();
    static HttpRequestDef genRequestDefForListSingleStreamBitrate();
    static HttpRequestDef genRequestDefForListSingleStreamDetail();
    static HttpRequestDef genRequestDefForListSingleStreamFramerate();
    static HttpRequestDef genRequestDefForListUpStreamDetail();
};

}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V2_LiveMeta_H_
