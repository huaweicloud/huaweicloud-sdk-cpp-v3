
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_PasswordEntry_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_PasswordEntry_H_


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
/// 密码信息。
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  PasswordEntry
    : public ModelBase
{
public:
    PasswordEntry();
    virtual ~PasswordEntry();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PasswordEntry members

    /// <summary>
    /// 会议角色。 - chair: 会议主持人 - general: 普通与会者
    /// </summary>

    std::string getConferenceRole() const;
    bool conferenceRoleIsSet() const;
    void unsetconferenceRole();
    void setConferenceRole(const std::string& value);

    /// <summary>
    /// 会议中角色的密码（明文）。
    /// </summary>

    std::string getPassword() const;
    bool passwordIsSet() const;
    void unsetpassword();
    void setPassword(const std::string& value);


protected:
    std::string conferenceRole_;
    bool conferenceRoleIsSet_;
    std::string password_;
    bool passwordIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_PasswordEntry_H_
