
#ifndef HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_ImportHostToEnvironmentResponse_H_
#define HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_ImportHostToEnvironmentResponse_H_

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
/// Response Object
/// </summary>
class HUAWEICLOUD_CODEARTSDEPLOY_V2_EXPORT  ImportHostToEnvironmentResponse
    : public ModelBase, public HttpResponse
{
public:
    ImportHostToEnvironmentResponse();
    virtual ~ImportHostToEnvironmentResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ImportHostToEnvironmentResponse members

    /// <summary>
    /// 响应状态
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 被导入的主机ids
    /// </summary>

    std::vector<std::string>& getResult();
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const std::vector<std::string>& value);


protected:
    std::string status_;
    bool statusIsSet_;
    std::vector<std::string> result_;
    bool resultIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_ImportHostToEnvironmentResponse_H_
