
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_AssociateGroupUserGroupResponse_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_AssociateGroupUserGroupResponse_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsrepo/v4/model/MemberBaseDto.h>
#include <huaweicloud/codeartsrepo/v4/model/FailureForBatchCreateGroupMembersDto.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  AssociateGroupUserGroupResponse
    : public ModelBase, public HttpResponse
{
public:
    AssociateGroupUserGroupResponse();
    virtual ~AssociateGroupUserGroupResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AssociateGroupUserGroupResponse members

    /// <summary>
    /// 关联成功成员列表
    /// </summary>

    std::vector<MemberBaseDto>& getSuccess();
    bool successIsSet() const;
    void unsetsuccess();
    void setSuccess(const std::vector<MemberBaseDto>& value);

    /// <summary>
    /// 关联失败成员列表
    /// </summary>

    std::vector<FailureForBatchCreateGroupMembersDto>& getFailure();
    bool failureIsSet() const;
    void unsetfailure();
    void setFailure(const std::vector<FailureForBatchCreateGroupMembersDto>& value);


protected:
    std::vector<MemberBaseDto> success_;
    bool successIsSet_;
    std::vector<FailureForBatchCreateGroupMembersDto> failure_;
    bool failureIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_AssociateGroupUserGroupResponse_H_
