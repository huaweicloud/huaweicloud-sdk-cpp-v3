
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_ListOttChannelInfoResponse_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_ListOttChannelInfoResponse_H_


#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/live/v1/model/CreateOttChannelInfoReq.h>
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
class HUAWEICLOUD_LIVE_V1_EXPORT  ListOttChannelInfoResponse
    : public ModelBase, public HttpResponse
{
public:
    ListOttChannelInfoResponse();
    virtual ~ListOttChannelInfoResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListOttChannelInfoResponse members

    /// <summary>
    /// 总频道数
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);

    /// <summary>
    /// 频道信息
    /// </summary>

    std::vector<CreateOttChannelInfoReq>& getChannels();
    bool channelsIsSet() const;
    void unsetchannels();
    void setChannels(const std::vector<CreateOttChannelInfoReq>& value);


protected:
    int32_t total_;
    bool totalIsSet_;
    std::vector<CreateOttChannelInfoReq> channels_;
    bool channelsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_ListOttChannelInfoResponse_H_
