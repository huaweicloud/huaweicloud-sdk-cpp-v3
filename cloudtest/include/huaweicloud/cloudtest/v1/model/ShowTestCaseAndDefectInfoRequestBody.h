
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ShowTestCaseAndDefectInfoRequestBody_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ShowTestCaseAndDefectInfoRequestBody_H_


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
/// 查询用户用例关联缺陷的统计信息请求体
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  ShowTestCaseAndDefectInfoRequestBody
    : public ModelBase
{
public:
    ShowTestCaseAndDefectInfoRequestBody();
    virtual ~ShowTestCaseAndDefectInfoRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowTestCaseAndDefectInfoRequestBody members

    /// <summary>
    /// 起始偏移量，表示从此偏移量开始查询，offset大于等于0，小于等于100000
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
    /// 分支ID
    /// </summary>

    std::string getBranchId() const;
    bool branchIdIsSet() const;
    void unsetbranchId();
    void setBranchId(const std::string& value);

    /// <summary>
    /// 用例创建时间段开始
    /// </summary>

    std::string getCreateTestcaseStartTime() const;
    bool createTestcaseStartTimeIsSet() const;
    void unsetcreateTestcaseStartTime();
    void setCreateTestcaseStartTime(const std::string& value);

    /// <summary>
    /// 用例创建时间段截止
    /// </summary>

    std::string getCreateTestcaseEndTime() const;
    bool createTestcaseEndTimeIsSet() const;
    void unsetcreateTestcaseEndTime();
    void setCreateTestcaseEndTime(const std::string& value);

    /// <summary>
    /// 缺陷关联时间段开始
    /// </summary>

    std::string getAssociateDefectStartTime() const;
    bool associateDefectStartTimeIsSet() const;
    void unsetassociateDefectStartTime();
    void setAssociateDefectStartTime(const std::string& value);

    /// <summary>
    /// 缺陷关联时间段截止
    /// </summary>

    std::string getAssociateDefectEndTime() const;
    bool associateDefectEndTimeIsSet() const;
    void unsetassociateDefectEndTime();
    void setAssociateDefectEndTime(const std::string& value);


protected:
    int32_t offset_;
    bool offsetIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    std::string branchId_;
    bool branchIdIsSet_;
    std::string createTestcaseStartTime_;
    bool createTestcaseStartTimeIsSet_;
    std::string createTestcaseEndTime_;
    bool createTestcaseEndTimeIsSet_;
    std::string associateDefectStartTime_;
    bool associateDefectStartTimeIsSet_;
    std::string associateDefectEndTime_;
    bool associateDefectEndTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ShowTestCaseAndDefectInfoRequestBody_H_
