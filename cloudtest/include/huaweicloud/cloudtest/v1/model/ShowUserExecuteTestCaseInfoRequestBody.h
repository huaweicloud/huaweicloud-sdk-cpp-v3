
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ShowUserExecuteTestCaseInfoRequestBody_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ShowUserExecuteTestCaseInfoRequestBody_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 查询时段内用例的执行情况请求体
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  ShowUserExecuteTestCaseInfoRequestBody
    : public ModelBase
{
public:
    ShowUserExecuteTestCaseInfoRequestBody();
    virtual ~ShowUserExecuteTestCaseInfoRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowUserExecuteTestCaseInfoRequestBody members

    /// <summary>
    /// 起始偏移量，表示从此偏移量开始查询，offset大于等于0，小于等于20000
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 每页显示的条目数量,最大支持100条
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 用例执行时间段开始
    /// </summary>

    std::string getExecuteStartTime() const;
    bool executeStartTimeIsSet() const;
    void unsetexecuteStartTime();
    void setExecuteStartTime(const std::string& value);

    /// <summary>
    /// 用例执行时间段截止
    /// </summary>

    std::string getExecuteEndTime() const;
    bool executeEndTimeIsSet() const;
    void unsetexecuteEndTime();
    void setExecuteEndTime(const std::string& value);


protected:
    int32_t offset_;
    bool offsetIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    std::string executeStartTime_;
    bool executeStartTimeIsSet_;
    std::string executeEndTime_;
    bool executeEndTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ShowUserExecuteTestCaseInfoRequestBody_H_
