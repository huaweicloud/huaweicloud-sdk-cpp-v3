
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_CommonRemoteAuth_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_CommonRemoteAuth_H_


#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cdn/v2/model/RemoteAuthRule.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 远程鉴权配置。
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  CommonRemoteAuth
    : public ModelBase
{
public:
    CommonRemoteAuth();
    virtual ~CommonRemoteAuth();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CommonRemoteAuth members

    /// <summary>
    /// 是否开启远程鉴权(on：开启，off：关闭)。
    /// </summary>

    std::string getRemoteAuthentication() const;
    bool remoteAuthenticationIsSet() const;
    void unsetremoteAuthentication();
    void setRemoteAuthentication(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    RemoteAuthRule getRemoteAuthRules() const;
    bool remoteAuthRulesIsSet() const;
    void unsetremoteAuthRules();
    void setRemoteAuthRules(const RemoteAuthRule& value);


protected:
    std::string remoteAuthentication_;
    bool remoteAuthenticationIsSet_;
    RemoteAuthRule remoteAuthRules_;
    bool remoteAuthRulesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_CommonRemoteAuth_H_
