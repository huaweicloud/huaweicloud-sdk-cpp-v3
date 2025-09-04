
#ifndef HUAWEICLOUD_SDK_IOTDM_V5_MODEL_CreateInstanceRequest_H_
#define HUAWEICLOUD_SDK_IOTDM_V5_MODEL_CreateInstanceRequest_H_


#include <huaweicloud/iotdm/v5/IoTDMExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/iotdm/v5/model/CreateInstance.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotdm {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_IOTDM_V5_EXPORT  CreateInstanceRequest
    : public ModelBase
{
public:
    CreateInstanceRequest();
    virtual ~CreateInstanceRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateInstanceRequest members

    /// <summary>
    /// 
    /// </summary>

    CreateInstance getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CreateInstance& value);


protected:
    CreateInstance body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateInstanceRequest& dereference_from_shared_ptr(std::shared_ptr<CreateInstanceRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDM_V5_MODEL_CreateInstanceRequest_H_
