
#ifndef HUAWEICLOUD_SDK_CSMS_V1_MODEL_ShowAgencyRequest_H_
#define HUAWEICLOUD_SDK_CSMS_V1_MODEL_ShowAgencyRequest_H_


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
class HUAWEICLOUD_CSMS_V1_EXPORT  ShowAgencyRequest
    : public ModelBase
{
public:
    ShowAgencyRequest();
    virtual ~ShowAgencyRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowAgencyRequest members

    /// <summary>
    /// 凭据类型。
    /// </summary>

    std::string getSecretType() const;
    bool secretTypeIsSet() const;
    void unsetsecretType();
    void setSecretType(const std::string& value);


protected:
    std::string secretType_;
    bool secretTypeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowAgencyRequest& dereference_from_shared_ptr(std::shared_ptr<ShowAgencyRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CSMS_V1_MODEL_ShowAgencyRequest_H_
