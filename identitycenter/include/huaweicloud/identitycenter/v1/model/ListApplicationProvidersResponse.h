
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_ListApplicationProvidersResponse_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_ListApplicationProvidersResponse_H_


#include <huaweicloud/identitycenter/v1/IdentityCenterExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/identitycenter/v1/model/ApplicationProviderDto.h>
#include <huaweicloud/identitycenter/v1/model/PageInfoDto.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_IDENTITYCENTER_V1_EXPORT  ListApplicationProvidersResponse
    : public ModelBase, public HttpResponse
{
public:
    ListApplicationProvidersResponse();
    virtual ~ListApplicationProvidersResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListApplicationProvidersResponse members

    /// <summary>
    /// 应用程序提供商列表
    /// </summary>

    std::vector<ApplicationProviderDto>& getApplicationProviders();
    bool applicationProvidersIsSet() const;
    void unsetapplicationProviders();
    void setApplicationProviders(const std::vector<ApplicationProviderDto>& value);

    /// <summary>
    /// 
    /// </summary>

    PageInfoDto getPageInfo() const;
    bool pageInfoIsSet() const;
    void unsetpageInfo();
    void setPageInfo(const PageInfoDto& value);


protected:
    std::vector<ApplicationProviderDto> applicationProviders_;
    bool applicationProvidersIsSet_;
    PageInfoDto pageInfo_;
    bool pageInfoIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_ListApplicationProvidersResponse_H_
