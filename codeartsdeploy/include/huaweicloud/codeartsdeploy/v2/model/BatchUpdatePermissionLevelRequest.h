
#ifndef HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_BatchUpdatePermissionLevelRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_BatchUpdatePermissionLevelRequest_H_


#include <huaweicloud/codeartsdeploy/v2/CodeArtsDeployExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsdeploy/v2/model/BatchUpdatePermissionLevelRequestBody.h>

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
class HUAWEICLOUD_CODEARTSDEPLOY_V2_EXPORT  BatchUpdatePermissionLevelRequest
    : public ModelBase
{
public:
    BatchUpdatePermissionLevelRequest();
    virtual ~BatchUpdatePermissionLevelRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchUpdatePermissionLevelRequest members

    /// <summary>
    /// 
    /// </summary>

    BatchUpdatePermissionLevelRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const BatchUpdatePermissionLevelRequestBody& value);


protected:
    BatchUpdatePermissionLevelRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    BatchUpdatePermissionLevelRequest& dereference_from_shared_ptr(std::shared_ptr<BatchUpdatePermissionLevelRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_BatchUpdatePermissionLevelRequest_H_
