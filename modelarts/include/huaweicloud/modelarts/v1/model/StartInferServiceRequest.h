
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_StartInferServiceRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_StartInferServiceRequest_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  StartInferServiceRequest
    : public ModelBase
{
public:
    StartInferServiceRequest();
    virtual ~StartInferServiceRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// StartInferServiceRequest members

    /// <summary>
    /// **参数解释：** 服务ID，在[创建服务](CreateInferService.xml)时即可在返回体中获取，也可通过[查询服务列表](ListInferServices.xml)获取当前用户拥有的服务，其中service_id字段即为服务ID。 **约束限制：** 不涉及。 **取值范围：** 服务ID。 **默认取值：** 不涉及。
    /// </summary>

    std::string getServiceId() const;
    bool serviceIdIsSet() const;
    void unsetserviceId();
    void setServiceId(const std::string& value);


protected:
    std::string serviceId_;
    bool serviceIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    StartInferServiceRequest& dereference_from_shared_ptr(std::shared_ptr<StartInferServiceRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_StartInferServiceRequest_H_
