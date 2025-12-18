
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_RestSwitchModeReqBody_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_RestSwitchModeReqBody_H_


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
/// 切换会议显示策略请求。
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  RestSwitchModeReqBody
    : public ModelBase
{
public:
    RestSwitchModeReqBody();
    virtual ~RestSwitchModeReqBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RestSwitchModeReqBody members

    /// <summary>
    /// 会议显示策略。 - Fixed: 固定广播与会者 - VAS: 声控切换
    /// </summary>

    std::string getSwitchMode() const;
    bool switchModeIsSet() const;
    void unsetswitchMode();
    void setSwitchMode(const std::string& value);

    /// <summary>
    /// 画面类型。单画面设置只针对声控模式。 - 0: 单画面 - 1: 多画面
    /// </summary>

    int32_t getImageType() const;
    bool imageTypeIsSet() const;
    void unsetimageType();
    void setImageType(int32_t value);


protected:
    std::string switchMode_;
    bool switchModeIsSet_;
    int32_t imageType_;
    bool imageTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_RestSwitchModeReqBody_H_
