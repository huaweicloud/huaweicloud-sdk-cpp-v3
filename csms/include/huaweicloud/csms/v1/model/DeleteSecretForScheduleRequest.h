
#ifndef HUAWEICLOUD_SDK_CSMS_V1_MODEL_DeleteSecretForScheduleRequest_H_
#define HUAWEICLOUD_SDK_CSMS_V1_MODEL_DeleteSecretForScheduleRequest_H_

#include <huaweicloud/csms/v1/CsmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/csms/v1/model/DeleteSecretForScheduleRequestBody.h>

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
class HUAWEICLOUD_CSMS_V1_EXPORT  DeleteSecretForScheduleRequest
    : public ModelBase
{
public:
    DeleteSecretForScheduleRequest();
    virtual ~DeleteSecretForScheduleRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// DeleteSecretForScheduleRequest members

    /// <summary>
    /// 凭据名称。
    /// </summary>

    std::string getSecretName() const;
    bool secretNameIsSet() const;
    void unsetsecretName();
    void setSecretName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    DeleteSecretForScheduleRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const DeleteSecretForScheduleRequestBody& value);


protected:
    std::string secretName_;
    bool secretNameIsSet_;
    DeleteSecretForScheduleRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DeleteSecretForScheduleRequest& dereference_from_shared_ptr(std::shared_ptr<DeleteSecretForScheduleRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CSMS_V1_MODEL_DeleteSecretForScheduleRequest_H_
