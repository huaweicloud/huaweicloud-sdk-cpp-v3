
#ifndef HUAWEICLOUD_SDK_KMS_V2_MODEL_CreateGrantResponse_H_
#define HUAWEICLOUD_SDK_KMS_V2_MODEL_CreateGrantResponse_H_

#include <huaweicloud/kms/v2/KmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
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
class HUAWEICLOUD_KMS_V2_EXPORT  CreateGrantResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateGrantResponse();
    virtual ~CreateGrantResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateGrantResponse members

    /// <summary>
    /// 授权ID，64字节。
    /// </summary>

    std::string getGrantId() const;
    bool grantIdIsSet() const;
    void unsetgrantId();
    void setGrantId(const std::string& value);


protected:
    std::string grantId_;
    bool grantIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KMS_V2_MODEL_CreateGrantResponse_H_
