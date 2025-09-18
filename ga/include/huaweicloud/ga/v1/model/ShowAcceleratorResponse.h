
#ifndef HUAWEICLOUD_SDK_GA_V1_MODEL_ShowAcceleratorResponse_H_
#define HUAWEICLOUD_SDK_GA_V1_MODEL_ShowAcceleratorResponse_H_


#include <huaweicloud/ga/v1/GaExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/ga/v1/model/AcceleratorDetail.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GA_V1_EXPORT  ShowAcceleratorResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowAcceleratorResponse();
    virtual ~ShowAcceleratorResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowAcceleratorResponse members

    /// <summary>
    /// 
    /// </summary>

    AcceleratorDetail getAccelerator() const;
    bool acceleratorIsSet() const;
    void unsetaccelerator();
    void setAccelerator(const AcceleratorDetail& value);

    /// <summary>
    /// 请求ID。
    /// </summary>

    std::string getRequestId() const;
    bool requestIdIsSet() const;
    void unsetrequestId();
    void setRequestId(const std::string& value);


protected:
    AcceleratorDetail accelerator_;
    bool acceleratorIsSet_;
    std::string requestId_;
    bool requestIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GA_V1_MODEL_ShowAcceleratorResponse_H_
