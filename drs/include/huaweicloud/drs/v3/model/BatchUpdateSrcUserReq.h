
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_BatchUpdateSrcUserReq_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_BatchUpdateSrcUserReq_H_


#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v3/model/UpdateUserReq.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 批量更新迁移用户请求体
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  BatchUpdateSrcUserReq
    : public ModelBase
{
public:
    BatchUpdateSrcUserReq();
    virtual ~BatchUpdateSrcUserReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchUpdateSrcUserReq members

    /// <summary>
    /// 批量更新迁移用户请求列表
    /// </summary>

    std::vector<UpdateUserReq>& getJobs();
    bool jobsIsSet() const;
    void unsetjobs();
    void setJobs(const std::vector<UpdateUserReq>& value);


protected:
    std::vector<UpdateUserReq> jobs_;
    bool jobsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_BatchUpdateSrcUserReq_H_
