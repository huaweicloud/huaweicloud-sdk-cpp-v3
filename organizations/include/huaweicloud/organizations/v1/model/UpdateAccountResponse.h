
#ifndef HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_UpdateAccountResponse_H_
#define HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_UpdateAccountResponse_H_


#include <huaweicloud/organizations/v1/OrganizationsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/organizations/v1/model/AccountDto.h>

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
class HUAWEICLOUD_ORGANIZATIONS_V1_EXPORT  UpdateAccountResponse
    : public ModelBase, public HttpResponse
{
public:
    UpdateAccountResponse();
    virtual ~UpdateAccountResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateAccountResponse members

    /// <summary>
    /// 
    /// </summary>

    AccountDto getAccount() const;
    bool accountIsSet() const;
    void unsetaccount();
    void setAccount(const AccountDto& value);


protected:
    AccountDto account_;
    bool accountIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_UpdateAccountResponse_H_
