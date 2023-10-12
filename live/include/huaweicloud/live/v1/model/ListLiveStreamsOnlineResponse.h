
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_ListLiveStreamsOnlineResponse_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_ListLiveStreamsOnlineResponse_H_


#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/live/v1/model/OnlineInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  ListLiveStreamsOnlineResponse
    : public ModelBase, public HttpResponse
{
public:
    ListLiveStreamsOnlineResponse();
    virtual ~ListLiveStreamsOnlineResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListLiveStreamsOnlineResponse members

    /// <summary>
    /// 总条页数
    /// </summary>

    int64_t getTotalPage() const;
    bool totalPageIsSet() const;
    void unsettotalPage();
    void setTotalPage(int64_t value);

    /// <summary>
    /// 总条目数
    /// </summary>

    int64_t getTotalNum() const;
    bool totalNumIsSet() const;
    void unsettotalNum();
    void setTotalNum(int64_t value);

    /// <summary>
    /// 偏移量
    /// </summary>

    int64_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int64_t value);

    /// <summary>
    /// 每页条目数
    /// </summary>

    int64_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int64_t value);

    /// <summary>
    /// 请求唯一标识
    /// </summary>

    std::string getRequestId() const;
    bool requestIdIsSet() const;
    void unsetrequestId();
    void setRequestId(const std::string& value);

    /// <summary>
    /// 推流统计
    /// </summary>

    std::vector<OnlineInfo>& getStreams();
    bool streamsIsSet() const;
    void unsetstreams();
    void setStreams(const std::vector<OnlineInfo>& value);


protected:
    int64_t totalPage_;
    bool totalPageIsSet_;
    int64_t totalNum_;
    bool totalNumIsSet_;
    int64_t offset_;
    bool offsetIsSet_;
    int64_t limit_;
    bool limitIsSet_;
    std::string requestId_;
    bool requestIdIsSet_;
    std::vector<OnlineInfo> streams_;
    bool streamsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_ListLiveStreamsOnlineResponse_H_
