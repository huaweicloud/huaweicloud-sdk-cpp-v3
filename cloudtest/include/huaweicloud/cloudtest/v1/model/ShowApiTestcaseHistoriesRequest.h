
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ShowApiTestcaseHistoriesRequest_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ShowApiTestcaseHistoriesRequest_H_


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
/// Request Object
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  ShowApiTestcaseHistoriesRequest
    : public ModelBase
{
public:
    ShowApiTestcaseHistoriesRequest();
    virtual ~ShowApiTestcaseHistoriesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowApiTestcaseHistoriesRequest members

    /// <summary>
    /// 测试用例id
    /// </summary>

    std::string getTestcaseId() const;
    bool testcaseIdIsSet() const;
    void unsettestcaseId();
    void setTestcaseId(const std::string& value);

    /// <summary>
    /// 起始偏移量，表示从此偏移量开始查询， offset大于等于1
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 每页显示的条目数量,最大支持200条
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 测试计划id
    /// </summary>

    std::string getPlanId() const;
    bool planIdIsSet() const;
    void unsetplanId();
    void setPlanId(const std::string& value);

    /// <summary>
    /// 项目ID，固定长度32位字符（字母和数字）。
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);


protected:
    std::string testcaseId_;
    bool testcaseIdIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    std::string planId_;
    bool planIdIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowApiTestcaseHistoriesRequest& dereference_from_shared_ptr(std::shared_ptr<ShowApiTestcaseHistoriesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ShowApiTestcaseHistoriesRequest_H_
