
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_SlideVerifyCodeCheckDTO_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_SlideVerifyCodeCheckDTO_H_


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
/// 
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  SlideVerifyCodeCheckDTO
    : public ModelBase
{
public:
    SlideVerifyCodeCheckDTO();
    virtual ~SlideVerifyCodeCheckDTO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SlideVerifyCodeCheckDTO members

    /// <summary>
    /// 必须和发送验证码时带的用户身份信息相同。 
    /// </summary>

    std::string getUser() const;
    bool userIsSet() const;
    void unsetuser();
    void setUser(const std::string& value);

    /// <summary>
    /// 登录客户端类型。 * 0：Web客户端类型 * 5：PC客户端 * 6：移动客户端 
    /// </summary>

    int32_t getClientType() const;
    bool clientTypeIsSet() const;
    void unsetclientType();
    void setClientType(int32_t value);

    /// <summary>
    /// 校验类型。默认值：0。 * 0：登录； * 1：忘记密码; 
    /// </summary>

    int32_t getCheckType() const;
    bool checkTypeIsSet() const;
    void unsetcheckType();
    void setCheckType(int32_t value);

    /// <summary>
    /// 验证码Token字符串。通过[[发送滑块验证码](https://support.huaweicloud.com/api-meeting/meeting_21_0100.html)](tag:hws)[[发送滑块验证码](https://support.huaweicloud.com/intl/zh-cn/api-meeting/meeting_21_0100.html)](tag:hk) 接口获取。 
    /// </summary>

    std::string getToken() const;
    bool tokenIsSet() const;
    void unsettoken();
    void setToken(const std::string& value);

    /// <summary>
    /// 抠出图形的X轴坐标。
    /// </summary>

    int32_t getPointX() const;
    bool pointXIsSet() const;
    void unsetpointX();
    void setPointX(int32_t value);

    /// <summary>
    /// 滑动时间，单位ms。
    /// </summary>

    int32_t getSlideTime() const;
    bool slideTimeIsSet() const;
    void unsetslideTime();
    void setSlideTime(int32_t value);


protected:
    std::string user_;
    bool userIsSet_;
    int32_t clientType_;
    bool clientTypeIsSet_;
    int32_t checkType_;
    bool checkTypeIsSet_;
    std::string token_;
    bool tokenIsSet_;
    int32_t pointX_;
    bool pointXIsSet_;
    int32_t slideTime_;
    bool slideTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_SlideVerifyCodeCheckDTO_H_
