
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_IsMemberInGroupsResponse_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_IsMemberInGroupsResponse_H_


#include <huaweicloud/identitycenterstore/v1/IdentityCenterStoreExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/identitycenterstore/v1/model/GroupMembershipExistenceResultDto.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_IDENTITYCENTERSTORE_V1_EXPORT  IsMemberInGroupsResponse
    : public ModelBase, public HttpResponse
{
public:
    IsMemberInGroupsResponse();
    virtual ~IsMemberInGroupsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// IsMemberInGroupsResponse members

    /// <summary>
    /// 成员是否在用户组内的结果列表
    /// </summary>

    std::vector<GroupMembershipExistenceResultDto>& getResults();
    bool resultsIsSet() const;
    void unsetresults();
    void setResults(const std::vector<GroupMembershipExistenceResultDto>& value);


protected:
    std::vector<GroupMembershipExistenceResultDto> results_;
    bool resultsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_IsMemberInGroupsResponse_H_
