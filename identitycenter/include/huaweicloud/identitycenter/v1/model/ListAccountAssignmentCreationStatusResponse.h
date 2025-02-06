
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_ListAccountAssignmentCreationStatusResponse_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_ListAccountAssignmentCreationStatusResponse_H_


#include <huaweicloud/identitycenter/v1/IdentityCenterExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/identitycenter/v1/model/AccountAssignmentOperationStatusMetadataDto.h>
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
class HUAWEICLOUD_IDENTITYCENTER_V1_EXPORT  ListAccountAssignmentCreationStatusResponse
    : public ModelBase, public HttpResponse
{
public:
    ListAccountAssignmentCreationStatusResponse();
    virtual ~ListAccountAssignmentCreationStatusResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListAccountAssignmentCreationStatusResponse members

    /// <summary>
    /// 操作状态列表
    /// </summary>

    std::vector<AccountAssignmentOperationStatusMetadataDto>& getAccountAssignmentsCreationStatus();
    bool accountAssignmentsCreationStatusIsSet() const;
    void unsetaccountAssignmentsCreationStatus();
    void setAccountAssignmentsCreationStatus(const std::vector<AccountAssignmentOperationStatusMetadataDto>& value);

    /// <summary>
    /// 
    /// </summary>

    PageInfoDto getPageInfo() const;
    bool pageInfoIsSet() const;
    void unsetpageInfo();
    void setPageInfo(const PageInfoDto& value);


protected:
    std::vector<AccountAssignmentOperationStatusMetadataDto> accountAssignmentsCreationStatus_;
    bool accountAssignmentsCreationStatusIsSet_;
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

#endif // HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_ListAccountAssignmentCreationStatusResponse_H_
