
#ifndef HUAWEICLOUD_SDK_CSMS_V1_MODEL_CreateSecretResponse_H_
#define HUAWEICLOUD_SDK_CSMS_V1_MODEL_CreateSecretResponse_H_

#include <huaweicloud/csms/v1/CsmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/csms/v1/model/Secret.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CSMS_V1_EXPORT  CreateSecretResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateSecretResponse();
    virtual ~CreateSecretResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateSecretResponse members

    /// <summary>
    /// 
    /// </summary>

    Secret getSecret() const;
    bool secretIsSet() const;
    void unsetsecret();
    void setSecret(const Secret& value);


protected:
    Secret secret_;
    bool secretIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CSMS_V1_MODEL_CreateSecretResponse_H_
