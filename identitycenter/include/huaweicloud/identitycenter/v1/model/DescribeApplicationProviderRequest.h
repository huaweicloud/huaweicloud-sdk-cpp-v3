
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_DescribeApplicationProviderRequest_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_DescribeApplicationProviderRequest_H_


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
/// Request Object
/// </summary>
class HUAWEICLOUD_IDENTITYCENTER_V1_EXPORT  DescribeApplicationProviderRequest
    : public ModelBase
{
public:
    DescribeApplicationProviderRequest();
    virtual ~DescribeApplicationProviderRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DescribeApplicationProviderRequest members

    /// <summary>
    /// 应用程序提供方Id
    /// </summary>

    std::string getApplicationProviderId() const;
    bool applicationProviderIdIsSet() const;
    void unsetapplicationProviderId();
    void setApplicationProviderId(const std::string& value);

    /// <summary>
    /// 如果正在使用临时安全凭据，则此header是必需的，该值是临时安全凭据的安全令牌（会话令牌）。
    /// </summary>

    std::string getXSecurityToken() const;
    bool xSecurityTokenIsSet() const;
    void unsetxSecurityToken();
    void setXSecurityToken(const std::string& value);


protected:
    std::string applicationProviderId_;
    bool applicationProviderIdIsSet_;
    std::string xSecurityToken_;
    bool xSecurityTokenIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DescribeApplicationProviderRequest& dereference_from_shared_ptr(std::shared_ptr<DescribeApplicationProviderRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_DescribeApplicationProviderRequest_H_
