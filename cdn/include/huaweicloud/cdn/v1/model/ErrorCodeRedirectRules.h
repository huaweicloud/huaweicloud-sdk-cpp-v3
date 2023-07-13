
#ifndef HUAWEICLOUD_SDK_CDN_V1_MODEL_ErrorCodeRedirectRules_H_
#define HUAWEICLOUD_SDK_CDN_V1_MODEL_ErrorCodeRedirectRules_H_

#include <huaweicloud/cdn/v1/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 自定义错误页面
/// </summary>
class HUAWEICLOUD_CDN_V1_EXPORT  ErrorCodeRedirectRules
    : public ModelBase
{
public:
    ErrorCodeRedirectRules();
    virtual ~ErrorCodeRedirectRules();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ErrorCodeRedirectRules members

    /// <summary>
    /// 重定向的错误码，当前支持以下状态码 4xx:400, 403, 404, 405, 414, 416, 451 5xx:500, 501, 502, 503, 504
    /// </summary>

    int32_t getErrorCode() const;
    bool errorCodeIsSet() const;
    void unseterrorCode();
    void setErrorCode(int32_t value);

    /// <summary>
    /// 重定向状态码，取值为301或302
    /// </summary>

    int32_t getTargetCode() const;
    bool targetCodeIsSet() const;
    void unsettargetCode();
    void setTargetCode(int32_t value);

    /// <summary>
    /// 重定向的目标链接
    /// </summary>

    std::string getTargetLink() const;
    bool targetLinkIsSet() const;
    void unsettargetLink();
    void setTargetLink(const std::string& value);


protected:
    int32_t errorCode_;
    bool errorCodeIsSet_;
    int32_t targetCode_;
    bool targetCodeIsSet_;
    std::string targetLink_;
    bool targetLinkIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V1_MODEL_ErrorCodeRedirectRules_H_
