
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_VerifyCodeCheckDTO_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_VerifyCodeCheckDTO_H_


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
class HUAWEICLOUD_MEETING_V1_EXPORT  VerifyCodeCheckDTO
    : public ModelBase
{
public:
    VerifyCodeCheckDTO();
    virtual ~VerifyCodeCheckDTO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// VerifyCodeCheckDTO members

    /// <summary>
    /// 必须和发送验证码时带的用户身份信息相同。 
    /// </summary>

    std::string getUser() const;
    bool userIsSet() const;
    void unsetuser();
    void setUser(const std::string& value);

    /// <summary>
    /// 验证码。 
    /// </summary>

    std::string getCode() const;
    bool codeIsSet() const;
    void unsetcode();
    void setCode(const std::string& value);


protected:
    std::string user_;
    bool userIsSet_;
    std::string code_;
    bool codeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_VerifyCodeCheckDTO_H_
