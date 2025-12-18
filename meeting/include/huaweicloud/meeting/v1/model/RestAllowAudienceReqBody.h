
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_RestAllowAudienceReqBody_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_RestAllowAudienceReqBody_H_


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
/// 主持人允许观众入会入会请求消息体
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  RestAllowAudienceReqBody
    : public ModelBase
{
public:
    RestAllowAudienceReqBody();
    virtual ~RestAllowAudienceReqBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RestAllowAudienceReqBody members

    /// <summary>
    /// 主持人是否允许入会 1：允许入会
    /// </summary>

    int32_t getAllowAudience() const;
    bool allowAudienceIsSet() const;
    void unsetallowAudience();
    void setAllowAudience(int32_t value);


protected:
    int32_t allowAudience_;
    bool allowAudienceIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_RestAllowAudienceReqBody_H_
