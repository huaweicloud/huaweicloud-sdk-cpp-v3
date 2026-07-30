
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_JobPolicies_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_JobPolicies_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/AutoSearch.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 作业支持的策略，用于超参搜索。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  JobPolicies
    : public ModelBase
{
public:
    JobPolicies();
    virtual ~JobPolicies();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// JobPolicies members

    /// <summary>
    /// 
    /// </summary>

    AutoSearch getAutoSearch() const;
    bool autoSearchIsSet() const;
    void unsetautoSearch();
    void setAutoSearch(const AutoSearch& value);


protected:
    AutoSearch autoSearch_;
    bool autoSearchIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_JobPolicies_H_
