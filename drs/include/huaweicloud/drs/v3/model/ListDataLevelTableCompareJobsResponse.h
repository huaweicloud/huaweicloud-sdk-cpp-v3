
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_ListDataLevelTableCompareJobsResponse_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_ListDataLevelTableCompareJobsResponse_H_


#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v3/model/CompareJobInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  ListDataLevelTableCompareJobsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListDataLevelTableCompareJobsResponse();
    virtual ~ListDataLevelTableCompareJobsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListDataLevelTableCompareJobsResponse members

    /// <summary>
    /// 表对比任务信息
    /// </summary>

    std::vector<CompareJobInfo>& getCompareJobs();
    bool compareJobsIsSet() const;
    void unsetcompareJobs();
    void setCompareJobs(const std::vector<CompareJobInfo>& value);

    /// <summary>
    /// 任务数量
    /// </summary>

    int64_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int64_t value);


protected:
    std::vector<CompareJobInfo> compareJobs_;
    bool compareJobsIsSet_;
    int64_t count_;
    bool countIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_ListDataLevelTableCompareJobsResponse_H_
