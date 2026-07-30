
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ChangeAlgorithmRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ChangeAlgorithmRequest_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/modelarts/v1/model/Algorithm.h>

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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ChangeAlgorithmRequest
    : public ModelBase
{
public:
    ChangeAlgorithmRequest();
    virtual ~ChangeAlgorithmRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ChangeAlgorithmRequest members

    /// <summary>
    /// 算法ID。
    /// </summary>

    std::string getAlgorithmId() const;
    bool algorithmIdIsSet() const;
    void unsetalgorithmId();
    void setAlgorithmId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    Algorithm getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const Algorithm& value);


protected:
    std::string algorithmId_;
    bool algorithmIdIsSet_;
    Algorithm body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ChangeAlgorithmRequest& dereference_from_shared_ptr(std::shared_ptr<ChangeAlgorithmRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ChangeAlgorithmRequest_H_
