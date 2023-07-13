
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_BatchModifyPwdReq_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_BatchModifyPwdReq_H_

#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v3/model/ModifyPwdEndPoint.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  BatchModifyPwdReq
    : public ModelBase
{
public:
    BatchModifyPwdReq();
    virtual ~BatchModifyPwdReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// BatchModifyPwdReq members

    /// <summary>
    /// 批量修改数据库密码信息列表
    /// </summary>

    std::vector<ModifyPwdEndPoint>& getJobs();
    bool jobsIsSet() const;
    void unsetjobs();
    void setJobs(const std::vector<ModifyPwdEndPoint>& value);


protected:
    std::vector<ModifyPwdEndPoint> jobs_;
    bool jobsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_BatchModifyPwdReq_H_
