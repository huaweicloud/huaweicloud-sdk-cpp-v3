
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_SubTaskCaseSuccessLineVo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_SubTaskCaseSuccessLineVo_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cloudtest/v1/model/SubTaskCaseSuccessLineDetailVo.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  SubTaskCaseSuccessLineVo
    : public ModelBase
{
public:
    SubTaskCaseSuccessLineVo();
    virtual ~SubTaskCaseSuccessLineVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SubTaskCaseSuccessLineVo members

    /// <summary>
    /// 用例成功率统计信息
    /// </summary>

    std::vector<SubTaskCaseSuccessLineDetailVo>& getDetail();
    bool detailIsSet() const;
    void unsetdetail();
    void setDetail(const std::vector<SubTaskCaseSuccessLineDetailVo>& value);

    /// <summary>
    /// 任务id
    /// </summary>

    std::string getTaskId() const;
    bool taskIdIsSet() const;
    void unsettaskId();
    void setTaskId(const std::string& value);

    /// <summary>
    /// 任务名称
    /// </summary>

    std::string getTaskName() const;
    bool taskNameIsSet() const;
    void unsettaskName();
    void setTaskName(const std::string& value);


protected:
    std::vector<SubTaskCaseSuccessLineDetailVo> detail_;
    bool detailIsSet_;
    std::string taskId_;
    bool taskIdIsSet_;
    std::string taskName_;
    bool taskNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_SubTaskCaseSuccessLineVo_H_
