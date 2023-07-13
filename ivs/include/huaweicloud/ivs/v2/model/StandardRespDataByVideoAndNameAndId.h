
#ifndef HUAWEICLOUD_SDK_IVS_V2_MODEL_StandardRespDataByVideoAndNameAndId_H_
#define HUAWEICLOUD_SDK_IVS_V2_MODEL_StandardRespDataByVideoAndNameAndId_H_

#include <huaweicloud/ivs/v2/IvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/ivs/v2/model/VideoResult.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Ivs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_IVS_V2_EXPORT  StandardRespDataByVideoAndNameAndId
    : public ModelBase
{
public:
    StandardRespDataByVideoAndNameAndId();
    virtual ~StandardRespDataByVideoAndNameAndId();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// StandardRespDataByVideoAndNameAndId members

    /// <summary>
    /// 审核校验结果： \&quot;valid\&quot;表示身份审核通过； \&quot;invalid\&quot;表示身份审核不通过； \&quot;nonexistent\&quot;表示数据源没有该身份证号码，这种情况一般是被验证人正在办理户籍迁移，或者被验证人是军人或政要。
    /// </summary>

    std::string getVerificationResult() const;
    bool verificationResultIsSet() const;
    void unsetverificationResult();
    void setVerificationResult(const std::string& value);

    /// <summary>
    /// 审核校验信息，具体参考[校验信息说明](https://support.huaweicloud.com/api-ivs/ivs_02_0017.html)
    /// </summary>

    std::string getVerificationMessage() const;
    bool verificationMessageIsSet() const;
    void unsetverificationMessage();
    void setVerificationMessage(const std::string& value);

    /// <summary>
    /// 审核校验代码，具体参考[校验信息说明](https://support.huaweicloud.com/api-ivs/ivs_02_0017.html)
    /// </summary>

    int32_t getVerificationCode() const;
    bool verificationCodeIsSet() const;
    void unsetverificationCode();
    void setVerificationCode(int32_t value);

    /// <summary>
    /// 人像相识度。取值范围[0,100]
    /// </summary>

    std::string getSimilarity() const;
    bool similarityIsSet() const;
    void unsetsimilarity();
    void setSimilarity(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    VideoResult getVideoResult() const;
    bool videoResultIsSet() const;
    void unsetvideoResult();
    void setVideoResult(const VideoResult& value);


protected:
    std::string verificationResult_;
    bool verificationResultIsSet_;
    std::string verificationMessage_;
    bool verificationMessageIsSet_;
    int32_t verificationCode_;
    bool verificationCodeIsSet_;
    std::string similarity_;
    bool similarityIsSet_;
    VideoResult videoResult_;
    bool videoResultIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IVS_V2_MODEL_StandardRespDataByVideoAndNameAndId_H_
