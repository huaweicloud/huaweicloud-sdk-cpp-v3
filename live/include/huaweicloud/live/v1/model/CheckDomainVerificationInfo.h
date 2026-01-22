
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_CheckDomainVerificationInfo_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_CheckDomainVerificationInfo_H_


#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  CheckDomainVerificationInfo
    : public ModelBase
{
public:
    CheckDomainVerificationInfo();
    virtual ~CheckDomainVerificationInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CheckDomainVerificationInfo members

    /// <summary>
    /// 直播域名
    /// </summary>

    std::string getDomain() const;
    bool domainIsSet() const;
    void unsetdomain();
    void setDomain(const std::string& value);

    /// <summary>
    /// 验证方式，DNS：DNS解析验证；FILE：文件验证
    /// </summary>

    std::string getVerifyType() const;
    bool verifyTypeIsSet() const;
    void unsetverifyType();
    void setVerifyType(const std::string& value);


protected:
    std::string domain_;
    bool domainIsSet_;
    std::string verifyType_;
    bool verifyTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_CheckDomainVerificationInfo_H_
