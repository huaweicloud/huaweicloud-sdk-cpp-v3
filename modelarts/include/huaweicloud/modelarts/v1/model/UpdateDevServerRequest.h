
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_UpdateDevServerRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_UpdateDevServerRequest_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/UpdateServerRequest.h>
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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  UpdateDevServerRequest
    : public ModelBase
{
public:
    UpdateDevServerRequest();
    virtual ~UpdateDevServerRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateDevServerRequest members

    /// <summary>
    /// **参数解释**：DevServer ID。 **约束限制**：必填。 **取值范围**：1 - 64字符。 **默认取值**：不涉及。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UpdateServerRequest getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const UpdateServerRequest& value);


protected:
    std::string id_;
    bool idIsSet_;
    UpdateServerRequest body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateDevServerRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateDevServerRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_UpdateDevServerRequest_H_
