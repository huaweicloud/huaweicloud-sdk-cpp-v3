
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_UpdateDomainMultiCertificatesResponseBody_result_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_UpdateDomainMultiCertificatesResponseBody_result_H_


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
/// 匹配的域名的详情
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  UpdateDomainMultiCertificatesResponseBody_result
    : public ModelBase
{
public:
    UpdateDomainMultiCertificatesResponseBody_result();
    virtual ~UpdateDomainMultiCertificatesResponseBody_result();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateDomainMultiCertificatesResponseBody_result members

    /// <summary>
    /// 域名名称
    /// </summary>

    std::string getDomainName() const;
    bool domainNameIsSet() const;
    void unsetdomainName();
    void setDomainName(const std::string& value);

    /// <summary>
    /// 执行结果，success，fail
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 失败原因
    /// </summary>

    std::string getReason() const;
    bool reasonIsSet() const;
    void unsetreason();
    void setReason(const std::string& value);


protected:
    std::string domainName_;
    bool domainNameIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string reason_;
    bool reasonIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_UpdateDomainMultiCertificatesResponseBody_result_H_
