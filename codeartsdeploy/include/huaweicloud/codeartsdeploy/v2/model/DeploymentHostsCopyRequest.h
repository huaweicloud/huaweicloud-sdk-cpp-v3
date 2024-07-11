
#ifndef HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_DeploymentHostsCopyRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_DeploymentHostsCopyRequest_H_


#include <huaweicloud/codeartsdeploy/v2/CodeArtsDeployExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSDEPLOY_V2_EXPORT  DeploymentHostsCopyRequest
    : public ModelBase
{
public:
    DeploymentHostsCopyRequest();
    virtual ~DeploymentHostsCopyRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeploymentHostsCopyRequest members

    /// <summary>
    /// 主机id列表
    /// </summary>

    std::vector<std::string>& getHostUuids();
    bool hostUuidsIsSet() const;
    void unsethostUuids();
    void setHostUuids(const std::vector<std::string>& value);

    /// <summary>
    /// 目标主机集群id
    /// </summary>

    std::string getTargetGroupId() const;
    bool targetGroupIdIsSet() const;
    void unsettargetGroupId();
    void setTargetGroupId(const std::string& value);


protected:
    std::vector<std::string> hostUuids_;
    bool hostUuidsIsSet_;
    std::string targetGroupId_;
    bool targetGroupIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_DeploymentHostsCopyRequest_H_
