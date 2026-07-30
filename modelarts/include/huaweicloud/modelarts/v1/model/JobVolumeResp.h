
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_JobVolumeResp_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_JobVolumeResp_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/NfsResp.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 训练作业挂载卷信息。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  JobVolumeResp
    : public ModelBase
{
public:
    JobVolumeResp();
    virtual ~JobVolumeResp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// JobVolumeResp members

    /// <summary>
    /// 
    /// </summary>

    NfsResp getNfs() const;
    bool nfsIsSet() const;
    void unsetnfs();
    void setNfs(const NfsResp& value);


protected:
    NfsResp nfs_;
    bool nfsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_JobVolumeResp_H_
