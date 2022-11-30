
#ifndef HUAWEICLOUD_SDK_SDRS_V1_MODEL_ShowProtectedInstanceResponse_H_
#define HUAWEICLOUD_SDK_SDRS_V1_MODEL_ShowProtectedInstanceResponse_H_

#include <huaweicloud/sdrs/v1/SdrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/sdrs/v1/model/ShowProtectedInstanceParams.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_SDRS_V1_EXPORT  ShowProtectedInstanceResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowProtectedInstanceResponse();
    virtual ~ShowProtectedInstanceResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowProtectedInstanceResponse members

    /// <summary>
    /// 
    /// </summary>

    ShowProtectedInstanceParams getProtectedInstance() const;
    bool protectedInstanceIsSet() const;
    void unsetprotectedInstance();
    void setProtectedInstance(const ShowProtectedInstanceParams& value);


protected:
    ShowProtectedInstanceParams protectedInstance_;
    bool protectedInstanceIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SDRS_V1_MODEL_ShowProtectedInstanceResponse_H_
