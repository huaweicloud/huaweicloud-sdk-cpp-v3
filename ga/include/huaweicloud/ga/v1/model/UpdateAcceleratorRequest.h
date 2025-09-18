
#ifndef HUAWEICLOUD_SDK_GA_V1_MODEL_UpdateAcceleratorRequest_H_
#define HUAWEICLOUD_SDK_GA_V1_MODEL_UpdateAcceleratorRequest_H_


#include <huaweicloud/ga/v1/GaExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ga/v1/model/UpdateAcceleratorRequestBody.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_GA_V1_EXPORT  UpdateAcceleratorRequest
    : public ModelBase
{
public:
    UpdateAcceleratorRequest();
    virtual ~UpdateAcceleratorRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateAcceleratorRequest members

    /// <summary>
    /// 全球加速器ID。
    /// </summary>

    std::string getAcceleratorId() const;
    bool acceleratorIdIsSet() const;
    void unsetacceleratorId();
    void setAcceleratorId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UpdateAcceleratorRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const UpdateAcceleratorRequestBody& value);


protected:
    std::string acceleratorId_;
    bool acceleratorIdIsSet_;
    UpdateAcceleratorRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateAcceleratorRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateAcceleratorRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GA_V1_MODEL_UpdateAcceleratorRequest_H_
