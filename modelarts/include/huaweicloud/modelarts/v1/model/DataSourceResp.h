
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_DataSourceResp_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_DataSourceResp_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/JobSummaryResp.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 可视化作业或训练作业调试模式的可视化日志输入，训练作业高级功能开启\&quot;tensorboard/enable\&quot;: \&quot;true\&quot;或\&quot;mindstudio-insight/enable\&quot;: \&quot;true\&quot;时必填。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  DataSourceResp
    : public ModelBase
{
public:
    DataSourceResp();
    virtual ~DataSourceResp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DataSourceResp members

    /// <summary>
    /// 
    /// </summary>

    JobSummaryResp getJob() const;
    bool jobIsSet() const;
    void unsetjob();
    void setJob(const JobSummaryResp& value);


protected:
    JobSummaryResp job_;
    bool jobIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_DataSourceResp_H_
