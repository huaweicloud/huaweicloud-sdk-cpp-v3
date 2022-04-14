
#ifndef HUAWEICLOUD_SDK_CSMS_V1_MODEL_CreateSecretVersionResponse_H_
#define HUAWEICLOUD_SDK_CSMS_V1_MODEL_CreateSecretVersionResponse_H_

#include <huaweicloud/csms/v1/CsmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/csms/v1/model/VersionMetadata.h>

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
class HUAWEICLOUD_CSMS_V1_EXPORT  CreateSecretVersionResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateSecretVersionResponse();
    virtual ~CreateSecretVersionResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateSecretVersionResponse members

    /// <summary>
    /// 
    /// </summary>

    VersionMetadata getVersionMetadata() const;
    bool versionMetadataIsSet() const;
    void unsetversionMetadata();
    void setVersionMetadata(const VersionMetadata& value);


protected:
    VersionMetadata versionMetadata_;
    bool versionMetadataIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CSMS_V1_MODEL_CreateSecretVersionResponse_H_
