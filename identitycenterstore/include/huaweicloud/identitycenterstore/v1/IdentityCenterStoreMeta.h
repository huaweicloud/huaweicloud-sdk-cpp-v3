#ifndef HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_IdentityCenterStoreMeta_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_IdentityCenterStoreMeta_H_

#include <huaweicloud/core/http/HttpRequestDef.h>
#include <huaweicloud/identitycenterstore/v1/IdentityCenterStoreExport.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {

using namespace HuaweiCloud::Sdk::Core::Http;

class HUAWEICLOUD_IDENTITYCENTERSTORE_V1_EXPORT  IdentityCenterStoreMeta {
public:
    static HttpRequestDef genRequestDefForCreateGroup();
    static HttpRequestDef genRequestDefForDeleteGroup();
    static HttpRequestDef genRequestDefForDescribeGroup();
    static HttpRequestDef genRequestDefForGetGroupId();
    static HttpRequestDef genRequestDefForListGroups();
    static HttpRequestDef genRequestDefForUpdateGroup();
    static HttpRequestDef genRequestDefForCreateGroupMembership();
    static HttpRequestDef genRequestDefForDeleteGroupMembership();
    static HttpRequestDef genRequestDefForDescribeGroupMembership();
    static HttpRequestDef genRequestDefForGetGroupMembershipId();
    static HttpRequestDef genRequestDefForIsMemberInGroups();
    static HttpRequestDef genRequestDefForListGroupMemberships();
    static HttpRequestDef genRequestDefForListGroupMembershipsForMember();
    static HttpRequestDef genRequestDefForCreateUser();
    static HttpRequestDef genRequestDefForDeleteUser();
    static HttpRequestDef genRequestDefForDescribeUser();
    static HttpRequestDef genRequestDefForGetUserId();
    static HttpRequestDef genRequestDefForListUsers();
    static HttpRequestDef genRequestDefForUpdateUser();
};

}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_IdentityCenterStoreMeta_H_
