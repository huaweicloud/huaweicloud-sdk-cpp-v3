
#ifndef HUAWEICLOUD_SDK_SDRS_V1_MODEL_CreateProtectionGroupRequest_H_
#define HUAWEICLOUD_SDK_SDRS_V1_MODEL_CreateProtectionGroupRequest_H_

#include <huaweicloud/sdrs/v1/SdrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/sdrs/v1/model/CreateProtectionGroupRequestBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_SDRS_V1_EXPORT  CreateProtectionGroupRequest
    : public ModelBase
{
public:
    CreateProtectionGroupRequest();
    virtual ~CreateProtectionGroupRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateProtectionGroupRequest members

    /// <summary>
    /// 
    /// </summary>

    CreateProtectionGroupRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CreateProtectionGroupRequestBody& value);


protected:
    CreateProtectionGroupRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateProtectionGroupRequest& dereference_from_shared_ptr(std::shared_ptr<CreateProtectionGroupRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SDRS_V1_MODEL_CreateProtectionGroupRequest_H_
