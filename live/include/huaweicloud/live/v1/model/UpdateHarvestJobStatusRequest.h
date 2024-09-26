
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_UpdateHarvestJobStatusRequest_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_UpdateHarvestJobStatusRequest_H_


#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/live/v1/model/UpdateHarvestJobStatusRequestBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  UpdateHarvestJobStatusRequest
    : public ModelBase
{
public:
    UpdateHarvestJobStatusRequest();
    virtual ~UpdateHarvestJobStatusRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateHarvestJobStatusRequest members

    /// <summary>
    /// 服务鉴权Token，服务开启鉴权，必须携带Access-Control-Allow-Internal访问服务。
    /// </summary>

    std::string getAccessControlAllowInternal() const;
    bool accessControlAllowInternalIsSet() const;
    void unsetaccessControlAllowInternal();
    void setAccessControlAllowInternal(const std::string& value);

    /// <summary>
    /// 服务鉴权Token，服务开启鉴权，必须携带Access-Control-Allow-External访问服务。
    /// </summary>

    std::string getAccessControlAllowExternal() const;
    bool accessControlAllowExternalIsSet() const;
    void unsetaccessControlAllowExternal();
    void setAccessControlAllowExternal(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UpdateHarvestJobStatusRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const UpdateHarvestJobStatusRequestBody& value);


protected:
    std::string accessControlAllowInternal_;
    bool accessControlAllowInternalIsSet_;
    std::string accessControlAllowExternal_;
    bool accessControlAllowExternalIsSet_;
    UpdateHarvestJobStatusRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateHarvestJobStatusRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateHarvestJobStatusRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_UpdateHarvestJobStatusRequest_H_
