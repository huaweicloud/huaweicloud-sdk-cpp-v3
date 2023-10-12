
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_JobNodeInfo_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_JobNodeInfo_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v5/model/JobNodeBaseInfo.h>
#include <huaweicloud/drs/v5/model/JobNodeVpcInfo.h>
#include <huaweicloud/drs/v5/model/JobNodeSpecInfo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 任务实例信息体。
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  JobNodeInfo
    : public ModelBase
{
public:
    JobNodeInfo();
    virtual ~JobNodeInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// JobNodeInfo members

    /// <summary>
    /// 
    /// </summary>

    JobNodeSpecInfo getSpec() const;
    bool specIsSet() const;
    void unsetspec();
    void setSpec(const JobNodeSpecInfo& value);

    /// <summary>
    /// 
    /// </summary>

    JobNodeVpcInfo getVpc() const;
    bool vpcIsSet() const;
    void unsetvpc();
    void setVpc(const JobNodeVpcInfo& value);

    /// <summary>
    /// 
    /// </summary>

    JobNodeBaseInfo getBaseInfo() const;
    bool baseInfoIsSet() const;
    void unsetbaseInfo();
    void setBaseInfo(const JobNodeBaseInfo& value);


protected:
    JobNodeSpecInfo spec_;
    bool specIsSet_;
    JobNodeVpcInfo vpc_;
    bool vpcIsSet_;
    JobNodeBaseInfo baseInfo_;
    bool baseInfoIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_JobNodeInfo_H_
