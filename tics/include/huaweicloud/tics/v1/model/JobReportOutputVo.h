
#ifndef HUAWEICLOUD_SDK_TICS_V1_MODEL_JobReportOutputVo_H_
#define HUAWEICLOUD_SDK_TICS_V1_MODEL_JobReportOutputVo_H_


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
class HUAWEICLOUD_TICS_V1_EXPORT  JobReportOutputVo
    : public ModelBase
{
public:
    JobReportOutputVo();
    virtual ~JobReportOutputVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// JobReportOutputVo members

    /// <summary>
    /// 参数等额外信息
    /// </summary>

    std::string getExt() const;
    bool extIsSet() const;
    void unsetext();
    void setExt(const std::string& value);

    /// <summary>
    /// 结果存储agent名称
    /// </summary>

    std::string getResultStorageAgentName() const;
    bool resultStorageAgentNameIsSet() const;
    void unsetresultStorageAgentName();
    void setResultStorageAgentName(const std::string& value);

    /// <summary>
    /// 结果存储方别名
    /// </summary>

    std::string getResultStorageDomainAlias() const;
    bool resultStorageDomainAliasIsSet() const;
    void unsetresultStorageDomainAlias();
    void setResultStorageDomainAlias(const std::string& value);


protected:
    std::string ext_;
    bool extIsSet_;
    std::string resultStorageAgentName_;
    bool resultStorageAgentNameIsSet_;
    std::string resultStorageDomainAlias_;
    bool resultStorageDomainAliasIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_TICS_V1_MODEL_JobReportOutputVo_H_
