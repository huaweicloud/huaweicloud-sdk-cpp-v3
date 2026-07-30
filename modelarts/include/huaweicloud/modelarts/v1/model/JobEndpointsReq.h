
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_JobEndpointsReq_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_JobEndpointsReq_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/SSHReq.h>

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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  JobEndpointsReq
    : public ModelBase
{
public:
    JobEndpointsReq();
    virtual ~JobEndpointsReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// JobEndpointsReq members

    /// <summary>
    /// 
    /// </summary>

    SSHReq getSsh() const;
    bool sshIsSet() const;
    void unsetssh();
    void setSsh(const SSHReq& value);


protected:
    SSHReq ssh_;
    bool sshIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_JobEndpointsReq_H_
