
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_InterpreterInfo_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_InterpreterInfo_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/meeting/v1/model/InterpreterAiDigitalInfo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 传译员信息
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  InterpreterInfo
    : public ModelBase
{
public:
    InterpreterInfo();
    virtual ~InterpreterInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// InterpreterInfo members

    /// <summary>
    /// 用户登录账号，可以是账号、手机、邮箱其中一个,loginAccount和userID必须二选一。
    /// </summary>

    std::string getLoginAccount() const;
    bool loginAccountIsSet() const;
    void unsetloginAccount();
    void setLoginAccount(const std::string& value);

    /// <summary>
    /// 用户的userUUID。
    /// </summary>

    std::string getUserID() const;
    bool userIDIsSet() const;
    void unsetuserID();
    void setUserID(const std::string& value);

    /// <summary>
    /// 呼叫号码。
    /// </summary>

    std::string getCallNumber() const;
    bool callNumberIsSet() const;
    void unsetcallNumber();
    void setCallNumber(const std::string& value);

    /// <summary>
    /// 用户名。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 传译员序号，AI传译组下传译员唯一标识。
    /// </summary>

    std::string getInterpreterId() const;
    bool interpreterIdIsSet() const;
    void unsetinterpreterId();
    void setInterpreterId(const std::string& value);

    /// <summary>
    /// 传译员类型，MANUAL：人工传译，AI：AI传译。默认MANUAL。
    /// </summary>

    std::string getInterpreterType() const;
    bool interpreterTypeIsSet() const;
    void unsetinterpreterType();
    void setInterpreterType(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    InterpreterAiDigitalInfo getAiDigitalInfo() const;
    bool aiDigitalInfoIsSet() const;
    void unsetaiDigitalInfo();
    void setAiDigitalInfo(const InterpreterAiDigitalInfo& value);


protected:
    std::string loginAccount_;
    bool loginAccountIsSet_;
    std::string userID_;
    bool userIDIsSet_;
    std::string callNumber_;
    bool callNumberIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string interpreterId_;
    bool interpreterIdIsSet_;
    std::string interpreterType_;
    bool interpreterTypeIsSet_;
    InterpreterAiDigitalInfo aiDigitalInfo_;
    bool aiDigitalInfoIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_InterpreterInfo_H_
