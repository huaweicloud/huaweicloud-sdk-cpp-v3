
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_DataSource_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_DataSource_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/JobSummary.h>
#include <huaweicloud/modelarts/v1/model/NFSSummary.h>

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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  DataSource
    : public ModelBase
{
public:
    DataSource();
    virtual ~DataSource();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DataSource members

    /// <summary>
    /// 
    /// </summary>

    JobSummary getJob() const;
    bool jobIsSet() const;
    void unsetjob();
    void setJob(const JobSummary& value);

    /// <summary>
    /// 
    /// </summary>

    NFSSummary getNfs() const;
    bool nfsIsSet() const;
    void unsetnfs();
    void setNfs(const NFSSummary& value);


protected:
    JobSummary job_;
    bool jobIsSet_;
    NFSSummary nfs_;
    bool nfsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_DataSource_H_
