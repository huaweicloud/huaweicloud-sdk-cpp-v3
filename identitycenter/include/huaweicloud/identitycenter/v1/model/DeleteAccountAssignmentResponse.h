
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_DeleteAccountAssignmentResponse_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_DeleteAccountAssignmentResponse_H_


#include <huaweicloud/identitycenter/v1/IdentityCenterExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/identitycenter/v1/model/AccountAssignmentOperationStatusDto.h>

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
class HUAWEICLOUD_IDENTITYCENTER_V1_EXPORT  DeleteAccountAssignmentResponse
    : public ModelBase, public HttpResponse
{
public:
    DeleteAccountAssignmentResponse();
    virtual ~DeleteAccountAssignmentResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteAccountAssignmentResponse members

    /// <summary>
    /// 
    /// </summary>

    AccountAssignmentOperationStatusDto getAccountAssignmentDeletionStatus() const;
    bool accountAssignmentDeletionStatusIsSet() const;
    void unsetaccountAssignmentDeletionStatus();
    void setAccountAssignmentDeletionStatus(const AccountAssignmentOperationStatusDto& value);


protected:
    AccountAssignmentOperationStatusDto accountAssignmentDeletionStatus_;
    bool accountAssignmentDeletionStatusIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_DeleteAccountAssignmentResponse_H_
