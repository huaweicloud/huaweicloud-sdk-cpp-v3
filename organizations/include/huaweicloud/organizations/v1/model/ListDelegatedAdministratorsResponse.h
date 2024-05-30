
#ifndef HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_ListDelegatedAdministratorsResponse_H_
#define HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_ListDelegatedAdministratorsResponse_H_


#include <huaweicloud/organizations/v1/OrganizationsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/organizations/v1/model/PageInfoDto.h>
#include <huaweicloud/organizations/v1/model/DelegatedAdministratorDto.h>
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
class HUAWEICLOUD_ORGANIZATIONS_V1_EXPORT  ListDelegatedAdministratorsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListDelegatedAdministratorsResponse();
    virtual ~ListDelegatedAdministratorsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListDelegatedAdministratorsResponse members

    /// <summary>
    /// 组织中委托管理员列表。
    /// </summary>

    std::vector<DelegatedAdministratorDto>& getDelegatedAdministrators();
    bool delegatedAdministratorsIsSet() const;
    void unsetdelegatedAdministrators();
    void setDelegatedAdministrators(const std::vector<DelegatedAdministratorDto>& value);

    /// <summary>
    /// 
    /// </summary>

    PageInfoDto getPageInfo() const;
    bool pageInfoIsSet() const;
    void unsetpageInfo();
    void setPageInfo(const PageInfoDto& value);


protected:
    std::vector<DelegatedAdministratorDto> delegatedAdministrators_;
    bool delegatedAdministratorsIsSet_;
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

#endif // HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_ListDelegatedAdministratorsResponse_H_
