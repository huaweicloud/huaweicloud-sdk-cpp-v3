
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_GetTaskDetailListRsp_jobs_instance_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_GetTaskDetailListRsp_jobs_instance_H_

#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
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
/// 执行任务的实例信息。
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  GetTaskDetailListRsp_jobs_instance
    : public ModelBase
{
public:
    GetTaskDetailListRsp_jobs_instance();
    virtual ~GetTaskDetailListRsp_jobs_instance();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// GetTaskDetailListRsp_jobs_instance members

    /// <summary>
    /// 实例ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 实例名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_GetTaskDetailListRsp_jobs_instance_H_
