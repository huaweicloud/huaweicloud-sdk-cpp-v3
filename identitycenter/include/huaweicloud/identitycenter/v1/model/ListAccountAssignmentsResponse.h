
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_ListAccountAssignmentsResponse_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_ListAccountAssignmentsResponse_H_


#include <huaweicloud/identitycenter/v1/IdentityCenterExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/identitycenter/v1/model/AccountAssignmentDto.h>
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
class HUAWEICLOUD_IDENTITYCENTER_V1_EXPORT  ListAccountAssignmentsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListAccountAssignmentsResponse();
    virtual ~ListAccountAssignmentsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListAccountAssignmentsResponse members

    /// <summary>
    /// 满足查询条件的账号分配列表
    /// </summary>

    std::vector<AccountAssignmentDto>& getAccountAssignments();
    bool accountAssignmentsIsSet() const;
    void unsetaccountAssignments();
    void setAccountAssignments(const std::vector<AccountAssignmentDto>& value);

    /// <summary>
    /// 
    /// </summary>

    PageInfoDto getPageInfo() const;
    bool pageInfoIsSet() const;
    void unsetpageInfo();
    void setPageInfo(const PageInfoDto& value);


protected:
    std::vector<AccountAssignmentDto> accountAssignments_;
    bool accountAssignmentsIsSet_;
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

#endif // HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_ListAccountAssignmentsResponse_H_
