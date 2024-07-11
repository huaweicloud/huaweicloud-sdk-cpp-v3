
#ifndef HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_BatchUpdateApplicationPermissionsRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_BatchUpdateApplicationPermissionsRequest_H_


#include <huaweicloud/codeartsdeploy/v2/CodeArtsDeployExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsdeploy/v2/model/BatchUpdateApplicationPermissionsRequestBody.h>

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
class HUAWEICLOUD_CODEARTSDEPLOY_V2_EXPORT  BatchUpdateApplicationPermissionsRequest
    : public ModelBase
{
public:
    BatchUpdateApplicationPermissionsRequest();
    virtual ~BatchUpdateApplicationPermissionsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchUpdateApplicationPermissionsRequest members

    /// <summary>
    /// 
    /// </summary>

    BatchUpdateApplicationPermissionsRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const BatchUpdateApplicationPermissionsRequestBody& value);


protected:
    BatchUpdateApplicationPermissionsRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    BatchUpdateApplicationPermissionsRequest& dereference_from_shared_ptr(std::shared_ptr<BatchUpdateApplicationPermissionsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_BatchUpdateApplicationPermissionsRequest_H_
