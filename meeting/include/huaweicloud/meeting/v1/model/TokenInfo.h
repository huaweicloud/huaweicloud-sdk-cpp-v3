
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_TokenInfo_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_TokenInfo_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 会控Token信息。
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  TokenInfo
    : public ModelBase
{
public:
    TokenInfo();
    virtual ~TokenInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TokenInfo members

    /// <summary>
    /// 会控Token。有效期半个小时。
    /// </summary>

    std::string getToken() const;
    bool tokenIsSet() const;
    void unsettoken();
    void setToken(const std::string& value);

    /// <summary>
    /// 会控WebSocket建链鉴权Token。
    /// </summary>

    std::string getTmpWsToken() const;
    bool tmpWsTokenIsSet() const;
    void unsettmpWsToken();
    void setTmpWsToken(const std::string& value);

    /// <summary>
    /// 会控WebSocket建链URL。
    /// </summary>

    std::string getWsURL() const;
    bool wsURLIsSet() const;
    void unsetwsURL();
    void setWsURL(const std::string& value);

    /// <summary>
    /// 会议中的角色。 * 0 ：普通与会者 * 1 ：会议主持人 
    /// </summary>

    int32_t getRole() const;
    bool roleIsSet() const;
    void unsetrole();
    void setRole(int32_t value);

    /// <summary>
    /// 会控Token过期时间戳（单位：毫秒）。
    /// </summary>

    int64_t getExpireTime() const;
    bool expireTimeIsSet() const;
    void unsetexpireTime();
    void setExpireTime(int64_t value);

    /// <summary>
    /// 会议预定者的用户UUID。
    /// </summary>

    std::string getUserID() const;
    bool userIDIsSet() const;
    void unsetuserID();
    void setUserID(const std::string& value);

    /// <summary>
    /// 会议所属企业ID。
    /// </summary>

    std::string getOrgID() const;
    bool orgIDIsSet() const;
    void unsetorgID();
    void setOrgID(const std::string& value);

    /// <summary>
    /// 终端请求时，返回终端入会后会场ID。 &gt; 该参数将废弃，请勿使用。 
    /// </summary>

    std::string getParticipantID() const;
    bool participantIDIsSet() const;
    void unsetparticipantID();
    void setParticipantID(const std::string& value);

    /// <summary>
    /// 会控Token有效时长（单位秒）。
    /// </summary>

    int32_t getConfTokenExpireTime() const;
    bool confTokenExpireTimeIsSet() const;
    void unsetconfTokenExpireTime();
    void setConfTokenExpireTime(int32_t value);

    /// <summary>
    /// 云会议室会议的当前会议ID。
    /// </summary>

    std::string getVmrCurrentConfID() const;
    bool vmrCurrentConfIDIsSet() const;
    void unsetvmrCurrentConfID();
    void setVmrCurrentConfID(const std::string& value);

    /// <summary>
    /// 会控WebSocket消息推送支持类型。
    /// </summary>

    std::vector<std::string>& getSupportNotifyType();
    bool supportNotifyTypeIsSet() const;
    void unsetsupportNotifyType();
    void setSupportNotifyType(const std::vector<std::string>& value);


protected:
    std::string token_;
    bool tokenIsSet_;
    std::string tmpWsToken_;
    bool tmpWsTokenIsSet_;
    std::string wsURL_;
    bool wsURLIsSet_;
    int32_t role_;
    bool roleIsSet_;
    int64_t expireTime_;
    bool expireTimeIsSet_;
    std::string userID_;
    bool userIDIsSet_;
    std::string orgID_;
    bool orgIDIsSet_;
    std::string participantID_;
    bool participantIDIsSet_;
    int32_t confTokenExpireTime_;
    bool confTokenExpireTimeIsSet_;
    std::string vmrCurrentConfID_;
    bool vmrCurrentConfIDIsSet_;
    std::vector<std::string> supportNotifyType_;
    bool supportNotifyTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_TokenInfo_H_
