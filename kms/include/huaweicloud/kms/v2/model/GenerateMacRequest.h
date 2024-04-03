
#ifndef HUAWEICLOUD_SDK_KMS_V2_MODEL_GenerateMacRequest_H_
#define HUAWEICLOUD_SDK_KMS_V2_MODEL_GenerateMacRequest_H_


#include <huaweicloud/kms/v2/KmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/kms/v2/model/GenerateMacRequestBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_KMS_V2_EXPORT  GenerateMacRequest
    : public ModelBase
{
public:
    GenerateMacRequest();
    virtual ~GenerateMacRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// GenerateMacRequest members

    /// <summary>
    /// 
    /// </summary>

    GenerateMacRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const GenerateMacRequestBody& value);


protected:
    GenerateMacRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    GenerateMacRequest& dereference_from_shared_ptr(std::shared_ptr<GenerateMacRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KMS_V2_MODEL_GenerateMacRequest_H_
