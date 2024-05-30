
#ifndef HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_ListDelegatedServicesResponse_H_
#define HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_ListDelegatedServicesResponse_H_


#include <huaweicloud/organizations/v1/OrganizationsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/organizations/v1/model/PageInfoDto.h>
#include <huaweicloud/organizations/v1/model/DelegatedServiceDto.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_ORGANIZATIONS_V1_EXPORT  ListDelegatedServicesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListDelegatedServicesResponse();
    virtual ~ListDelegatedServicesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListDelegatedServicesResponse members

    /// <summary>
    /// 账号是其委托管理员的服务。
    /// </summary>

    std::vector<DelegatedServiceDto>& getDelegatedServices();
    bool delegatedServicesIsSet() const;
    void unsetdelegatedServices();
    void setDelegatedServices(const std::vector<DelegatedServiceDto>& value);

    /// <summary>
    /// 
    /// </summary>

    PageInfoDto getPageInfo() const;
    bool pageInfoIsSet() const;
    void unsetpageInfo();
    void setPageInfo(const PageInfoDto& value);


protected:
    std::vector<DelegatedServiceDto> delegatedServices_;
    bool delegatedServicesIsSet_;
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

#endif // HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_ListDelegatedServicesResponse_H_
