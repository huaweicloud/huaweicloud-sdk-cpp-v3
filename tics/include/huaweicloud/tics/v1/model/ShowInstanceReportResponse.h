
#ifndef HUAWEICLOUD_SDK_TICS_V1_MODEL_ShowInstanceReportResponse_H_
#define HUAWEICLOUD_SDK_TICS_V1_MODEL_ShowInstanceReportResponse_H_


#include <huaweicloud/tics/v1/TicsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/tics/v1/model/JobReportBaseInfoVo.h>
#include <huaweicloud/tics/v1/model/RoundDeployVo.h>
#include <huaweicloud/tics/v1/model/JobReportEnvVo.h>
#include <huaweicloud/tics/v1/model/JobReportOutputVo.h>
#include <huaweicloud/tics/v1/model/JobReportPartnerVo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Tics {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_TICS_V1_EXPORT  ShowInstanceReportResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowInstanceReportResponse();
    virtual ~ShowInstanceReportResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowInstanceReportResponse members

    /// <summary>
    /// 
    /// </summary>

    JobReportBaseInfoVo getJobReportBaseInfo() const;
    bool jobReportBaseInfoIsSet() const;
    void unsetjobReportBaseInfo();
    void setJobReportBaseInfo(const JobReportBaseInfoVo& value);

    /// <summary>
    /// 
    /// </summary>

    JobReportEnvVo getJobReportEnv() const;
    bool jobReportEnvIsSet() const;
    void unsetjobReportEnv();
    void setJobReportEnv(const JobReportEnvVo& value);

    /// <summary>
    /// 
    /// </summary>

    JobReportOutputVo getJobReportOutput() const;
    bool jobReportOutputIsSet() const;
    void unsetjobReportOutput();
    void setJobReportOutput(const JobReportOutputVo& value);

    /// <summary>
    /// 合作方信息
    /// </summary>

    std::vector<JobReportPartnerVo>& getJobReportPartners();
    bool jobReportPartnersIsSet() const;
    void unsetjobReportPartners();
    void setJobReportPartners(const std::vector<JobReportPartnerVo>& value);

    /// <summary>
    /// 计算过程
    /// </summary>

    std::vector<RoundDeployVo>& getRoundDeploys();
    bool roundDeploysIsSet() const;
    void unsetroundDeploys();
    void setRoundDeploys(const std::vector<RoundDeployVo>& value);


protected:
    JobReportBaseInfoVo jobReportBaseInfo_;
    bool jobReportBaseInfoIsSet_;
    JobReportEnvVo jobReportEnv_;
    bool jobReportEnvIsSet_;
    JobReportOutputVo jobReportOutput_;
    bool jobReportOutputIsSet_;
    std::vector<JobReportPartnerVo> jobReportPartners_;
    bool jobReportPartnersIsSet_;
    std::vector<RoundDeployVo> roundDeploys_;
    bool roundDeploysIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_TICS_V1_MODEL_ShowInstanceReportResponse_H_
