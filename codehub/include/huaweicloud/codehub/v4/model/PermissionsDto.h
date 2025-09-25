
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_PermissionsDto_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_PermissionsDto_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codehub/v4/model/MemberAccess.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEHUB_V4_EXPORT  PermissionsDto
    : public ModelBase
{
public:
    PermissionsDto();
    virtual ~PermissionsDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PermissionsDto members

    /// <summary>
    /// 
    /// </summary>

    MemberAccess getRepositoryAccess() const;
    bool repositoryAccessIsSet() const;
    void unsetrepositoryAccess();
    void setRepositoryAccess(const MemberAccess& value);

    /// <summary>
    /// 
    /// </summary>

    MemberAccess getGroupAccess() const;
    bool groupAccessIsSet() const;
    void unsetgroupAccess();
    void setGroupAccess(const MemberAccess& value);


protected:
    MemberAccess repositoryAccess_;
    bool repositoryAccessIsSet_;
    MemberAccess groupAccess_;
    bool groupAccessIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_PermissionsDto_H_
