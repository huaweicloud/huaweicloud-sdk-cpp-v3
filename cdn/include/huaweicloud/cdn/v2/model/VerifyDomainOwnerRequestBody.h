
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_VerifyDomainOwnerRequestBody_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_VerifyDomainOwnerRequestBody_H_


#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 域名归属校验请求体
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  VerifyDomainOwnerRequestBody
    : public ModelBase
{
public:
    VerifyDomainOwnerRequestBody();
    virtual ~VerifyDomainOwnerRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// VerifyDomainOwnerRequestBody members

    /// <summary>
    /// 校验类型： - dns：DNS解析校验； - file：文件校验； - all：DNS与文件都会进行探测，默认为all。
    /// </summary>

    std::string getVerifyType() const;
    bool verifyTypeIsSet() const;
    void unsetverifyType();
    void setVerifyType(const std::string& value);


protected:
    std::string verifyType_;
    bool verifyTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_VerifyDomainOwnerRequestBody_H_
