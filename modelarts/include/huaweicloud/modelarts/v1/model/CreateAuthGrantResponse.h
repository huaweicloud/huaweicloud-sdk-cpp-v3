
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreateAuthGrantResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreateAuthGrantResponse_H_


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
/// Response Object
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  CreateAuthGrantResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateAuthGrantResponse();
    virtual ~CreateAuthGrantResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateAuthGrantResponse members

    /// <summary>
    /// **参数解释**：服务名称。 **取值范围**：不涉及。
    /// </summary>

    std::string getServiceName() const;
    bool serviceNameIsSet() const;
    void unsetserviceName();
    void setServiceName(const std::string& value);

    /// <summary>
    /// **参数解释**：授权状态，true表示已授权，false表示未授权。 **取值范围**： - true：已授权。 - false：未授权。
    /// </summary>

    bool isStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(bool value);


protected:
    std::string serviceName_;
    bool serviceNameIsSet_;
    bool status_;
    bool statusIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreateAuthGrantResponse_H_
