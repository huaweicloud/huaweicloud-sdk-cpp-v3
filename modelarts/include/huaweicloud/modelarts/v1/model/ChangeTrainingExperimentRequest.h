
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ChangeTrainingExperimentRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ChangeTrainingExperimentRequest_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/modelarts/v1/model/ChangeTrainingExperimentRequestBody.h>

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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ChangeTrainingExperimentRequest
    : public ModelBase
{
public:
    ChangeTrainingExperimentRequest();
    virtual ~ChangeTrainingExperimentRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ChangeTrainingExperimentRequest members

    /// <summary>
    /// 训练实验ID。在训练作业创建时获取实验ID。
    /// </summary>

    std::string getExperimentId() const;
    bool experimentIdIsSet() const;
    void unsetexperimentId();
    void setExperimentId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ChangeTrainingExperimentRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const ChangeTrainingExperimentRequestBody& value);


protected:
    std::string experimentId_;
    bool experimentIdIsSet_;
    ChangeTrainingExperimentRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ChangeTrainingExperimentRequest& dereference_from_shared_ptr(std::shared_ptr<ChangeTrainingExperimentRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ChangeTrainingExperimentRequest_H_
