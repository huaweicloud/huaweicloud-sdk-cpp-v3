
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_StatisticUserDataItem_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_StatisticUserDataItem_H_


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
/// 会议用户统计数据的单个时间点数据。
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  StatisticUserDataItem
    : public ModelBase
{
public:
    StatisticUserDataItem();
    virtual ~StatisticUserDataItem();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// StatisticUserDataItem members

    /// <summary>
    /// 日期/月份。
    /// </summary>

    std::string getTime() const;
    bool timeIsSet() const;
    void unsettime();
    void setTime(const std::string& value);

    /// <summary>
    /// 登录用户数。 category &#x3D; user_login_info时有效。
    /// </summary>

    std::string getUserLoginCount() const;
    bool userLoginCountIsSet() const;
    void unsetuserLoginCount();
    void setUserLoginCount(const std::string& value);

    /// <summary>
    /// PC端登录用户数。 category &#x3D; user_login_info时有效。
    /// </summary>

    std::string getUserPCLoginCount() const;
    bool userPCLoginCountIsSet() const;
    void unsetuserPCLoginCount();
    void setUserPCLoginCount(const std::string& value);

    /// <summary>
    /// 移动端登录用户数。 category &#x3D; user_login_info时有效。
    /// </summary>

    std::string getUserMobileLoginCount() const;
    bool userMobileLoginCountIsSet() const;
    void unsetuserMobileLoginCount();
    void setUserMobileLoginCount(const std::string& value);

    /// <summary>
    /// 激活用户数。 category &#x3D; user_activate_info时有效。
    /// </summary>

    std::string getUserActivatedCount() const;
    bool userActivatedCountIsSet() const;
    void unsetuserActivatedCount();
    void setUserActivatedCount(const std::string& value);

    /// <summary>
    /// 用户登录设备名称。 category &#x3D; user_login_device_info时有效。
    /// </summary>

    std::string getUserLoginDevicesName() const;
    bool userLoginDevicesNameIsSet() const;
    void unsetuserLoginDevicesName();
    void setUserLoginDevicesName(const std::string& value);

    /// <summary>
    /// 用户登录设备数。 category &#x3D; user_login_device_info时有效。
    /// </summary>

    std::string getUserLoginDevicesCount() const;
    bool userLoginDevicesCountIsSet() const;
    void unsetuserLoginDevicesCount();
    void setUserLoginDevicesCount(const std::string& value);


protected:
    std::string time_;
    bool timeIsSet_;
    std::string userLoginCount_;
    bool userLoginCountIsSet_;
    std::string userPCLoginCount_;
    bool userPCLoginCountIsSet_;
    std::string userMobileLoginCount_;
    bool userMobileLoginCountIsSet_;
    std::string userActivatedCount_;
    bool userActivatedCountIsSet_;
    std::string userLoginDevicesName_;
    bool userLoginDevicesNameIsSet_;
    std::string userLoginDevicesCount_;
    bool userLoginDevicesCountIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_StatisticUserDataItem_H_
