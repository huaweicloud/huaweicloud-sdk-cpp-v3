
#ifndef HUAWEICLOUD_SDK_CSMS_V1_MODEL_DeleteSecretTagRequest_H_
#define HUAWEICLOUD_SDK_CSMS_V1_MODEL_DeleteSecretTagRequest_H_


#include <huaweicloud/csms/v1/CsmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_CSMS_V1_EXPORT  DeleteSecretTagRequest
    : public ModelBase
{
public:
    DeleteSecretTagRequest();
    virtual ~DeleteSecretTagRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteSecretTagRequest members

    /// <summary>
    /// 凭据ID
    /// </summary>

    std::string getSecretId() const;
    bool secretIdIsSet() const;
    void unsetsecretId();
    void setSecretId(const std::string& value);

    /// <summary>
    /// 标签键的值
    /// </summary>

    std::string getKey() const;
    bool keyIsSet() const;
    void unsetkey();
    void setKey(const std::string& value);


protected:
    std::string secretId_;
    bool secretIdIsSet_;
    std::string key_;
    bool keyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DeleteSecretTagRequest& dereference_from_shared_ptr(std::shared_ptr<DeleteSecretTagRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CSMS_V1_MODEL_DeleteSecretTagRequest_H_
