
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_CreateConfTokenRequest_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_CreateConfTokenRequest_H_


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
/// Request Object
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  CreateConfTokenRequest
    : public ModelBase
{
public:
    CreateConfTokenRequest();
    virtual ~CreateConfTokenRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateConfTokenRequest members

    /// <summary>
    /// 会议ID。 &gt; 创建会议时返回的conferenceID。不是vmrConferenceID。 
    /// </summary>

    std::string getConferenceID() const;
    bool conferenceIDIsSet() const;
    void unsetconferenceID();
    void setConferenceID(const std::string& value);

    /// <summary>
    /// 会控Token。 &gt; * 仅会控Token保活场景需要携带 &gt; * 如果会话已过期并且请求中携带了密码，则进行重新鉴权并回复新的会控Token
    /// </summary>

    std::string getXConferenceAuthorization() const;
    bool xConferenceAuthorizationIsSet() const;
    void unsetxConferenceAuthorization();
    void setXConferenceAuthorization(const std::string& value);

    /// <summary>
    /// 会议的主持人密码。 &gt; 对于会控Token保活场景，不对主持人密码鉴权。
    /// </summary>

    std::string getXPassword() const;
    bool xPasswordIsSet() const;
    void unsetxPassword();
    void setXPassword(const std::string& value);

    /// <summary>
    /// 请求类型。 - 1: 业务固定为1。
    /// </summary>

    int32_t getXLoginType() const;
    bool xLoginTypeIsSet() const;
    void unsetxLoginType();
    void setXLoginType(int32_t value);

    /// <summary>
    /// 用户临时nonce token。
    /// </summary>

    std::string getXNonce() const;
    bool xNonceIsSet() const;
    void unsetxNonce();
    void setXNonce(const std::string& value);


protected:
    std::string conferenceID_;
    bool conferenceIDIsSet_;
    std::string xConferenceAuthorization_;
    bool xConferenceAuthorizationIsSet_;
    std::string xPassword_;
    bool xPasswordIsSet_;
    int32_t xLoginType_;
    bool xLoginTypeIsSet_;
    std::string xNonce_;
    bool xNonceIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateConfTokenRequest& dereference_from_shared_ptr(std::shared_ptr<CreateConfTokenRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_CreateConfTokenRequest_H_
