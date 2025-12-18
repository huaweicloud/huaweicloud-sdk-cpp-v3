
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_RestChairViewReqBody_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_RestChairViewReqBody_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 主持人选看请求。
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  RestChairViewReqBody
    : public ModelBase
{
public:
    RestChairViewReqBody();
    virtual ~RestChairViewReqBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RestChairViewReqBody members

    /// <summary>
    /// 主持人观看的画面类型。 - 0: 主持人轮询 - 1: 主持人观看多画面 - 2: 主持人选看会场
    /// </summary>

    int32_t getViewType() const;
    bool viewTypeIsSet() const;
    void unsetviewType();
    void setViewType(int32_t value);

    /// <summary>
    /// 被主持人选看的会场。 当为主持人选看会场时为必填参数。
    /// </summary>

    std::string getParticipantID() const;
    bool participantIDIsSet() const;
    void unsetparticipantID();
    void setParticipantID(const std::string& value);

    /// <summary>
    /// 轮询间隔，单位：秒。 主持人轮询时，必填字段。 范围:[10-120]，默认值：10。
    /// </summary>

    int32_t getSwitchTime() const;
    bool switchTimeIsSet() const;
    void unsetswitchTime();
    void setSwitchTime(int32_t value);

    /// <summary>
    /// 启动/停止轮询。 主持人轮询时，必填字段。 - 0: 停止轮询 - 1: 启动轮询
    /// </summary>

    int32_t getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(int32_t value);


protected:
    int32_t viewType_;
    bool viewTypeIsSet_;
    std::string participantID_;
    bool participantIDIsSet_;
    int32_t switchTime_;
    bool switchTimeIsSet_;
    int32_t status_;
    bool statusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_RestChairViewReqBody_H_
