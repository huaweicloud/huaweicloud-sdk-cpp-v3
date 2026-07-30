
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_DeleteAlgorithmRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_DeleteAlgorithmRequest_H_


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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  DeleteAlgorithmRequest
    : public ModelBase
{
public:
    DeleteAlgorithmRequest();
    virtual ~DeleteAlgorithmRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteAlgorithmRequest members

    /// <summary>
    /// 算法ID。
    /// </summary>

    std::string getAlgorithmId() const;
    bool algorithmIdIsSet() const;
    void unsetalgorithmId();
    void setAlgorithmId(const std::string& value);


protected:
    std::string algorithmId_;
    bool algorithmIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DeleteAlgorithmRequest& dereference_from_shared_ptr(std::shared_ptr<DeleteAlgorithmRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_DeleteAlgorithmRequest_H_
