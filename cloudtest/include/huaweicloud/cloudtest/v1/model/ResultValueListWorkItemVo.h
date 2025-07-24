
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ResultValueListWorkItemVo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ResultValueListWorkItemVo_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cloudtest/v1/model/WorkItemVo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 请求的返回的数据对象
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  ResultValueListWorkItemVo
    : public ModelBase
{
public:
    ResultValueListWorkItemVo();
    virtual ~ResultValueListWorkItemVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ResultValueListWorkItemVo members

    /// <summary>
    /// 实际的数据类型：单个对象，集合 或 NULL
    /// </summary>

    std::vector<WorkItemVo>& getValue();
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(const std::vector<WorkItemVo>& value);


protected:
    std::vector<WorkItemVo> value_;
    bool valueIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ResultValueListWorkItemVo_H_
