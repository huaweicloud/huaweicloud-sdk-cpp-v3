
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_GetJobInfoResponseBody_job_entities_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_GetJobInfoResponseBody_job_entities_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/GetJobInfoResponseBody_job_entities_instance.h>
#include <string>
#include <huaweicloud/rds/v3/model/GetJobInfoResponseBody_job_entities_volume.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 根据不同的任务，显示不同的内容。
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  GetJobInfoResponseBody_job_entities
    : public ModelBase
{
public:
    GetJobInfoResponseBody_job_entities();
    virtual ~GetJobInfoResponseBody_job_entities();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// GetJobInfoResponseBody_job_entities members

    /// <summary>
    /// 
    /// </summary>

    GetJobInfoResponseBody_job_entities_instance getInstance() const;
    bool instanceIsSet() const;
    void unsetinstance();
    void setInstance(const GetJobInfoResponseBody_job_entities_instance& value);

    /// <summary>
    /// 创建实例，单转主备，创建只读实例，调整实例容量任务时等任务时返回。
    /// </summary>

    std::vector<std::string>& getResourceIds();
    bool resourceIdsIsSet() const;
    void unsetresourceIds();
    void setResourceIds(const std::vector<std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    GetJobInfoResponseBody_job_entities_volume getVolume() const;
    bool volumeIsSet() const;
    void unsetvolume();
    void setVolume(const GetJobInfoResponseBody_job_entities_volume& value);

    /// <summary>
    /// 绑定/解绑弹性IP，开启远程连接等任务时返回。
    /// </summary>

    std::string getPublicIp() const;
    bool publicIpIsSet() const;
    void unsetpublicIp();
    void setPublicIp(const std::string& value);

    /// <summary>
    /// 主备倒换任务时返回。
    /// </summary>

    std::string getSwitchStrategy() const;
    bool switchStrategyIsSet() const;
    void unsetswitchStrategy();
    void setSwitchStrategy(const std::string& value);


protected:
    GetJobInfoResponseBody_job_entities_instance instance_;
    bool instanceIsSet_;
    std::vector<std::string> resourceIds_;
    bool resourceIdsIsSet_;
    GetJobInfoResponseBody_job_entities_volume volume_;
    bool volumeIsSet_;
    std::string publicIp_;
    bool publicIpIsSet_;
    std::string switchStrategy_;
    bool switchStrategyIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_GetJobInfoResponseBody_job_entities_H_
