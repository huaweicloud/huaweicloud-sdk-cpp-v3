
#ifndef HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_CreateResourceAccountResponse_H_
#define HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_CreateResourceAccountResponse_H_


#include <huaweicloud/organizations/v1/OrganizationsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/organizations/v1/model/CreateAccountStatusDto.h>

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
class HUAWEICLOUD_ORGANIZATIONS_V1_EXPORT  CreateResourceAccountResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateResourceAccountResponse();
    virtual ~CreateResourceAccountResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateResourceAccountResponse members

    /// <summary>
    /// 
    /// </summary>

    CreateAccountStatusDto getCreateAccountStatus() const;
    bool createAccountStatusIsSet() const;
    void unsetcreateAccountStatus();
    void setCreateAccountStatus(const CreateAccountStatusDto& value);


protected:
    CreateAccountStatusDto createAccountStatus_;
    bool createAccountStatusIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_CreateResourceAccountResponse_H_
