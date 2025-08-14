
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_ListApplicationAssignmentsResponse_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_ListApplicationAssignmentsResponse_H_


#include <huaweicloud/identitycenter/v1/IdentityCenterExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/identitycenter/v1/model/ApplicationAssignmentDto.h>
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
class HUAWEICLOUD_IDENTITYCENTER_V1_EXPORT  ListApplicationAssignmentsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListApplicationAssignmentsResponse();
    virtual ~ListApplicationAssignmentsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListApplicationAssignmentsResponse members

    /// <summary>
    /// 应用程序分配的用户或用户组列表
    /// </summary>

    std::vector<ApplicationAssignmentDto>& getApplicationAssignments();
    bool applicationAssignmentsIsSet() const;
    void unsetapplicationAssignments();
    void setApplicationAssignments(const std::vector<ApplicationAssignmentDto>& value);

    /// <summary>
    /// 
    /// </summary>

    PageInfoDto getPageInfo() const;
    bool pageInfoIsSet() const;
    void unsetpageInfo();
    void setPageInfo(const PageInfoDto& value);


protected:
    std::vector<ApplicationAssignmentDto> applicationAssignments_;
    bool applicationAssignmentsIsSet_;
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

#endif // HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_ListApplicationAssignmentsResponse_H_
