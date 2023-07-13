
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_BatchReplaceDefinerReq_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_BatchReplaceDefinerReq_H_

#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/drs/v3/model/ReplaceDefinerInfo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 批量设置replaceDefiner请求体
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  BatchReplaceDefinerReq
    : public ModelBase
{
public:
    BatchReplaceDefinerReq();
    virtual ~BatchReplaceDefinerReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// BatchReplaceDefinerReq members

    /// <summary>
    /// 批量设置replaceDefiner请求列表
    /// </summary>

    std::vector<ReplaceDefinerInfo>& getJobs();
    bool jobsIsSet() const;
    void unsetjobs();
    void setJobs(const std::vector<ReplaceDefinerInfo>& value);


protected:
    std::vector<ReplaceDefinerInfo> jobs_;
    bool jobsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_BatchReplaceDefinerReq_H_
