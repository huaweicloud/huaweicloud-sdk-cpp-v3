
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_GetJobInfoResponseBody_job_entities_instance_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_GetJobInfoResponseBody_job_entities_instance_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/rds/v3/model/GetJobInfoResponseBody_job_entities_instance_datastore.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 创建实例，单转主备，创建只读实例时返回。
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  GetJobInfoResponseBody_job_entities_instance
    : public ModelBase
{
public:
    GetJobInfoResponseBody_job_entities_instance();
    virtual ~GetJobInfoResponseBody_job_entities_instance();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// GetJobInfoResponseBody_job_entities_instance members

    /// <summary>
    /// 实例的连接地址。
    /// </summary>

    std::string getEndpoint() const;
    bool endpointIsSet() const;
    void unsetendpoint();
    void setEndpoint(const std::string& value);

    /// <summary>
    /// 实例类型。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    GetJobInfoResponseBody_job_entities_instance_datastore getDatastore() const;
    bool datastoreIsSet() const;
    void unsetdatastore();
    void setDatastore(const GetJobInfoResponseBody_job_entities_instance_datastore& value);

    /// <summary>
    /// 主实例ID，仅创建只读实例的时候返回。
    /// </summary>

    std::string getReplicaOf() const;
    bool replicaOfIsSet() const;
    void unsetreplicaOf();
    void setReplicaOf(const std::string& value);


protected:
    std::string endpoint_;
    bool endpointIsSet_;
    std::string type_;
    bool typeIsSet_;
    GetJobInfoResponseBody_job_entities_instance_datastore datastore_;
    bool datastoreIsSet_;
    std::string replicaOf_;
    bool replicaOfIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_GetJobInfoResponseBody_job_entities_instance_H_
