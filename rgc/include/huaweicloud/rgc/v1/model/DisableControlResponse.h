
#ifndef HUAWEICLOUD_SDK_RGC_V1_MODEL_DisableControlResponse_H_
#define HUAWEICLOUD_SDK_RGC_V1_MODEL_DisableControlResponse_H_


#include <huaweicloud/rgc/v1/RgcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_RGC_V1_EXPORT  DisableControlResponse
    : public ModelBase, public HttpResponse
{
public:
    DisableControlResponse();
    virtual ~DisableControlResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DisableControlResponse members

    /// <summary>
    /// 控制策略的操作ID。
    /// </summary>

    std::string getControlOperateRequestId() const;
    bool controlOperateRequestIdIsSet() const;
    void unsetcontrolOperateRequestId();
    void setControlOperateRequestId(const std::string& value);


protected:
    std::string controlOperateRequestId_;
    bool controlOperateRequestIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RGC_V1_MODEL_DisableControlResponse_H_
