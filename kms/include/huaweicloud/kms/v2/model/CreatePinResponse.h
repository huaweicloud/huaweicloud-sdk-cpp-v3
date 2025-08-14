
#ifndef HUAWEICLOUD_SDK_KMS_V2_MODEL_CreatePinResponse_H_
#define HUAWEICLOUD_SDK_KMS_V2_MODEL_CreatePinResponse_H_


#include <huaweicloud/kms/v2/KmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_KMS_V2_EXPORT  CreatePinResponse
    : public ModelBase, public HttpResponse
{
public:
    CreatePinResponse();
    virtual ~CreatePinResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreatePinResponse members

    /// <summary>
    /// 创建的pin码
    /// </summary>

    std::string getPin() const;
    bool pinIsSet() const;
    void unsetpin();
    void setPin(const std::string& value);


protected:
    std::string pin_;
    bool pinIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KMS_V2_MODEL_CreatePinResponse_H_
