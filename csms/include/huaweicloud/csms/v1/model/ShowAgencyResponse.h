
#ifndef HUAWEICLOUD_SDK_CSMS_V1_MODEL_ShowAgencyResponse_H_
#define HUAWEICLOUD_SDK_CSMS_V1_MODEL_ShowAgencyResponse_H_


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
/// Response Object
/// </summary>
class HUAWEICLOUD_CSMS_V1_EXPORT  ShowAgencyResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowAgencyResponse();
    virtual ~ShowAgencyResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowAgencyResponse members

    /// <summary>
    /// 委托是否存在。
    /// </summary>

    std::string getAgencyGranted() const;
    bool agencyGrantedIsSet() const;
    void unsetagencyGranted();
    void setAgencyGranted(const std::string& value);


protected:
    std::string agencyGranted_;
    bool agencyGrantedIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CSMS_V1_MODEL_ShowAgencyResponse_H_
