
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_SignAgreementResponse_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_SignAgreementResponse_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  SignAgreementResponse
    : public ModelBase, public HttpResponse
{
public:
    SignAgreementResponse();
    virtual ~SignAgreementResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SignAgreementResponse members

    /// <summary>
    /// 当前服务协议版本
    /// </summary>

    std::string getCurrentVersion() const;
    bool currentVersionIsSet() const;
    void unsetcurrentVersion();
    void setCurrentVersion(const std::string& value);

    /// <summary>
    /// 是否需要签署
    /// </summary>

    bool isNeedToSign() const;
    bool needToSignIsSet() const;
    void unsetneedToSign();
    void setNeedToSign(bool value);

    /// <summary>
    /// 签署服务协议版本
    /// </summary>

    std::string getSignedVersion() const;
    bool signedVersionIsSet() const;
    void unsetsignedVersion();
    void setSignedVersion(const std::string& value);

    /// <summary>
    /// 协议签署时间。格式遵循：RFC 3339 如\&quot;2021-01-10T08:43:17Z\&quot;
    /// </summary>

    std::string getSignedTime() const;
    bool signedTimeIsSet() const;
    void unsetsignedTime();
    void setSignedTime(const std::string& value);

    /// <summary>
    /// 签署最后期限。格式遵循：RFC 3339 如\&quot;2024-10-10T15:59:59Z\&quot;
    /// </summary>

    std::string getResignDeadline() const;
    bool resignDeadlineIsSet() const;
    void unsetresignDeadline();
    void setResignDeadline(const std::string& value);

    /// <summary>
    /// 重新签署过期处理方式:EXPIRE_AUTO_AGREE 自动签署协议,EXPIRE_STOP_SERVICE 强制签署协议
    /// </summary>

    std::string getResignExpireProcessMode() const;
    bool resignExpireProcessModeIsSet() const;
    void unsetresignExpireProcessMode();
    void setResignExpireProcessMode(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXRequestId() const;
    bool xRequestIdIsSet() const;
    void unsetxRequestId();
    void setXRequestId(const std::string& value);


protected:
    std::string currentVersion_;
    bool currentVersionIsSet_;
    bool needToSign_;
    bool needToSignIsSet_;
    std::string signedVersion_;
    bool signedVersionIsSet_;
    std::string signedTime_;
    bool signedTimeIsSet_;
    std::string resignDeadline_;
    bool resignDeadlineIsSet_;
    std::string resignExpireProcessMode_;
    bool resignExpireProcessModeIsSet_;
    std::string xRequestId_;
    bool xRequestIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_SignAgreementResponse_H_
