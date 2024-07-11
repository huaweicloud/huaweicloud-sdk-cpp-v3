
#ifndef HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_CopyHostsToTargetRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_CopyHostsToTargetRequest_H_


#include <huaweicloud/codeartsdeploy/v2/CodeArtsDeployExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/codeartsdeploy/v2/model/DeploymentHostsCopyRequest.h>

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
class HUAWEICLOUD_CODEARTSDEPLOY_V2_EXPORT  CopyHostsToTargetRequest
    : public ModelBase
{
public:
    CopyHostsToTargetRequest();
    virtual ~CopyHostsToTargetRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CopyHostsToTargetRequest members

    /// <summary>
    /// 源主机集群id
    /// </summary>

    std::string getGroupId() const;
    bool groupIdIsSet() const;
    void unsetgroupId();
    void setGroupId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    DeploymentHostsCopyRequest getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const DeploymentHostsCopyRequest& value);


protected:
    std::string groupId_;
    bool groupIdIsSet_;
    DeploymentHostsCopyRequest body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CopyHostsToTargetRequest& dereference_from_shared_ptr(std::shared_ptr<CopyHostsToTargetRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_CopyHostsToTargetRequest_H_
