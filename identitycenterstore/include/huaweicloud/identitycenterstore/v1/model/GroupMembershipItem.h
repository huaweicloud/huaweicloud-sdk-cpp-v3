
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_GroupMembershipItem_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_GroupMembershipItem_H_


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
/// 关联关系
/// </summary>
class HUAWEICLOUD_IDENTITYCENTERSTORE_V1_EXPORT  GroupMembershipItem
    : public ModelBase
{
public:
    GroupMembershipItem();
    virtual ~GroupMembershipItem();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// GroupMembershipItem members

    /// <summary>
    /// 身份源中IAM身份中心用户组的全局唯一标识符（ID）
    /// </summary>

    std::string getGroupId() const;
    bool groupIdIsSet() const;
    void unsetgroupId();
    void setGroupId(const std::string& value);

    /// <summary>
    /// 身份源的全局唯一标识符（ID）
    /// </summary>

    std::string getIdentityStoreId() const;
    bool identityStoreIdIsSet() const;
    void unsetidentityStoreId();
    void setIdentityStoreId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    MemberIdDto getMemberId() const;
    bool memberIdIsSet() const;
    void unsetmemberId();
    void setMemberId(const MemberIdDto& value);

    /// <summary>
    /// 身份源中用户和组关联关系的全局唯一标识符（ID）
    /// </summary>

    std::string getMembershipId() const;
    bool membershipIdIsSet() const;
    void unsetmembershipId();
    void setMembershipId(const std::string& value);


protected:
    std::string groupId_;
    bool groupIdIsSet_;
    std::string identityStoreId_;
    bool identityStoreIdIsSet_;
    MemberIdDto memberId_;
    bool memberIdIsSet_;
    std::string membershipId_;
    bool membershipIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_GroupMembershipItem_H_
