
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_ServiceProviderConfigDto_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_ServiceProviderConfigDto_H_


#include <huaweicloud/identitycenter/v1/IdentityCenterExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/identitycenter/v1/model/ConsumersDto.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 服务提供商
/// </summary>
class HUAWEICLOUD_IDENTITYCENTER_V1_EXPORT  ServiceProviderConfigDto
    : public ModelBase
{
public:
    ServiceProviderConfigDto();
    virtual ~ServiceProviderConfigDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ServiceProviderConfigDto members

    /// <summary>
    /// SAML受众
    /// </summary>

    std::string getAudience() const;
    bool audienceIsSet() const;
    void unsetaudience();
    void setAudience(const std::string& value);

    /// <summary>
    /// 是否需要签名
    /// </summary>

    bool isRequireRequestSignature() const;
    bool requireRequestSignatureIsSet() const;
    void unsetrequireRequestSignature();
    void setRequireRequestSignature(bool value);

    /// <summary>
    /// SAML响应接收方
    /// </summary>

    std::vector<ConsumersDto>& getConsumers();
    bool consumersIsSet() const;
    void unsetconsumers();
    void setConsumers(const std::vector<ConsumersDto>& value);

    /// <summary>
    /// 应用程序启动Url
    /// </summary>

    std::string getStartUrl() const;
    bool startUrlIsSet() const;
    void unsetstartUrl();
    void setStartUrl(const std::string& value);


protected:
    std::string audience_;
    bool audienceIsSet_;
    bool requireRequestSignature_;
    bool requireRequestSignatureIsSet_;
    std::vector<ConsumersDto> consumers_;
    bool consumersIsSet_;
    std::string startUrl_;
    bool startUrlIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_ServiceProviderConfigDto_H_
