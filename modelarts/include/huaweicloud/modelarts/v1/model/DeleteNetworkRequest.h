
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_DeleteNetworkRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_DeleteNetworkRequest_H_


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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  DeleteNetworkRequest
    : public ModelBase
{
public:
    DeleteNetworkRequest();
    virtual ~DeleteNetworkRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteNetworkRequest members

    /// <summary>
    /// **参数解释**：网络资源名称。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getNetworkName() const;
    bool networkNameIsSet() const;
    void unsetnetworkName();
    void setNetworkName(const std::string& value);


protected:
    std::string networkName_;
    bool networkNameIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DeleteNetworkRequest& dereference_from_shared_ptr(std::shared_ptr<DeleteNetworkRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_DeleteNetworkRequest_H_
