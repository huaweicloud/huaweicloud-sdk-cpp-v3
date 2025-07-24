
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ExternalUserCaseAndDefect_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ExternalUserCaseAndDefect_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cloudtest/v1/model/NameAndIdVo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 用户创建用例以及关联缺陷信息
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  ExternalUserCaseAndDefect
    : public ModelBase
{
public:
    ExternalUserCaseAndDefect();
    virtual ~ExternalUserCaseAndDefect();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ExternalUserCaseAndDefect members

    /// <summary>
    /// 
    /// </summary>

    NameAndIdVo getCreator() const;
    bool creatorIsSet() const;
    void unsetcreator();
    void setCreator(const NameAndIdVo& value);

    /// <summary>
    /// 缺陷数
    /// </summary>

    int32_t getDefectCount() const;
    bool defectCountIsSet() const;
    void unsetdefectCount();
    void setDefectCount(int32_t value);

    /// <summary>
    /// 缺陷ID列表
    /// </summary>

    std::vector<std::string>& getDefectIds();
    bool defectIdsIsSet() const;
    void unsetdefectIds();
    void setDefectIds(const std::vector<std::string>& value);

    /// <summary>
    /// 用例ID
    /// </summary>

    std::string getTestcaseId() const;
    bool testcaseIdIsSet() const;
    void unsettestcaseId();
    void setTestcaseId(const std::string& value);

    /// <summary>
    /// 分支ID
    /// </summary>

    std::string getBranchId() const;
    bool branchIdIsSet() const;
    void unsetbranchId();
    void setBranchId(const std::string& value);


protected:
    NameAndIdVo creator_;
    bool creatorIsSet_;
    int32_t defectCount_;
    bool defectCountIsSet_;
    std::vector<std::string> defectIds_;
    bool defectIdsIsSet_;
    std::string testcaseId_;
    bool testcaseIdIsSet_;
    std::string branchId_;
    bool branchIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ExternalUserCaseAndDefect_H_
