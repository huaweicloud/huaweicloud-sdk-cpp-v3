
#ifndef HUAWEICLOUD_SDK_CSMS_V1_MODEL_ShowSecretVersionResponse_H_
#define HUAWEICLOUD_SDK_CSMS_V1_MODEL_ShowSecretVersionResponse_H_

#include <huaweicloud/csms/v1/CsmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/csms/v1/model/Version.h>

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
class HUAWEICLOUD_CSMS_V1_EXPORT  ShowSecretVersionResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowSecretVersionResponse();
    virtual ~ShowSecretVersionResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowSecretVersionResponse members

    /// <summary>
    /// 
    /// </summary>

    Version getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(const Version& value);


protected:
    Version version_;
    bool versionIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CSMS_V1_MODEL_ShowSecretVersionResponse_H_
