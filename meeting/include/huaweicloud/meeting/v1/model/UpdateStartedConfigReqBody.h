
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_UpdateStartedConfigReqBody_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_UpdateStartedConfigReqBody_H_


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
/// 修改会议配置请求。
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  UpdateStartedConfigReqBody
    : public ModelBase
{
public:
    UpdateStartedConfigReqBody();
    virtual ~UpdateStartedConfigReqBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateStartedConfigReqBody members

    /// <summary>
    /// 锁定共享标志位。 * 0: 不锁定 * 1: 锁定 
    /// </summary>

    int32_t getLockSharing() const;
    bool lockSharingIsSet() const;
    void unsetlockSharing();
    void setLockSharing(int32_t value);

    /// <summary>
    /// 允许加入会议的范围。 - 0: 所有用户 - 2: 企业内用户 - 3: 被邀请用户 
    /// </summary>

    int32_t getCallInRestriction() const;
    bool callInRestrictionIsSet() const;
    void unsetcallInRestriction();
    void setCallInRestriction(int32_t value);

    /// <summary>
    /// 是否允许自己解除静音，默认为允许 - 0: 不允许 - 1: 允许 
    /// </summary>

    int32_t getAllowUnmuteByOneself() const;
    bool allowUnmuteByOneselfIsSet() const;
    void unsetallowUnmuteByOneself();
    void setAllowUnmuteByOneself(int32_t value);

    /// <summary>
    /// 会议聊天权限 1.全员禁止 2.仅允许私聊 3.仅允许公开聊天 4.允许自由聊天
    /// </summary>

    int32_t getChatPermission() const;
    bool chatPermissionIsSet() const;
    void unsetchatPermission();
    void setChatPermission(int32_t value);

    /// <summary>
    /// 网络研讨会观众允许呼入的范围 0：所有用户  2：企业内用户和被邀请用户
    /// </summary>

    int32_t getAudienceCallInRestriction() const;
    bool audienceCallInRestrictionIsSet() const;
    void unsetaudienceCallInRestriction();
    void setAudienceCallInRestriction(int32_t value);

    /// <summary>
    /// 客户端本地录制权限的范围，默认为仅主持人支持本地录制 - 0: 所有用户 - 1：全部人可录制 - 2：部分人可录制 
    /// </summary>

    int32_t getClientRecMode() const;
    bool clientRecModeIsSet() const;
    void unsetclientRecMode();
    void setClientRecMode(int32_t value);

    /// <summary>
    /// 与会人自行开启摄像头 0:禁止 1:允许
    /// </summary>

    int32_t getAllowOpenCamera() const;
    bool allowOpenCameraIsSet() const;
    void unsetallowOpenCamera();
    void setAllowOpenCamera(int32_t value);

    /// <summary>
    /// 是否允许与会人改名 0:不允许 1:允许
    /// </summary>

    int32_t getAllowRename() const;
    bool allowRenameIsSet() const;
    void unsetallowRename();
    void setAllowRename(int32_t value);

    /// <summary>
    /// 锁定会议 0：解锁 1：锁定
    /// </summary>

    int32_t getIsLock() const;
    bool isLockIsSet() const;
    void unsetisLock();
    void setIsLock(int32_t value);

    /// <summary>
    /// 抢共享权限设置 0:仅主持人/联席 1:所有人可抢共享
    /// </summary>

    int32_t getFreeShare() const;
    bool freeShareIsSet() const;
    void unsetfreeShare();
    void setFreeShare(int32_t value);


protected:
    int32_t lockSharing_;
    bool lockSharingIsSet_;
    int32_t callInRestriction_;
    bool callInRestrictionIsSet_;
    int32_t allowUnmuteByOneself_;
    bool allowUnmuteByOneselfIsSet_;
    int32_t chatPermission_;
    bool chatPermissionIsSet_;
    int32_t audienceCallInRestriction_;
    bool audienceCallInRestrictionIsSet_;
    int32_t clientRecMode_;
    bool clientRecModeIsSet_;
    int32_t allowOpenCamera_;
    bool allowOpenCameraIsSet_;
    int32_t allowRename_;
    bool allowRenameIsSet_;
    int32_t isLock_;
    bool isLockIsSet_;
    int32_t freeShare_;
    bool freeShareIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_UpdateStartedConfigReqBody_H_
