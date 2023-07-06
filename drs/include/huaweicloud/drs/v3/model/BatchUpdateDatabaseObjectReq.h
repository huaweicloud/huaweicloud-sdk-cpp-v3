
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_BatchUpdateDatabaseObjectReq_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_BatchUpdateDatabaseObjectReq_H_

#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v3/model/UpdateDatabaseObjectReq.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 批量更新数据库对象选择消息体
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  BatchUpdateDatabaseObjectReq
    : public ModelBase
{
public:
    BatchUpdateDatabaseObjectReq();
    virtual ~BatchUpdateDatabaseObjectReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// BatchUpdateDatabaseObjectReq members

    /// <summary>
    /// 批量更新数据库对象请求任务ID列表
    /// </summary>

    std::vector<UpdateDatabaseObjectReq>& getJobs();
    bool jobsIsSet() const;
    void unsetjobs();
    void setJobs(const std::vector<UpdateDatabaseObjectReq>& value);


protected:
    std::vector<UpdateDatabaseObjectReq> jobs_;
    bool jobsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_BatchUpdateDatabaseObjectReq_H_
