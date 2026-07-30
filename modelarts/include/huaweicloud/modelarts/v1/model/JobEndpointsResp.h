
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_JobEndpointsResp_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_JobEndpointsResp_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/Tensorboard.h>
#include <huaweicloud/modelarts/v1/model/JupyterLab.h>
#include <huaweicloud/modelarts/v1/model/MindStudioInsight.h>
#include <huaweicloud/modelarts/v1/model/SSHResp.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 远程接入训练作业时需要的相关配置。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  JobEndpointsResp
    : public ModelBase
{
public:
    JobEndpointsResp();
    virtual ~JobEndpointsResp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// JobEndpointsResp members

    /// <summary>
    /// 
    /// </summary>

    SSHResp getSsh() const;
    bool sshIsSet() const;
    void unsetssh();
    void setSsh(const SSHResp& value);

    /// <summary>
    /// 
    /// </summary>

    JupyterLab getJupyterLab() const;
    bool jupyterLabIsSet() const;
    void unsetjupyterLab();
    void setJupyterLab(const JupyterLab& value);

    /// <summary>
    /// 
    /// </summary>

    Tensorboard getTensorboard() const;
    bool tensorboardIsSet() const;
    void unsettensorboard();
    void setTensorboard(const Tensorboard& value);

    /// <summary>
    /// 
    /// </summary>

    MindStudioInsight getMindstudioInsight() const;
    bool mindstudioInsightIsSet() const;
    void unsetmindstudioInsight();
    void setMindstudioInsight(const MindStudioInsight& value);


protected:
    SSHResp ssh_;
    bool sshIsSet_;
    JupyterLab jupyterLab_;
    bool jupyterLabIsSet_;
    Tensorboard tensorboard_;
    bool tensorboardIsSet_;
    MindStudioInsight mindstudioInsight_;
    bool mindstudioInsightIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_JobEndpointsResp_H_
