
#ifndef HUAWEICLOUD_SDK_CSMS_V1_MODEL_GenerateRandomPasswordRequest_H_
#define HUAWEICLOUD_SDK_CSMS_V1_MODEL_GenerateRandomPasswordRequest_H_


#include <huaweicloud/csms/v1/CsmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/csms/v1/model/CreatePasswordRequestBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CSMS_V1_EXPORT  GenerateRandomPasswordRequest
    : public ModelBase
{
public:
    GenerateRandomPasswordRequest();
    virtual ~GenerateRandomPasswordRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// GenerateRandomPasswordRequest members

    /// <summary>
    /// 
    /// </summary>

    CreatePasswordRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CreatePasswordRequestBody& value);


protected:
    CreatePasswordRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    GenerateRandomPasswordRequest& dereference_from_shared_ptr(std::shared_ptr<GenerateRandomPasswordRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CSMS_V1_MODEL_GenerateRandomPasswordRequest_H_
