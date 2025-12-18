
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_RestAllowUnMuteReqBody_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_RestAllowUnMuteReqBody_H_


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
/// 与会者自己解除静音请求。
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  RestAllowUnMuteReqBody
    : public ModelBase
{
public:
    RestAllowUnMuteReqBody();
    virtual ~RestAllowUnMuteReqBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RestAllowUnMuteReqBody members

    /// <summary>
    /// 是否允许自己解除静音（仅静音时有效），默认为允许。 - 0: 不允许 - 1: 允许
    /// </summary>

    int32_t getAllowUnmuteByOneself() const;
    bool allowUnmuteByOneselfIsSet() const;
    void unsetallowUnmuteByOneself();
    void setAllowUnmuteByOneself(int32_t value);


protected:
    int32_t allowUnmuteByOneself_;
    bool allowUnmuteByOneselfIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_RestAllowUnMuteReqBody_H_
