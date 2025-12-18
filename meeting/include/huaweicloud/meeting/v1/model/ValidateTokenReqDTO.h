
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_ValidateTokenReqDTO_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_ValidateTokenReqDTO_H_


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
class HUAWEICLOUD_MEETING_V1_EXPORT  ValidateTokenReqDTO
    : public ModelBase
{
public:
    ValidateTokenReqDTO();
    virtual ~ValidateTokenReqDTO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ValidateTokenReqDTO members

    /// <summary>
    /// Access Token。
    /// </summary>

    std::string getToken() const;
    bool tokenIsSet() const;
    void unsettoken();
    void setToken(const std::string& value);

    /// <summary>
    /// 是否生成新的Token。 * true：生成新的token值 * false：不生成新的token值 
    /// </summary>

    bool isNeedGenNewToken() const;
    bool needGenNewTokenIsSet() const;
    void unsetneedGenNewToken();
    void setNeedGenNewToken(bool value);

    /// <summary>
    /// 是否需要返回用户帐号信息（帐号、用户名称等信息）。
    /// </summary>

    bool isNeedAccountInfo() const;
    bool needAccountInfoIsSet() const;
    void unsetneedAccountInfo();
    void setNeedAccountInfo(bool value);


protected:
    std::string token_;
    bool tokenIsSet_;
    bool needGenNewToken_;
    bool needGenNewTokenIsSet_;
    bool needAccountInfo_;
    bool needAccountInfoIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_ValidateTokenReqDTO_H_
