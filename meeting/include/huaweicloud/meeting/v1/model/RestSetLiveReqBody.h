
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_RestSetLiveReqBody_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_RestSetLiveReqBody_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 启停会议直播请求。
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  RestSetLiveReqBody
    : public ModelBase
{
public:
    RestSetLiveReqBody();
    virtual ~RestSetLiveReqBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RestSetLiveReqBody members

    /// <summary>
    /// 会议直播开关。默认值为0。 - 0: 停止会议直播 - 1: 启动会议直播
    /// </summary>

    int32_t getIsLive() const;
    bool isLiveIsSet() const;
    void unsetisLive();
    void setIsLive(int32_t value);


protected:
    int32_t isLive_;
    bool isLiveIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_RestSetLiveReqBody_H_
