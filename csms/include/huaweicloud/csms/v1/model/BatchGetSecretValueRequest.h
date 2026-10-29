
#ifndef HUAWEICLOUD_SDK_CSMS_V1_MODEL_BatchGetSecretValueRequest_H_
#define HUAWEICLOUD_SDK_CSMS_V1_MODEL_BatchGetSecretValueRequest_H_


#include <huaweicloud/csms/v1/CsmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/csms/v1/model/BatchGetSecretValueRequestBody.h>

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
class HUAWEICLOUD_CSMS_V1_EXPORT  BatchGetSecretValueRequest
    : public ModelBase
{
public:
    BatchGetSecretValueRequest();
    virtual ~BatchGetSecretValueRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchGetSecretValueRequest members

    /// <summary>
    /// 
    /// </summary>

    BatchGetSecretValueRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const BatchGetSecretValueRequestBody& value);


protected:
    BatchGetSecretValueRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    BatchGetSecretValueRequest& dereference_from_shared_ptr(std::shared_ptr<BatchGetSecretValueRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CSMS_V1_MODEL_BatchGetSecretValueRequest_H_
