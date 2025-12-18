
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_PartAttendee_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_PartAttendee_H_


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
/// 部分与会者信息。
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  PartAttendee
    : public ModelBase
{
public:
    PartAttendee();
    virtual ~PartAttendee();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PartAttendee members

    /// <summary>
    /// 与会者名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 号码。SIP号码或者手机号码。
    /// </summary>

    std::string getPhone() const;
    bool phoneIsSet() const;
    void unsetphone();
    void setPhone(const std::string& value);

    /// <summary>
    /// 预留字段，取值类型同参数“phone”。
    /// </summary>

    std::string getPhone2() const;
    bool phone2IsSet() const;
    void unsetphone2();
    void setPhone2(const std::string& value);

    /// <summary>
    /// 预留字段，取值类型同参数“phone”。
    /// </summary>

    std::string getPhone3() const;
    bool phone3IsSet() const;
    void unsetphone3();
    void setPhone3(const std::string& value);

    /// <summary>
    /// 终端类型，类型枚举如下： * normal：软终端 * terminal：硬终端 * outside：外部与会人 * mobile：用户手机号码 * ideahub：ideahub * board: 电子白板（SmartRooms）。含Maxhub、海信大屏、IdeaHub B2hwvision：华为智慧屏TV
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 用户入会时是否需要自动静音 。默认不静音。 * 0： 不需要静音 * 1： 需要静音
    /// </summary>

    int32_t getRole() const;
    bool roleIsSet() const;
    void unsetrole();
    void setRole(int32_t value);

    /// <summary>
    /// 用户入会时是否需要自动静音。默认不静音。 * 0: 不需要静音。 * 1: 需要静音。
    /// </summary>

    int32_t getIsMute() const;
    bool isMuteIsSet() const;
    void unsetisMute();
    void setIsMute(int32_t value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string phone_;
    bool phoneIsSet_;
    std::string phone2_;
    bool phone2IsSet_;
    std::string phone3_;
    bool phone3IsSet_;
    std::string type_;
    bool typeIsSet_;
    int32_t role_;
    bool roleIsSet_;
    int32_t isMute_;
    bool isMuteIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_PartAttendee_H_
