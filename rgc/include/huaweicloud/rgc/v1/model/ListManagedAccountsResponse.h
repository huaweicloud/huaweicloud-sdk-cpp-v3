
#ifndef HUAWEICLOUD_SDK_RGC_V1_MODEL_ListManagedAccountsResponse_H_
#define HUAWEICLOUD_SDK_RGC_V1_MODEL_ListManagedAccountsResponse_H_


#include <huaweicloud/rgc/v1/RgcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rgc/v1/model/PageInfoDto.h>
#include <vector>
#include <huaweicloud/rgc/v1/model/ManagedAccount.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_RGC_V1_EXPORT  ListManagedAccountsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListManagedAccountsResponse();
    virtual ~ListManagedAccountsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListManagedAccountsResponse members

    /// <summary>
    /// 纳管的账号信息。
    /// </summary>

    std::vector<ManagedAccount>& getManagedAccounts();
    bool managedAccountsIsSet() const;
    void unsetmanagedAccounts();
    void setManagedAccounts(const std::vector<ManagedAccount>& value);

    /// <summary>
    /// 
    /// </summary>

    PageInfoDto getPageInfo() const;
    bool pageInfoIsSet() const;
    void unsetpageInfo();
    void setPageInfo(const PageInfoDto& value);


protected:
    std::vector<ManagedAccount> managedAccounts_;
    bool managedAccountsIsSet_;
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

#endif // HUAWEICLOUD_SDK_RGC_V1_MODEL_ListManagedAccountsResponse_H_
