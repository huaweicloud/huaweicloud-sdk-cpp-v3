
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_GetGroupMembershipIdReqBody_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_GetGroupMembershipIdReqBody_H_


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
/// 获取关联关系唯一标识请求体
/// </summary>
class HUAWEICLOUD_IDENTITYCENTERSTORE_V1_EXPORT  GetGroupMembershipIdReqBody
    : public ModelBase
{
public:
    GetGroupMembershipIdReqBody();
    virtual ~GetGroupMembershipIdReqBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// GetGroupMembershipIdReqBody members

    /// <summary>
    /// 身份源中IdentityCenter用户组的全局唯一标识符（ID）
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


protected:
    std::string groupId_;
    bool groupIdIsSet_;
    MemberIdDto memberId_;
    bool memberIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_GetGroupMembershipIdReqBody_H_
