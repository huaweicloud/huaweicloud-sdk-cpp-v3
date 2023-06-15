
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_ShowProtectableResponse_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_ShowProtectableResponse_H_

#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cbr/v1/model/ProtectablesResp.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  ShowProtectableResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowProtectableResponse();
    virtual ~ShowProtectableResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowProtectableResponse members

    /// <summary>
    /// 
    /// </summary>

    ProtectablesResp getInstance() const;
    bool instanceIsSet() const;
    void unsetinstance();
    void setInstance(const ProtectablesResp& value);


protected:
    ProtectablesResp instance_;
    bool instanceIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_ShowProtectableResponse_H_
