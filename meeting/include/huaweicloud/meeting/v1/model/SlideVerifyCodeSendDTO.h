
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_SlideVerifyCodeSendDTO_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_SlideVerifyCodeSendDTO_H_


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
class HUAWEICLOUD_MEETING_V1_EXPORT  SlideVerifyCodeSendDTO
    : public ModelBase
{
public:
    SlideVerifyCodeSendDTO();
    virtual ~SlideVerifyCodeSendDTO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SlideVerifyCodeSendDTO members

    /// <summary>
    /// 用户身份信息（手机号码或邮箱帐号或用户真实帐号）。 
    /// </summary>

    std::string getUser() const;
    bool userIsSet() const;
    void unsetuser();
    void setUser(const std::string& value);

    /// <summary>
    /// 登录客户端类型。 * 0：Web客户端类型 * 5：cloudlink pc * 6：cloudlink mobile 
    /// </summary>

    int32_t getClientType() const;
    bool clientTypeIsSet() const;
    void unsetclientType();
    void setClientType(int32_t value);

    /// <summary>
    /// 校验类型。默认值：0。 * 0：登录 * 1：忘记密码 
    /// </summary>

    int32_t getCheckType() const;
    bool checkTypeIsSet() const;
    void unsetcheckType();
    void setCheckType(int32_t value);


protected:
    std::string user_;
    bool userIsSet_;
    int32_t clientType_;
    bool clientTypeIsSet_;
    int32_t checkType_;
    bool checkTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_SlideVerifyCodeSendDTO_H_
