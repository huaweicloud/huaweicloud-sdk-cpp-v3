
#ifndef HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_ListHostGroupPermissionsResponse_H_
#define HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_ListHostGroupPermissionsResponse_H_


#include <huaweicloud/codeartsdeploy/v2/CodeArtsDeployExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsdeploy/v2/model/DevUcClusterPermission.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CODEARTSDEPLOY_V2_EXPORT  ListHostGroupPermissionsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListHostGroupPermissionsResponse();
    virtual ~ListHostGroupPermissionsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListHostGroupPermissionsResponse members

    /// <summary>
    /// 主机集群权限矩阵
    /// </summary>

    std::vector<DevUcClusterPermission>& getBody();
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const std::vector<DevUcClusterPermission>& value);


protected:
    std::vector<DevUcClusterPermission> body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_ListHostGroupPermissionsResponse_H_
