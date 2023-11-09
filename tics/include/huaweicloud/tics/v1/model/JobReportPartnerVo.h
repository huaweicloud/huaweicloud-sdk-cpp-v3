
#ifndef HUAWEICLOUD_SDK_TICS_V1_MODEL_JobReportPartnerVo_H_
#define HUAWEICLOUD_SDK_TICS_V1_MODEL_JobReportPartnerVo_H_


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
class HUAWEICLOUD_TICS_V1_EXPORT  JobReportPartnerVo
    : public ModelBase
{
public:
    JobReportPartnerVo();
    virtual ~JobReportPartnerVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// JobReportPartnerVo members

    /// <summary>
    /// 数据集所在代理
    /// </summary>

    std::string getAgentName() const;
    bool agentNameIsSet() const;
    void unsetagentName();
    void setAgentName(const std::string& value);

    /// <summary>
    /// 代理输出数据总量
    /// </summary>

    int64_t getDataOutputCnt() const;
    bool dataOutputCntIsSet() const;
    void unsetdataOutputCnt();
    void setDataOutputCnt(int64_t value);

    /// <summary>
    /// 数据集名
    /// </summary>

    std::string getDatasetName() const;
    bool datasetNameIsSet() const;
    void unsetdatasetName();
    void setDatasetName(const std::string& value);

    /// <summary>
    /// 租户别名
    /// </summary>

    std::string getPartnerDomainAlias() const;
    bool partnerDomainAliasIsSet() const;
    void unsetpartnerDomainAlias();
    void setPartnerDomainAlias(const std::string& value);

    /// <summary>
    /// 租户名
    /// </summary>

    std::string getPartnerDomainName() const;
    bool partnerDomainNameIsSet() const;
    void unsetpartnerDomainName();
    void setPartnerDomainName(const std::string& value);


protected:
    std::string agentName_;
    bool agentNameIsSet_;
    int64_t dataOutputCnt_;
    bool dataOutputCntIsSet_;
    std::string datasetName_;
    bool datasetNameIsSet_;
    std::string partnerDomainAlias_;
    bool partnerDomainAliasIsSet_;
    std::string partnerDomainName_;
    bool partnerDomainNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_TICS_V1_MODEL_JobReportPartnerVo_H_
