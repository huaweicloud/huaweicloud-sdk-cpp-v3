
#ifndef HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_UpdateAppDisableStatusRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_UpdateAppDisableStatusRequest_H_


#include <huaweicloud/codeartsdeploy/v2/CodeArtsDeployExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/codeartsdeploy/v2/model/UpdateAppDisableStatusRequestBody.h>

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
class HUAWEICLOUD_CODEARTSDEPLOY_V2_EXPORT  UpdateAppDisableStatusRequest
    : public ModelBase
{
public:
    UpdateAppDisableStatusRequest();
    virtual ~UpdateAppDisableStatusRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateAppDisableStatusRequest members

    /// <summary>
    /// 应用id
    /// </summary>

    std::string getAppId() const;
    bool appIdIsSet() const;
    void unsetappId();
    void setAppId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UpdateAppDisableStatusRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const UpdateAppDisableStatusRequestBody& value);


protected:
    std::string appId_;
    bool appIdIsSet_;
    UpdateAppDisableStatusRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateAppDisableStatusRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateAppDisableStatusRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_UpdateAppDisableStatusRequest_H_
