
#ifndef HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_DeploymentHostListEntity_H_
#define HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_DeploymentHostListEntity_H_


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
class HUAWEICLOUD_CODEARTSDEPLOY_V2_EXPORT  DeploymentHostListEntity
    : public ModelBase
{
public:
    DeploymentHostListEntity();
    virtual ~DeploymentHostListEntity();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeploymentHostListEntity members

    /// <summary>
    /// 主机id列表
    /// </summary>

    std::vector<std::string>& getHostIdList();
    bool hostIdListIsSet() const;
    void unsethostIdList();
    void setHostIdList(const std::vector<std::string>& value);


protected:
    std::vector<std::string> hostIdList_;
    bool hostIdListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_DeploymentHostListEntity_H_
