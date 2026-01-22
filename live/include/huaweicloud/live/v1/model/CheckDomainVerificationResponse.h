
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_CheckDomainVerificationResponse_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_CheckDomainVerificationResponse_H_


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
/// Response Object
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  CheckDomainVerificationResponse
    : public ModelBase, public HttpResponse
{
public:
    CheckDomainVerificationResponse();
    virtual ~CheckDomainVerificationResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CheckDomainVerificationResponse members

    /// <summary>
    /// 主域名
    /// </summary>

    std::string getDomain() const;
    bool domainIsSet() const;
    void unsetdomain();
    void setDomain(const std::string& value);

    /// <summary>
    /// 校验值，解析值或者文件内容
    /// </summary>

    std::string getVerifyContent() const;
    bool verifyContentIsSet() const;
    void unsetverifyContent();
    void setVerifyContent(const std::string& value);

    /// <summary>
    /// 验证结果，true为验证成功确认归属，false为归属情况未确认
    /// </summary>

    bool isVerifyResult() const;
    bool verifyResultIsSet() const;
    void unsetverifyResult();
    void setVerifyResult(bool value);


protected:
    std::string domain_;
    bool domainIsSet_;
    std::string verifyContent_;
    bool verifyContentIsSet_;
    bool verifyResult_;
    bool verifyResultIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_CheckDomainVerificationResponse_H_
