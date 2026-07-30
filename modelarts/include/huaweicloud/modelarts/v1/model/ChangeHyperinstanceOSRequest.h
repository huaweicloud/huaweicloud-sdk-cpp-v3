
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ChangeHyperinstanceOSRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ChangeHyperinstanceOSRequest_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/ServerOsRequest.h>
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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ChangeHyperinstanceOSRequest
    : public ModelBase
{
public:
    ChangeHyperinstanceOSRequest();
    virtual ~ChangeHyperinstanceOSRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ChangeHyperinstanceOSRequest members

    /// <summary>
    /// **参数解释**：Lite Server实例超节点ID。 **约束限制**：^[0-9a-f]{8}-[0-9a-f]{4}-[1-5][0-9a-f]{3}-[89ab][0-9a-f]{3}-[0-9a-f]{12}$。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ServerOsRequest getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const ServerOsRequest& value);


protected:
    std::string id_;
    bool idIsSet_;
    ServerOsRequest body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ChangeHyperinstanceOSRequest& dereference_from_shared_ptr(std::shared_ptr<ChangeHyperinstanceOSRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ChangeHyperinstanceOSRequest_H_
