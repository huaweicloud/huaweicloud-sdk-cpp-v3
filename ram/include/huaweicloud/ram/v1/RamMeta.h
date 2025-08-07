#ifndef HUAWEICLOUD_SDK_RAM_V1_RamMeta_H_
#define HUAWEICLOUD_SDK_RAM_V1_RamMeta_H_

#include <huaweicloud/core/http/HttpRequestDef.h>
#include <huaweicloud/ram/v1/RamExport.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Ram {
namespace V1 {

using namespace HuaweiCloud::Sdk::Core::Http;

class HUAWEICLOUD_RAM_V1_EXPORT  RamMeta {
public:
    static HttpRequestDef genRequestDefForAssociateResourceSharePermission();
    static HttpRequestDef genRequestDefForDisassociateResourceSharePermission();
    static HttpRequestDef genRequestDefForListResourceSharePermissions();
    static HttpRequestDef genRequestDefForListQuota();
    static HttpRequestDef genRequestDefForListResourceTypes();
    static HttpRequestDef genRequestDefForDisableOrganizationShare();
    static HttpRequestDef genRequestDefForEnableOrganizationShare();
    static HttpRequestDef genRequestDefForShowOrganizationShare();
    static HttpRequestDef genRequestDefForListPermissionVersions();
    static HttpRequestDef genRequestDefForListPermissions();
    static HttpRequestDef genRequestDefForShowPermission();
    static HttpRequestDef genRequestDefForSearchDistinctPrincipals();
    static HttpRequestDef genRequestDefForSearchSharedPrincipals();
    static HttpRequestDef genRequestDefForSearchDistinctSharedResources();
    static HttpRequestDef genRequestDefForSearchSharedResources();
    static HttpRequestDef genRequestDefForCreateResourceShare();
    static HttpRequestDef genRequestDefForDeleteResourceShare();
    static HttpRequestDef genRequestDefForSearchResourceShares();
    static HttpRequestDef genRequestDefForUpdateResourceShare();
    static HttpRequestDef genRequestDefForAssociateResourceShare();
    static HttpRequestDef genRequestDefForDisassociateResourceShare();
    static HttpRequestDef genRequestDefForSearchResourceShareAssociations();
    static HttpRequestDef genRequestDefForAcceptResourceShareInvitation();
    static HttpRequestDef genRequestDefForRejectResourceShareInvitation();
    static HttpRequestDef genRequestDefForSearchResourceShareInvitation();
    static HttpRequestDef genRequestDefForBatchCreateResourceShareTags();
    static HttpRequestDef genRequestDefForBatchDeleteResourceShareTags();
    static HttpRequestDef genRequestDefForListResourceShareTags();
    static HttpRequestDef genRequestDefForListResourceSharesByTags();
    static HttpRequestDef genRequestDefForSearchResourceShareCountByTags();
};

}
}
}
}

#endif // HUAWEICLOUD_SDK_RAM_V1_RamMeta_H_
