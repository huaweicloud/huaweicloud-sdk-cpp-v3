
#ifndef HUAWEICLOUD_SDK_IVS_V2_MODEL_StandardReqDataByVideoAndNameAndId_H_
#define HUAWEICLOUD_SDK_IVS_V2_MODEL_StandardReqDataByVideoAndNameAndId_H_

#include <huaweicloud/ivs/v2/IvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_IVS_V2_EXPORT  StandardReqDataByVideoAndNameAndId
    : public ModelBase
{
public:
    StandardReqDataByVideoAndNameAndId();
    virtual ~StandardReqDataByVideoAndNameAndId();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// StandardReqDataByVideoAndNameAndId members

    /// <summary>
    /// 被验证人的姓名。
    /// </summary>

    std::string getVerificationName() const;
    bool verificationNameIsSet() const;
    void unsetverificationName();
    void setVerificationName(const std::string& value);

    /// <summary>
    /// 被验证人的身份证号码。
    /// </summary>

    std::string getVerificationId() const;
    bool verificationIdIsSet() const;
    void unsetverificationId();
    void setVerificationId(const std::string& value);

    /// <summary>
    /// 现场拍摄人像视频数据，使用base64编码，要求base64编码后大小不超过10M。
    /// </summary>

    std::string getVideo() const;
    bool videoIsSet() const;
    void unsetvideo();
    void setVideo(const std::string& value);

    /// <summary>
    /// 动作代码顺序列表，英文逗号（,）分隔。建议单动作，目前支持的动作有： • 1：左摇头 • 2：右摇头 • 3：点头 • 4：嘴部动作
    /// </summary>

    std::string getActions() const;
    bool actionsIsSet() const;
    void unsetactions();
    void setActions(const std::string& value);

    /// <summary>
    /// 该参数为点头动作幅度的判断门限，取值范围：[1,90]，默认为10，单位为度。该值设置越大，则越难判断为点头。
    /// </summary>

    double getNodThreshold() const;
    bool nodThresholdIsSet() const;
    void unsetnodThreshold();
    void setNodThreshold(double value);


protected:
    std::string verificationName_;
    bool verificationNameIsSet_;
    std::string verificationId_;
    bool verificationIdIsSet_;
    std::string video_;
    bool videoIsSet_;
    std::string actions_;
    bool actionsIsSet_;
    double nodThreshold_;
    bool nodThresholdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IVS_V2_MODEL_StandardReqDataByVideoAndNameAndId_H_
