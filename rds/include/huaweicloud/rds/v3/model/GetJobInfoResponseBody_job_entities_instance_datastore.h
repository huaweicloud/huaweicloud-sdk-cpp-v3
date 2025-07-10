
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_GetJobInfoResponseBody_job_entities_instance_datastore_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_GetJobInfoResponseBody_job_entities_instance_datastore_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 数据库信息。
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  GetJobInfoResponseBody_job_entities_instance_datastore
    : public ModelBase
{
public:
    GetJobInfoResponseBody_job_entities_instance_datastore();
    virtual ~GetJobInfoResponseBody_job_entities_instance_datastore();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// GetJobInfoResponseBody_job_entities_instance_datastore members

    /// <summary>
    /// 数据库引擎。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 数据库版本。
    /// </summary>

    std::string getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(const std::string& value);


protected:
    std::string type_;
    bool typeIsSet_;
    std::string version_;
    bool versionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_GetJobInfoResponseBody_job_entities_instance_datastore_H_
