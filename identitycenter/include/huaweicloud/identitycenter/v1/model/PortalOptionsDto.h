
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_PortalOptionsDto_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_PortalOptionsDto_H_


#include <huaweicloud/identitycenter/v1/IdentityCenterExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/identitycenter/v1/model/SignInOptionsDto.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 门户选项设置
/// </summary>
class HUAWEICLOUD_IDENTITYCENTER_V1_EXPORT  PortalOptionsDto
    : public ModelBase
{
public:
    PortalOptionsDto();
    virtual ~PortalOptionsDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PortalOptionsDto members

    /// <summary>
    /// 应用程序在门户是否可见
    /// </summary>

    bool isVisible() const;
    bool visibleIsSet() const;
    void unsetvisible();
    void setVisible(bool value);

    /// <summary>
    /// 应用程序在门户可见性
    /// </summary>

    std::string getVisibility() const;
    bool visibilityIsSet() const;
    void unsetvisibility();
    void setVisibility(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    SignInOptionsDto getSignInOptions() const;
    bool signInOptionsIsSet() const;
    void unsetsignInOptions();
    void setSignInOptions(const SignInOptionsDto& value);


protected:
    bool visible_;
    bool visibleIsSet_;
    std::string visibility_;
    bool visibilityIsSet_;
    SignInOptionsDto signInOptions_;
    bool signInOptionsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_PortalOptionsDto_H_
