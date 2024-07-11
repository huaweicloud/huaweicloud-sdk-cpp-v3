
#ifndef HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_UpdateHostGroupPermissionsRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_UpdateHostGroupPermissionsRequest_H_


#include <huaweicloud/codeartsdeploy/v2/CodeArtsDeployExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/codeartsdeploy/v2/model/PermissionUpdateV2Body.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CODEARTSDEPLOY_V2_EXPORT  UpdateHostGroupPermissionsRequest
    : public ModelBase
{
public:
    UpdateHostGroupPermissionsRequest();
    virtual ~UpdateHostGroupPermissionsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateHostGroupPermissionsRequest members

    /// <summary>
    /// 主机集群id
    /// </summary>

    std::string getGroupId() const;
    bool groupIdIsSet() const;
    void unsetgroupId();
    void setGroupId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    PermissionUpdateV2Body getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const PermissionUpdateV2Body& value);


protected:
    std::string groupId_;
    bool groupIdIsSet_;
    PermissionUpdateV2Body body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateHostGroupPermissionsRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateHostGroupPermissionsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_UpdateHostGroupPermissionsRequest_H_
