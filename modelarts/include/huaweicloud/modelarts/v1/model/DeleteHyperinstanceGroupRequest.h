
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_DeleteHyperinstanceGroupRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_DeleteHyperinstanceGroupRequest_H_


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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  DeleteHyperinstanceGroupRequest
    : public ModelBase
{
public:
    DeleteHyperinstanceGroupRequest();
    virtual ~DeleteHyperinstanceGroupRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteHyperinstanceGroupRequest members

    /// <summary>
    /// **参数解释**：要删除的hyperinstance-group ID。 **默认取值**：不涉及。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DeleteHyperinstanceGroupRequest& dereference_from_shared_ptr(std::shared_ptr<DeleteHyperinstanceGroupRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_DeleteHyperinstanceGroupRequest_H_
