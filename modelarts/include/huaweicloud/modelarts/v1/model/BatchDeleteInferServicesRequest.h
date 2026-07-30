
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_BatchDeleteInferServicesRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_BatchDeleteInferServicesRequest_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/DeleteServicesRequest.h>
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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  BatchDeleteInferServicesRequest
    : public ModelBase
{
public:
    BatchDeleteInferServicesRequest();
    virtual ~BatchDeleteInferServicesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchDeleteInferServicesRequest members

    /// <summary>
    /// **参数解释：** 消息体的类型（格式）。 **约束限制：** 不涉及。 **取值范围：** - application/json。 - application/json;charset&#x3D;utf-8。 **默认取值：** 不涉及。
    /// </summary>

    std::string getContentType() const;
    bool contentTypeIsSet() const;
    void unsetcontentType();
    void setContentType(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    DeleteServicesRequest getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const DeleteServicesRequest& value);


protected:
    std::string contentType_;
    bool contentTypeIsSet_;
    DeleteServicesRequest body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    BatchDeleteInferServicesRequest& dereference_from_shared_ptr(std::shared_ptr<BatchDeleteInferServicesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_BatchDeleteInferServicesRequest_H_
