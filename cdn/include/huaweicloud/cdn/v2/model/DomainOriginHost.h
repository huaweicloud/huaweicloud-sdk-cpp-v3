
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_DomainOriginHost_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_DomainOriginHost_H_


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
/// 域名回源HOST配置。
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  DomainOriginHost
    : public ModelBase
{
public:
    DomainOriginHost();
    virtual ~DomainOriginHost();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DomainOriginHost members

    /// <summary>
    /// 域名ID。
    /// </summary>

    std::string getDomainId() const;
    bool domainIdIsSet() const;
    void unsetdomainId();
    void setDomainId(const std::string& value);

    /// <summary>
    /// 回源host的类型,accelerate：选择加速域名作为回源host域名， customize：使用自定义的域名作为回源host域名。
    /// </summary>

    std::string getOriginHostType() const;
    bool originHostTypeIsSet() const;
    void unsetoriginHostType();
    void setOriginHostType(const std::string& value);

    /// <summary>
    /// 自定义回源host域名。
    /// </summary>

    std::string getCustomizeDomain() const;
    bool customizeDomainIsSet() const;
    void unsetcustomizeDomain();
    void setCustomizeDomain(const std::string& value);


protected:
    std::string domainId_;
    bool domainIdIsSet_;
    std::string originHostType_;
    bool originHostTypeIsSet_;
    std::string customizeDomain_;
    bool customizeDomainIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_DomainOriginHost_H_
