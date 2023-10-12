
#ifndef HUAWEICLOUD_SDK_CDN_V1_MODEL_OriginHostBody_H_
#define HUAWEICLOUD_SDK_CDN_V1_MODEL_OriginHostBody_H_


#include <huaweicloud/cdn/v1/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
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
/// 
/// </summary>
class HUAWEICLOUD_CDN_V1_EXPORT  OriginHostBody
    : public ModelBase
{
public:
    OriginHostBody();
    virtual ~OriginHostBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// OriginHostBody members

    /// <summary>
    /// accelerate：选择加速域名作为回源host域名； customize：使用自定义的域名作为回源host域名；
    /// </summary>

    std::string getOriginHostType() const;
    bool originHostTypeIsSet() const;
    void unsetoriginHostType();
    void setOriginHostType(const std::string& value);

    /// <summary>
    /// 自定义回源域名，origin_host_type为 customize时传入该参数。
    /// </summary>

    std::string getCustomizeDomain() const;
    bool customizeDomainIsSet() const;
    void unsetcustomizeDomain();
    void setCustomizeDomain(const std::string& value);


protected:
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

#endif // HUAWEICLOUD_SDK_CDN_V1_MODEL_OriginHostBody_H_
