
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_SessionConfigurationDto_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_SessionConfigurationDto_H_


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
/// the struct of SessionConfiguration
/// </summary>
class HUAWEICLOUD_IDENTITYCENTER_V1_EXPORT  SessionConfigurationDto
    : public ModelBase
{
public:
    SessionConfigurationDto();
    virtual ~SessionConfigurationDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SessionConfigurationDto members

    /// <summary>
    /// 会话生效时间
    /// </summary>

    std::string getMaxAuthenticationAge() const;
    bool maxAuthenticationAgeIsSet() const;
    void unsetmaxAuthenticationAge();
    void setMaxAuthenticationAge(const std::string& value);


protected:
    std::string maxAuthenticationAge_;
    bool maxAuthenticationAgeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_SessionConfigurationDto_H_
