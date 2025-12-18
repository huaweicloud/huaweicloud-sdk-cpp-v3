
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_SendVeriCodeForChangePwdResponse_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_SendVeriCodeForChangePwdResponse_H_


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
/// Response Object
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  SendVeriCodeForChangePwdResponse
    : public ModelBase, public HttpResponse
{
public:
    SendVeriCodeForChangePwdResponse();
    virtual ~SendVeriCodeForChangePwdResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SendVeriCodeForChangePwdResponse members

    /// <summary>
    /// 过期时间，单位：秒。
    /// </summary>

    int32_t getExpire() const;
    bool expireIsSet() const;
    void unsetexpire();
    void setExpire(int32_t value);

    /// <summary>
    /// 如果通过手机发送验证码，则该字段携带该用户绑定的手机号（手机号经过处理，屏蔽中间几位，如+8618****12345）。
    /// </summary>

    std::string getBindPhone() const;
    bool bindPhoneIsSet() const;
    void unsetbindPhone();
    void setBindPhone(const std::string& value);

    /// <summary>
    /// 如果通过邮箱发送验证码，则该字段携带用户绑定的邮箱帐号（邮箱帐号经过处理，屏蔽中间几位，如tes****ount@huawei.com）。
    /// </summary>

    std::string getBindEmail() const;
    bool bindEmailIsSet() const;
    void unsetbindEmail();
    void setBindEmail(const std::string& value);


protected:
    int32_t expire_;
    bool expireIsSet_;
    std::string bindPhone_;
    bool bindPhoneIsSet_;
    std::string bindEmail_;
    bool bindEmailIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_SendVeriCodeForChangePwdResponse_H_
