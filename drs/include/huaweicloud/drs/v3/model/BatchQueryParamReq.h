
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_BatchQueryParamReq_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_BatchQueryParamReq_H_

#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
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
class HUAWEICLOUD_DRS_V3_EXPORT  BatchQueryParamReq
    : public ModelBase
{
public:
    BatchQueryParamReq();
    virtual ~BatchQueryParamReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// BatchQueryParamReq members

    /// <summary>
    /// 查询任务ID集合。
    /// </summary>

    std::vector<std::string>& getJobs();
    bool jobsIsSet() const;
    void unsetjobs();
    void setJobs(const std::vector<std::string>& value);

    /// <summary>
    /// 是否重新获取数据库参数，1代表是，0代表否（从缓存中获取），第一次调用时请设置为1。
    /// </summary>

    std::string getRefresh() const;
    bool refreshIsSet() const;
    void unsetrefresh();
    void setRefresh(const std::string& value);


protected:
    std::vector<std::string> jobs_;
    bool jobsIsSet_;
    std::string refresh_;
    bool refreshIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_BatchQueryParamReq_H_
