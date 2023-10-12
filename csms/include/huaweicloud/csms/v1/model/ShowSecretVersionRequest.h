
#ifndef HUAWEICLOUD_SDK_CSMS_V1_MODEL_ShowSecretVersionRequest_H_
#define HUAWEICLOUD_SDK_CSMS_V1_MODEL_ShowSecretVersionRequest_H_


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
class HUAWEICLOUD_CSMS_V1_EXPORT  ShowSecretVersionRequest
    : public ModelBase
{
public:
    ShowSecretVersionRequest();
    virtual ~ShowSecretVersionRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowSecretVersionRequest members

    /// <summary>
    /// 凭据名称。
    /// </summary>

    std::string getSecretName() const;
    bool secretNameIsSet() const;
    void unsetsecretName();
    void setSecretName(const std::string& value);

    /// <summary>
    /// 凭据的版本标识符。
    /// </summary>

    std::string getVersionId() const;
    bool versionIdIsSet() const;
    void unsetversionId();
    void setVersionId(const std::string& value);


protected:
    std::string secretName_;
    bool secretNameIsSet_;
    std::string versionId_;
    bool versionIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowSecretVersionRequest& dereference_from_shared_ptr(std::shared_ptr<ShowSecretVersionRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CSMS_V1_MODEL_ShowSecretVersionRequest_H_
