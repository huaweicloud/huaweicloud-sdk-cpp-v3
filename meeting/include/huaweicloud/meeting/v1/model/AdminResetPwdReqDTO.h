
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_AdminResetPwdReqDTO_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_AdminResetPwdReqDTO_H_


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
class HUAWEICLOUD_MEETING_V1_EXPORT  AdminResetPwdReqDTO
    : public ModelBase
{
public:
    AdminResetPwdReqDTO();
    virtual ~AdminResetPwdReqDTO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AdminResetPwdReqDTO members

    /// <summary>
    /// 被修改密码的用户帐号。 
    /// </summary>

    std::string getAccount() const;
    bool accountIsSet() const;
    void unsetaccount();
    void setAccount(const std::string& value);


protected:
    std::string account_;
    bool accountIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_AdminResetPwdReqDTO_H_
