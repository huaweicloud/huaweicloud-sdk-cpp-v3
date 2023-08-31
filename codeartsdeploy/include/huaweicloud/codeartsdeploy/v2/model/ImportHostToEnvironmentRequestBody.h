
#ifndef HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_ImportHostToEnvironmentRequestBody_H_
#define HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_ImportHostToEnvironmentRequestBody_H_

#include <huaweicloud/codeartsdeploy/v2/CodeArtsDeployExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
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
/// 环境下导入主机请求体
/// </summary>
class HUAWEICLOUD_CODEARTSDEPLOY_V2_EXPORT  ImportHostToEnvironmentRequestBody
    : public ModelBase
{
public:
    ImportHostToEnvironmentRequestBody();
    virtual ~ImportHostToEnvironmentRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ImportHostToEnvironmentRequestBody members

    /// <summary>
    /// 主机集群id
    /// </summary>

    std::string getGroupId() const;
    bool groupIdIsSet() const;
    void unsetgroupId();
    void setGroupId(const std::string& value);

    /// <summary>
    /// 要导入的主机ids
    /// </summary>

    std::vector<std::string>& getHostIds();
    bool hostIdsIsSet() const;
    void unsethostIds();
    void setHostIds(const std::vector<std::string>& value);


protected:
    std::string groupId_;
    bool groupIdIsSet_;
    std::vector<std::string> hostIds_;
    bool hostIdsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_ImportHostToEnvironmentRequestBody_H_
