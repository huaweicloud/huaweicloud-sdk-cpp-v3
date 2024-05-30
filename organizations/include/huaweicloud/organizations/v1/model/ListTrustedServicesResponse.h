
#ifndef HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_ListTrustedServicesResponse_H_
#define HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_ListTrustedServicesResponse_H_


#include <huaweicloud/organizations/v1/OrganizationsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/organizations/v1/model/PageInfoDto.h>
#include <huaweicloud/organizations/v1/model/TrustedServiceDto.h>
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
class HUAWEICLOUD_ORGANIZATIONS_V1_EXPORT  ListTrustedServicesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListTrustedServicesResponse();
    virtual ~ListTrustedServicesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListTrustedServicesResponse members

    /// <summary>
    /// 启用与组织集成的服务主体列表。
    /// </summary>

    std::vector<TrustedServiceDto>& getTrustedServices();
    bool trustedServicesIsSet() const;
    void unsettrustedServices();
    void setTrustedServices(const std::vector<TrustedServiceDto>& value);

    /// <summary>
    /// 
    /// </summary>

    PageInfoDto getPageInfo() const;
    bool pageInfoIsSet() const;
    void unsetpageInfo();
    void setPageInfo(const PageInfoDto& value);


protected:
    std::vector<TrustedServiceDto> trustedServices_;
    bool trustedServicesIsSet_;
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

#endif // HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_ListTrustedServicesResponse_H_
