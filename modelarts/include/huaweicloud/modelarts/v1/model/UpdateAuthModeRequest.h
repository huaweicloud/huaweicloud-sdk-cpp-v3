
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_UpdateAuthModeRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_UpdateAuthModeRequest_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/UpdateAuthModeRequestBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  UpdateAuthModeRequest
    : public ModelBase
{
public:
    UpdateAuthModeRequest();
    virtual ~UpdateAuthModeRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateAuthModeRequest members

    /// <summary>
    /// 
    /// </summary>

    UpdateAuthModeRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const UpdateAuthModeRequestBody& value);


protected:
    UpdateAuthModeRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateAuthModeRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateAuthModeRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_UpdateAuthModeRequest_H_
