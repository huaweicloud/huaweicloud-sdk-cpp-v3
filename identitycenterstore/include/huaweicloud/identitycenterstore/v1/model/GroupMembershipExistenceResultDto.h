
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_GroupMembershipExistenceResultDto_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_GroupMembershipExistenceResultDto_H_


#include <huaweicloud/identitycenterstore/v1/IdentityCenterStoreExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/identitycenterstore/v1/model/MemberIdDto.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Indicates whether a resource is a member of a group in the identity store.
/// </summary>
class HUAWEICLOUD_IDENTITYCENTERSTORE_V1_EXPORT  GroupMembershipExistenceResultDto
    : public ModelBase
{
public:
    GroupMembershipExistenceResultDto();
    virtual ~GroupMembershipExistenceResultDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// GroupMembershipExistenceResultDto members

    /// <summary>
    /// 身份源中IAM身份中心用户组的全局唯一标识符（ID）
    /// </summary>

    std::string getGroupId() const;
    bool groupIdIsSet() const;
    void unsetgroupId();
    void setGroupId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    MemberIdDto getMemberId() const;
    bool memberIdIsSet() const;
    void unsetmemberId();
    void setMemberId(const MemberIdDto& value);

    /// <summary>
    /// 一个布尔值，表示用户是否在组中
    /// </summary>

    bool isMembershipExists() const;
    bool membershipExistsIsSet() const;
    void unsetmembershipExists();
    void setMembershipExists(bool value);


protected:
    std::string groupId_;
    bool groupIdIsSet_;
    MemberIdDto memberId_;
    bool memberIdIsSet_;
    bool membershipExists_;
    bool membershipExistsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_GroupMembershipExistenceResultDto_H_
