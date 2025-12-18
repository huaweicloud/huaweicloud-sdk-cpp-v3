
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_RealTimeAttendee_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_RealTimeAttendee_H_


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
/// 被邀请与会者信息。
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  RealTimeAttendee
    : public ModelBase
{
public:
    RealTimeAttendee();
    virtual ~RealTimeAttendee();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RealTimeAttendee members

    /// <summary>
    /// 与会者的华为云会议帐号。
    /// </summary>

    std::string getAccountID() const;
    bool accountIDIsSet() const;
    void unsetaccountID();
    void setAccountID(const std::string& value);

    /// <summary>
    /// 与会者的用户UUID。
    /// </summary>

    std::string getUserUUID() const;
    bool userUUIDIsSet() const;
    void unsetuserUUID();
    void setUserUUID(const std::string& value);

    /// <summary>
    /// 与会者名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 与会者号码。
    /// </summary>

    std::string getPhone() const;
    bool phoneIsSet() const;
    void unsetphone();
    void setPhone(const std::string& value);

    /// <summary>
    /// 设备为三屏智真时的左屏号码。 &gt; 该参数将废弃，请勿使用。 
    /// </summary>

    std::string getPhoneLeft() const;
    bool phoneLeftIsSet() const;
    void unsetphoneLeft();
    void setPhoneLeft(const std::string& value);

    /// <summary>
    /// 设备为三屏智真时的右屏号码。 &gt; 该参数将废弃，请勿使用。 
    /// </summary>

    std::string getPhoneRight() const;
    bool phoneRightIsSet() const;
    void unsetphoneRight();
    void setPhoneRight(const std::string& value);


protected:
    std::string accountID_;
    bool accountIDIsSet_;
    std::string userUUID_;
    bool userUUIDIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string phone_;
    bool phoneIsSet_;
    std::string phoneLeft_;
    bool phoneLeftIsSet_;
    std::string phoneRight_;
    bool phoneRightIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_RealTimeAttendee_H_
