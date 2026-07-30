
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PatchNetworkRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PatchNetworkRequest_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/NetworkUpdateRequest.h>
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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  PatchNetworkRequest
    : public ModelBase
{
public:
    PatchNetworkRequest();
    virtual ~PatchNetworkRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PatchNetworkRequest members

    /// <summary>
    /// **参数解释**：网络资源名称。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getNetworkName() const;
    bool networkNameIsSet() const;
    void unsetnetworkName();
    void setNetworkName(const std::string& value);

    /// <summary>
    /// **参数解释**：消息体的类型（格式）。 **约束限制**：不涉及。 **取值范围**：可选值如下： - application/merge-patch+json **默认取值**：不涉及。
    /// </summary>

    std::string getContentType() const;
    bool contentTypeIsSet() const;
    void unsetcontentType();
    void setContentType(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    NetworkUpdateRequest getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const NetworkUpdateRequest& value);


protected:
    std::string networkName_;
    bool networkNameIsSet_;
    std::string contentType_;
    bool contentTypeIsSet_;
    NetworkUpdateRequest body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    PatchNetworkRequest& dereference_from_shared_ptr(std::shared_ptr<PatchNetworkRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PatchNetworkRequest_H_
