
#ifndef HUAWEICLOUD_SDK_RGC_V1_MODEL_EnableControlRequest_H_
#define HUAWEICLOUD_SDK_RGC_V1_MODEL_EnableControlRequest_H_


#include <huaweicloud/rgc/v1/RgcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rgc/v1/model/EnableControlOperateReqBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_RGC_V1_EXPORT  EnableControlRequest
    : public ModelBase
{
public:
    EnableControlRequest();
    virtual ~EnableControlRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// EnableControlRequest members

    /// <summary>
    /// 
    /// </summary>

    EnableControlOperateReqBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const EnableControlOperateReqBody& value);


protected:
    EnableControlOperateReqBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    EnableControlRequest& dereference_from_shared_ptr(std::shared_ptr<EnableControlRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RGC_V1_MODEL_EnableControlRequest_H_
