
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowReplayDelayStatusResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowReplayDelayStatusResponse_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ShowReplayDelayStatusResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowReplayDelayStatusResponse();
    virtual ~ShowReplayDelayStatusResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowReplayDelayStatusResponse members

    /// <summary>
    /// 当前配置的延迟时间，单位ms
    /// </summary>

    int32_t getCurDelayTimeMills() const;
    bool curDelayTimeMillsIsSet() const;
    void unsetcurDelayTimeMills();
    void setCurDelayTimeMills(int32_t value);

    /// <summary>
    /// 延迟时间参数取值范围
    /// </summary>

    std::string getDelayTimeValueRange() const;
    bool delayTimeValueRangeIsSet() const;
    void unsetdelayTimeValueRange();
    void setDelayTimeValueRange(const std::string& value);

    /// <summary>
    /// 真实延迟时间，单位ms
    /// </summary>

    int32_t getRealDelayTimeMills() const;
    bool realDelayTimeMillsIsSet() const;
    void unsetrealDelayTimeMills();
    void setRealDelayTimeMills(int32_t value);

    /// <summary>
    /// 当前日志回放状态。true表示回放暂停，false表示回放正常
    /// </summary>

    bool isCurLogReplayPaused() const;
    bool curLogReplayPausedIsSet() const;
    void unsetcurLogReplayPaused();
    void setCurLogReplayPaused(bool value);

    /// <summary>
    /// 最新接收的日志
    /// </summary>

    std::string getLatestReceiveLog() const;
    bool latestReceiveLogIsSet() const;
    void unsetlatestReceiveLog();
    void setLatestReceiveLog(const std::string& value);

    /// <summary>
    /// 最新回放的日志位点
    /// </summary>

    std::string getLatestReplayLog() const;
    bool latestReplayLogIsSet() const;
    void unsetlatestReplayLog();
    void setLatestReplayLog(const std::string& value);


protected:
    int32_t curDelayTimeMills_;
    bool curDelayTimeMillsIsSet_;
    std::string delayTimeValueRange_;
    bool delayTimeValueRangeIsSet_;
    int32_t realDelayTimeMills_;
    bool realDelayTimeMillsIsSet_;
    bool curLogReplayPaused_;
    bool curLogReplayPausedIsSet_;
    std::string latestReceiveLog_;
    bool latestReceiveLogIsSet_;
    std::string latestReplayLog_;
    bool latestReplayLogIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowReplayDelayStatusResponse_H_
