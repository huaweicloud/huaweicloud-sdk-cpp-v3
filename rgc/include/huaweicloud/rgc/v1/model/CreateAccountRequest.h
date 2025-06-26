
#ifndef HUAWEICLOUD_SDK_RGC_V1_MODEL_CreateAccountRequest_H_
#define HUAWEICLOUD_SDK_RGC_V1_MODEL_CreateAccountRequest_H_


#include <huaweicloud/rgc/v1/RgcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rgc/v1/model/CreateManagedAccountRequest.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_RGC_V1_EXPORT  CreateAccountRequest
    : public ModelBase
{
public:
    CreateAccountRequest();
    virtual ~CreateAccountRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateAccountRequest members

    /// <summary>
    /// 
    /// </summary>

    CreateManagedAccountRequest getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CreateManagedAccountRequest& value);


protected:
    CreateManagedAccountRequest body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateAccountRequest& dereference_from_shared_ptr(std::shared_ptr<CreateAccountRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RGC_V1_MODEL_CreateAccountRequest_H_
