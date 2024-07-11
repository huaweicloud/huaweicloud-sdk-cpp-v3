
#ifndef HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_UpdateEnvironmentRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_UpdateEnvironmentRequest_H_


#include <huaweicloud/codeartsdeploy/v2/CodeArtsDeployExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsdeploy/v2/model/EnvironmentRequest.h>
#include <string>

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
class HUAWEICLOUD_CODEARTSDEPLOY_V2_EXPORT  UpdateEnvironmentRequest
    : public ModelBase
{
public:
    UpdateEnvironmentRequest();
    virtual ~UpdateEnvironmentRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateEnvironmentRequest members

    /// <summary>
    /// 应用id
    /// </summary>

    std::string getApplicationId() const;
    bool applicationIdIsSet() const;
    void unsetapplicationId();
    void setApplicationId(const std::string& value);

    /// <summary>
    /// 环境id
    /// </summary>

    std::string getEnvironmentId() const;
    bool environmentIdIsSet() const;
    void unsetenvironmentId();
    void setEnvironmentId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    EnvironmentRequest getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const EnvironmentRequest& value);


protected:
    std::string applicationId_;
    bool applicationIdIsSet_;
    std::string environmentId_;
    bool environmentIdIsSet_;
    EnvironmentRequest body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateEnvironmentRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateEnvironmentRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_UpdateEnvironmentRequest_H_
