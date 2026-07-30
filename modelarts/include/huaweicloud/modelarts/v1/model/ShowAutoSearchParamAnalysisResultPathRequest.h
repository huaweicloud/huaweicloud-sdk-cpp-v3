
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowAutoSearchParamAnalysisResultPathRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowAutoSearchParamAnalysisResultPathRequest_H_


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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ShowAutoSearchParamAnalysisResultPathRequest
    : public ModelBase
{
public:
    ShowAutoSearchParamAnalysisResultPathRequest();
    virtual ~ShowAutoSearchParamAnalysisResultPathRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowAutoSearchParamAnalysisResultPathRequest members

    /// <summary>
    /// 搜索参数名称
    /// </summary>

    std::string getParameterName() const;
    bool parameterNameIsSet() const;
    void unsetparameterName();
    void setParameterName(const std::string& value);

    /// <summary>
    /// 训练作业ID。获取方法请参见[查询训练作业列表](ListTrainingJobs.xml)。
    /// </summary>

    std::string getTrainingJobId() const;
    bool trainingJobIdIsSet() const;
    void unsettrainingJobId();
    void setTrainingJobId(const std::string& value);


protected:
    std::string parameterName_;
    bool parameterNameIsSet_;
    std::string trainingJobId_;
    bool trainingJobIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowAutoSearchParamAnalysisResultPathRequest& dereference_from_shared_ptr(std::shared_ptr<ShowAutoSearchParamAnalysisResultPathRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowAutoSearchParamAnalysisResultPathRequest_H_
