
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_RestInviteWithPwdReqBody_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_RestInviteWithPwdReqBody_H_


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
/// 会议信息。
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  RestInviteWithPwdReqBody
    : public ModelBase
{
public:
    RestInviteWithPwdReqBody();
    virtual ~RestInviteWithPwdReqBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RestInviteWithPwdReqBody members

    /// <summary>
    /// 被邀请者的SIP号码。
    /// </summary>

    std::string getCallNum() const;
    bool callNumIsSet() const;
    void unsetcallNum();
    void setCallNum(const std::string& value);

    /// <summary>
    /// 被邀请者所属企业ID。
    /// </summary>

    std::string getOrgID() const;
    bool orgIDIsSet() const;
    void unsetorgID();
    void setOrgID(const std::string& value);

    /// <summary>
    /// 会议ID。
    /// </summary>

    std::string getConfID() const;
    bool confIDIsSet() const;
    void unsetconfID();
    void setConfID(const std::string& value);

    /// <summary>
    /// 会议的密码（主持人或者来宾）。
    /// </summary>

    std::string getPwd() const;
    bool pwdIsSet() const;
    void unsetpwd();
    void setPwd(const std::string& value);

    /// <summary>
    /// SIP号码类型。默认是0。 * 0：华为云会议的号码 * 1：VC会议的号码 
    /// </summary>

    int32_t getNumBelongsType() const;
    bool numBelongsTypeIsSet() const;
    void unsetnumBelongsType();
    void setNumBelongsType(int32_t value);

    /// <summary>
    /// 是否不叠加会场名（VDC场景下适用）。
    /// </summary>

    bool isIsNotOverlayPidName() const;
    bool isNotOverlayPidNameIsSet() const;
    void unsetisNotOverlayPidName();
    void setIsNotOverlayPidName(bool value);


protected:
    std::string callNum_;
    bool callNumIsSet_;
    std::string orgID_;
    bool orgIDIsSet_;
    std::string confID_;
    bool confIDIsSet_;
    std::string pwd_;
    bool pwdIsSet_;
    int32_t numBelongsType_;
    bool numBelongsTypeIsSet_;
    bool isNotOverlayPidName_;
    bool isNotOverlayPidNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_RestInviteWithPwdReqBody_H_
