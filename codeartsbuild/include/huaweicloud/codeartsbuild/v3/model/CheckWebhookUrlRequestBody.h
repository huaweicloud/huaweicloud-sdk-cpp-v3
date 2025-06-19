
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_CheckWebhookUrlRequestBody_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_CheckWebhookUrlRequestBody_H_


#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 检查webhook地址
/// </summary>
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  CheckWebhookUrlRequestBody
    : public ModelBase
{
public:
    CheckWebhookUrlRequestBody();
    virtual ~CheckWebhookUrlRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CheckWebhookUrlRequestBody members

    /// <summary>
    /// 任务ID
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// 通知的类型,分为消息，邮件，钉钉，飞书和微信
    /// </summary>

    std::string getNoticeType() const;
    bool noticeTypeIsSet() const;
    void unsetnoticeType();
    void setNoticeType(const std::string& value);

    /// <summary>
    /// Webhook地址
    /// </summary>

    std::string getWebhookUrl() const;
    bool webhookUrlIsSet() const;
    void unsetwebhookUrl();
    void setWebhookUrl(const std::string& value);


protected:
    std::string jobId_;
    bool jobIdIsSet_;
    std::string noticeType_;
    bool noticeTypeIsSet_;
    std::string webhookUrl_;
    bool webhookUrlIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_CheckWebhookUrlRequestBody_H_
