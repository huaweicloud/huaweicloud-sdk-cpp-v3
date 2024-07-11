
#ifndef HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_ListEnvironmentPermissionsResponse_H_
#define HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_ListEnvironmentPermissionsResponse_H_


#include <huaweicloud/codeartsdeploy/v2/CodeArtsDeployExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsdeploy/v2/model/DevUcEnvironmentPermission.h>
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
class HUAWEICLOUD_CODEARTSDEPLOY_V2_EXPORT  ListEnvironmentPermissionsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListEnvironmentPermissionsResponse();
    virtual ~ListEnvironmentPermissionsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListEnvironmentPermissionsResponse members

    /// <summary>
    /// 权限数据，list类型数据
    /// </summary>

    std::vector<DevUcEnvironmentPermission>& getBody();
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const std::vector<DevUcEnvironmentPermission>& value);


protected:
    std::vector<DevUcEnvironmentPermission> body_;
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

#endif // HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_ListEnvironmentPermissionsResponse_H_
