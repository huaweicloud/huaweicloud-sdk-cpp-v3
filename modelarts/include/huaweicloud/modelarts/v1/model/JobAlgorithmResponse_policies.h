
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_JobAlgorithmResponse_policies_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_JobAlgorithmResponse_policies_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/JobAlgorithmResponse_policies_auto_search.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 作业支持的策略。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  JobAlgorithmResponse_policies
    : public ModelBase
{
public:
    JobAlgorithmResponse_policies();
    virtual ~JobAlgorithmResponse_policies();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// JobAlgorithmResponse_policies members

    /// <summary>
    /// 
    /// </summary>

    JobAlgorithmResponse_policies_auto_search getAutoSearch() const;
    bool autoSearchIsSet() const;
    void unsetautoSearch();
    void setAutoSearch(const JobAlgorithmResponse_policies_auto_search& value);


protected:
    JobAlgorithmResponse_policies_auto_search autoSearch_;
    bool autoSearchIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_JobAlgorithmResponse_policies_H_
