
#ifndef HUAWEICLOUD_SDK_TICS_V1_MODEL_JobReportEnvVo_H_
#define HUAWEICLOUD_SDK_TICS_V1_MODEL_JobReportEnvVo_H_


#include <huaweicloud/tics/v1/TicsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Tics {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_TICS_V1_EXPORT  JobReportEnvVo
    : public ModelBase
{
public:
    JobReportEnvVo();
    virtual ~JobReportEnvVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// JobReportEnvVo members

    /// <summary>
    /// 聚合器名称
    /// </summary>

    std::string getAggName() const;
    bool aggNameIsSet() const;
    void unsetaggName();
    void setAggName(const std::string& value);

    /// <summary>
    /// 联盟id
    /// </summary>

    std::string getLeagueId() const;
    bool leagueIdIsSet() const;
    void unsetleagueId();
    void setLeagueId(const std::string& value);

    /// <summary>
    /// 联盟名称
    /// </summary>

    std::string getLeagueName() const;
    bool leagueNameIsSet() const;
    void unsetleagueName();
    void setLeagueName(const std::string& value);

    /// <summary>
    /// 项目id
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 区域
    /// </summary>

    std::string getRegionId() const;
    bool regionIdIsSet() const;
    void unsetregionId();
    void setRegionId(const std::string& value);


protected:
    std::string aggName_;
    bool aggNameIsSet_;
    std::string leagueId_;
    bool leagueIdIsSet_;
    std::string leagueName_;
    bool leagueNameIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    std::string regionId_;
    bool regionIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_TICS_V1_MODEL_JobReportEnvVo_H_
