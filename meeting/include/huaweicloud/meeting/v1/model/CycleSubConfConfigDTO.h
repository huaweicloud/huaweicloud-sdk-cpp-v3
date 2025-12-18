
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_CycleSubConfConfigDTO_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_CycleSubConfConfigDTO_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/meeting/v1/model/ShowAudienceCountInfo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  CycleSubConfConfigDTO
    : public ModelBase
{
public:
    CycleSubConfConfigDTO();
    virtual ~CycleSubConfConfigDTO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CycleSubConfConfigDTO members

    /// <summary>
    /// 允许加入会议的范围。 - 0: 所有用户 - 2: 企业内用户 - 3: 被邀请用户 
    /// </summary>

    int32_t getCallInRestriction() const;
    bool callInRestrictionIsSet() const;
    void unsetcallInRestriction();
    void setCallInRestriction(int32_t value);

    /// <summary>
    /// 允许加入网络研讨会的观众范围。 - 0：所有用户 - 2：企业内用户和被邀请用户 
    /// </summary>

    int32_t getAudienceCallInRestriction() const;
    bool audienceCallInRestrictionIsSet() const;
    void unsetaudienceCallInRestriction();
    void setAudienceCallInRestriction(int32_t value);

    /// <summary>
    /// 是否允许来宾启动会议。 - false:禁止来宾启动会议 - true：允许来宾启动会议 &gt; 仅随机会议ID的会议生效。 
    /// </summary>

    bool isAllowGuestStartConf() const;
    bool allowGuestStartConfIsSet() const;
    void unsetallowGuestStartConf();
    void setAllowGuestStartConf(bool value);

    /// <summary>
    /// 是否启用等候室。
    /// </summary>

    bool isEnableWaitingRoom() const;
    bool enableWaitingRoomIsSet() const;
    void unsetenableWaitingRoom();
    void setEnableWaitingRoom(bool value);

    /// <summary>
    /// 
    /// </summary>

    ShowAudienceCountInfo getShowAudienceCountInfo() const;
    bool showAudienceCountInfoIsSet() const;
    void unsetshowAudienceCountInfo();
    void setShowAudienceCountInfo(const ShowAudienceCountInfo& value);


protected:
    int32_t callInRestriction_;
    bool callInRestrictionIsSet_;
    int32_t audienceCallInRestriction_;
    bool audienceCallInRestrictionIsSet_;
    bool allowGuestStartConf_;
    bool allowGuestStartConfIsSet_;
    bool enableWaitingRoom_;
    bool enableWaitingRoomIsSet_;
    ShowAudienceCountInfo showAudienceCountInfo_;
    bool showAudienceCountInfoIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_CycleSubConfConfigDTO_H_
