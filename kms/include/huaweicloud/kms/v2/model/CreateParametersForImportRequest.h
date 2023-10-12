
#ifndef HUAWEICLOUD_SDK_KMS_V2_MODEL_CreateParametersForImportRequest_H_
#define HUAWEICLOUD_SDK_KMS_V2_MODEL_CreateParametersForImportRequest_H_


#include <huaweicloud/kms/v2/KmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/kms/v2/model/GetParametersForImportRequestBody.h>

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
class HUAWEICLOUD_KMS_V2_EXPORT  CreateParametersForImportRequest
    : public ModelBase
{
public:
    CreateParametersForImportRequest();
    virtual ~CreateParametersForImportRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateParametersForImportRequest members

    /// <summary>
    /// 
    /// </summary>

    GetParametersForImportRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const GetParametersForImportRequestBody& value);


protected:
    GetParametersForImportRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateParametersForImportRequest& dereference_from_shared_ptr(std::shared_ptr<CreateParametersForImportRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KMS_V2_MODEL_CreateParametersForImportRequest_H_
