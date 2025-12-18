
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_OnlineAttendeeRecordInfo_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_OnlineAttendeeRecordInfo_H_


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
/// 在线与会者信息
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  OnlineAttendeeRecordInfo
    : public ModelBase
{
public:
    OnlineAttendeeRecordInfo();
    virtual ~OnlineAttendeeRecordInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// OnlineAttendeeRecordInfo members

    /// <summary>
    /// 与会者标识
    /// </summary>

    std::string getParticipantId() const;
    bool participantIdIsSet() const;
    void unsetparticipantId();
    void setParticipantId(const std::string& value);

    /// <summary>
    /// 与会者名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 呼叫号码
    /// </summary>

    std::string getCallNumber() const;
    bool callNumberIsSet() const;
    void unsetcallNumber();
    void setCallNumber(const std::string& value);

    /// <summary>
    /// 会议中的角色，枚举值如下： 1：会议主席 0：普通与会者
    /// </summary>

    int32_t getRole() const;
    bool roleIsSet() const;
    void unsetrole();
    void setRole(int32_t value);

    /// <summary>
    /// 开放性场景标识第三方账号信息
    /// </summary>

    std::string getThirdAccount() const;
    bool thirdAccountIsSet() const;
    void unsetthirdAccount();
    void setThirdAccount(const std::string& value);

    /// <summary>
    /// 用户账号
    /// </summary>

    std::string getAccount() const;
    bool accountIsSet() const;
    void unsetaccount();
    void setAccount(const std::string& value);

    /// <summary>
    /// 用户UUID
    /// </summary>

    std::string getUserId() const;
    bool userIdIsSet() const;
    void unsetuserId();
    void setUserId(const std::string& value);


protected:
    std::string participantId_;
    bool participantIdIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string callNumber_;
    bool callNumberIsSet_;
    int32_t role_;
    bool roleIsSet_;
    std::string thirdAccount_;
    bool thirdAccountIsSet_;
    std::string account_;
    bool accountIsSet_;
    std::string userId_;
    bool userIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_OnlineAttendeeRecordInfo_H_
