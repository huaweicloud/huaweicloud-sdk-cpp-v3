
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_SecurityConfigDto_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_SecurityConfigDto_H_


#include <huaweicloud/identitycenter/v1/IdentityCenterExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 证书安全配置
/// </summary>
class HUAWEICLOUD_IDENTITYCENTER_V1_EXPORT  SecurityConfigDto
    : public ModelBase
{
public:
    SecurityConfigDto();
    virtual ~SecurityConfigDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SecurityConfigDto members

    /// <summary>
    /// 证书过期时间
    /// </summary>

    std::string getTtl() const;
    bool ttlIsSet() const;
    void unsetttl();
    void setTtl(const std::string& value);


protected:
    std::string ttl_;
    bool ttlIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_SecurityConfigDto_H_
