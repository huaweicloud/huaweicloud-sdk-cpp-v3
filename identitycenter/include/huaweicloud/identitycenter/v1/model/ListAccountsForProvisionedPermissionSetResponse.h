
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_ListAccountsForProvisionedPermissionSetResponse_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_ListAccountsForProvisionedPermissionSetResponse_H_


#include <huaweicloud/identitycenter/v1/IdentityCenterExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/identitycenter/v1/model/PageInfoDto.h>
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
/// Response Object
/// </summary>
class HUAWEICLOUD_IDENTITYCENTER_V1_EXPORT  ListAccountsForProvisionedPermissionSetResponse
    : public ModelBase, public HttpResponse
{
public:
    ListAccountsForProvisionedPermissionSetResponse();
    virtual ~ListAccountsForProvisionedPermissionSetResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListAccountsForProvisionedPermissionSetResponse members

    /// <summary>
    /// 账户ID列表
    /// </summary>

    std::vector<std::string>& getAccountIds();
    bool accountIdsIsSet() const;
    void unsetaccountIds();
    void setAccountIds(const std::vector<std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    PageInfoDto getPageInfo() const;
    bool pageInfoIsSet() const;
    void unsetpageInfo();
    void setPageInfo(const PageInfoDto& value);


protected:
    std::vector<std::string> accountIds_;
    bool accountIdsIsSet_;
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

#endif // HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_ListAccountsForProvisionedPermissionSetResponse_H_
