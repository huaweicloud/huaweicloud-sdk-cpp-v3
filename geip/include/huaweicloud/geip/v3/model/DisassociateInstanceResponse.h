
#ifndef HUAWEICLOUD_SDK_GEIP_V3_MODEL_DisassociateInstanceResponse_H_
#define HUAWEICLOUD_SDK_GEIP_V3_MODEL_DisassociateInstanceResponse_H_


#include <huaweicloud/geip/v3/GeipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/geip/v3/model/UpdateGlobalEip.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GEIP_V3_EXPORT  DisassociateInstanceResponse
    : public ModelBase, public HttpResponse
{
public:
    DisassociateInstanceResponse();
    virtual ~DisassociateInstanceResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DisassociateInstanceResponse members

    /// <summary>
    /// 
    /// </summary>

    UpdateGlobalEip getGlobalEip() const;
    bool globalEipIsSet() const;
    void unsetglobalEip();
    void setGlobalEip(const UpdateGlobalEip& value);

    /// <summary>
    /// 本次请求的job id
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXRequestId() const;
    bool xRequestIdIsSet() const;
    void unsetxRequestId();
    void setXRequestId(const std::string& value);


protected:
    UpdateGlobalEip globalEip_;
    bool globalEipIsSet_;
    std::string jobId_;
    bool jobIdIsSet_;
    std::string xRequestId_;
    bool xRequestIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GEIP_V3_MODEL_DisassociateInstanceResponse_H_
