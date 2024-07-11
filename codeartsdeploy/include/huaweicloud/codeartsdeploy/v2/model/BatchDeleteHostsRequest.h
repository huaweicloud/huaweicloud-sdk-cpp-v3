
#ifndef HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_BatchDeleteHostsRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_BatchDeleteHostsRequest_H_


#include <huaweicloud/codeartsdeploy/v2/CodeArtsDeployExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/codeartsdeploy/v2/model/DeploymentHostListEntity.h>

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
class HUAWEICLOUD_CODEARTSDEPLOY_V2_EXPORT  BatchDeleteHostsRequest
    : public ModelBase
{
public:
    BatchDeleteHostsRequest();
    virtual ~BatchDeleteHostsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchDeleteHostsRequest members

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

    DeploymentHostListEntity getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const DeploymentHostListEntity& value);


protected:
    std::string groupId_;
    bool groupIdIsSet_;
    DeploymentHostListEntity body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    BatchDeleteHostsRequest& dereference_from_shared_ptr(std::shared_ptr<BatchDeleteHostsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_BatchDeleteHostsRequest_H_
