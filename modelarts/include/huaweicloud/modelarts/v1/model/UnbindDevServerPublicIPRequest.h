
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_UnbindDevServerPublicIPRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_UnbindDevServerPublicIPRequest_H_


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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  UnbindDevServerPublicIPRequest
    : public ModelBase
{
public:
    UnbindDevServerPublicIPRequest();
    virtual ~UnbindDevServerPublicIPRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UnbindDevServerPublicIPRequest members

    /// <summary>
    /// **参数解释**：Lite Server实例ID。 **默认取值**：不涉及。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释**：EIP ID。 **默认取值**：不涉及。
    /// </summary>

    std::string getPublicipId() const;
    bool publicipIdIsSet() const;
    void unsetpublicipId();
    void setPublicipId(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string publicipId_;
    bool publicipIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UnbindDevServerPublicIPRequest& dereference_from_shared_ptr(std::shared_ptr<UnbindDevServerPublicIPRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_UnbindDevServerPublicIPRequest_H_
