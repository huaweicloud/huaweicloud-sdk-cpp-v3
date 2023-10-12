
#ifndef HUAWEICLOUD_SDK_LIVE_V2_MODEL_ListHistoryStreamsResponse_H_
#define HUAWEICLOUD_SDK_LIVE_V2_MODEL_ListHistoryStreamsResponse_H_


#include <huaweicloud/live/v2/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/live/v2/model/HistoryStreamInfo.h>
#include <string>
#include <vector>

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
class HUAWEICLOUD_LIVE_V2_EXPORT  ListHistoryStreamsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListHistoryStreamsResponse();
    virtual ~ListHistoryStreamsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListHistoryStreamsResponse members

    /// <summary>
    /// 历史流信息列表。
    /// </summary>

    std::vector<HistoryStreamInfo>& getHistoryStreamList();
    bool historyStreamListIsSet() const;
    void unsethistoryStreamList();
    void setHistoryStreamList(const std::vector<HistoryStreamInfo>& value);

    /// <summary>
    /// 总记录数。
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXRequestId() const;
    bool xRequestIdIsSet() const;
    void unsetxRequestId();
    void setXRequestId(const std::string& value);


protected:
    std::vector<HistoryStreamInfo> historyStreamList_;
    bool historyStreamListIsSet_;
    int32_t total_;
    bool totalIsSet_;
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

#endif // HUAWEICLOUD_SDK_LIVE_V2_MODEL_ListHistoryStreamsResponse_H_
