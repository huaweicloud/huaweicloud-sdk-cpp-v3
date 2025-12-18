
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_RestMuteReqBody_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_RestMuteReqBody_H_


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
/// 全场静音请求。
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  RestMuteReqBody
    : public ModelBase
{
public:
    RestMuteReqBody();
    virtual ~RestMuteReqBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RestMuteReqBody members

    /// <summary>
    /// - 0: 取消静音 - 1: 静音
    /// </summary>

    int32_t getIsMute() const;
    bool isMuteIsSet() const;
    void unsetisMute();
    void setIsMute(int32_t value);

    /// <summary>
    /// 是否允许自己解除静音（仅静音时有效），默认为允许。 - 0: 不允许 - 1: 允许
    /// </summary>

    int32_t getAllowUnmuteByOneself() const;
    bool allowUnmuteByOneselfIsSet() const;
    void unsetallowUnmuteByOneself();
    void setAllowUnmuteByOneself(int32_t value);


protected:
    int32_t isMute_;
    bool isMuteIsSet_;
    int32_t allowUnmuteByOneself_;
    bool allowUnmuteByOneselfIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_RestMuteReqBody_H_
