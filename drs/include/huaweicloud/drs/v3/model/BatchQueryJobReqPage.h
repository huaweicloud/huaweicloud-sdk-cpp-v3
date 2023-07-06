
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_BatchQueryJobReqPage_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_BatchQueryJobReqPage_H_

#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/drs/v3/model/PageReq.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 带分页的批量查询任务详情请求体
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  BatchQueryJobReqPage
    : public ModelBase
{
public:
    BatchQueryJobReqPage();
    virtual ~BatchQueryJobReqPage();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// BatchQueryJobReqPage members

    /// <summary>
    /// 批量查询任务详情
    /// </summary>

    std::vector<std::string>& getJobs();
    bool jobsIsSet() const;
    void unsetjobs();
    void setJobs(const std::vector<std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    PageReq getPageReq() const;
    bool pageReqIsSet() const;
    void unsetpageReq();
    void setPageReq(const PageReq& value);


protected:
    std::vector<std::string> jobs_;
    bool jobsIsSet_;
    PageReq pageReq_;
    bool pageReqIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_BatchQueryJobReqPage_H_
