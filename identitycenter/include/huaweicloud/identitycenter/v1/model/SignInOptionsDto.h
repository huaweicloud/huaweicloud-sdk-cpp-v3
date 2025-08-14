
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_SignInOptionsDto_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_SignInOptionsDto_H_


#include <huaweicloud/identitycenter/v1/IdentityCenterExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 门户登录选项
/// </summary>
class HUAWEICLOUD_IDENTITYCENTER_V1_EXPORT  SignInOptionsDto
    : public ModelBase
{
public:
    SignInOptionsDto();
    virtual ~SignInOptionsDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SignInOptionsDto members

    /// <summary>
    /// IAM身份中心跳转应用程序的方式
    /// </summary>

    std::string getOrigin() const;
    bool originIsSet() const;
    void unsetorigin();
    void setOrigin(const std::string& value);

    /// <summary>
    /// 接受应用程序身份验证请求的Url
    /// </summary>

    std::string getApplicationUrl() const;
    bool applicationUrlIsSet() const;
    void unsetapplicationUrl();
    void setApplicationUrl(const std::string& value);


protected:
    std::string origin_;
    bool originIsSet_;
    std::string applicationUrl_;
    bool applicationUrlIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_SignInOptionsDto_H_
