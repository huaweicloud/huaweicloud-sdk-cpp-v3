
#ifndef HUAWEICLOUD_SDK_AAD_V2_MODEL_ShowWafQpsResponse_H_
#define HUAWEICLOUD_SDK_AAD_V2_MODEL_ShowWafQpsResponse_H_


#include <huaweicloud/aad/v2/AadExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_AAD_V2_EXPORT  ShowWafQpsResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowWafQpsResponse();
    virtual ~ShowWafQpsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowWafQpsResponse members

    /// <summary>
    /// qps
    /// </summary>

    int32_t getQps() const;
    bool qpsIsSet() const;
    void unsetqps();
    void setQps(int32_t value);


protected:
    int32_t qps_;
    bool qpsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_AAD_V2_MODEL_ShowWafQpsResponse_H_
