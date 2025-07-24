
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_QueryTaskTestCasesVo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_QueryTaskTestCasesVo_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cloudtest/v1/model/RelateTaskTestCasesVo.h>
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
/// 实际的数据类型：单个对象，集合 或 NULL
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  QueryTaskTestCasesVo
    : public ModelBase
{
public:
    QueryTaskTestCasesVo();
    virtual ~QueryTaskTestCasesVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// QueryTaskTestCasesVo members

    /// <summary>
    /// 关联的用例uris
    /// </summary>

    std::vector<std::string>& getRelatedCaseUris();
    bool relatedCaseUrisIsSet() const;
    void unsetrelatedCaseUris();
    void setRelatedCaseUris(const std::vector<std::string>& value);

    /// <summary>
    /// 未关联的用例uris
    /// </summary>

    std::vector<std::string>& getNotRelatedCaseUris();
    bool notRelatedCaseUrisIsSet() const;
    void unsetnotRelatedCaseUris();
    void setNotRelatedCaseUris(const std::vector<std::string>& value);

    /// <summary>
    /// 用例及任务信息
    /// </summary>

    std::vector<RelateTaskTestCasesVo>& getCaseTaskInfo();
    bool caseTaskInfoIsSet() const;
    void unsetcaseTaskInfo();
    void setCaseTaskInfo(const std::vector<RelateTaskTestCasesVo>& value);


protected:
    std::vector<std::string> relatedCaseUris_;
    bool relatedCaseUrisIsSet_;
    std::vector<std::string> notRelatedCaseUris_;
    bool notRelatedCaseUrisIsSet_;
    std::vector<RelateTaskTestCasesVo> caseTaskInfo_;
    bool caseTaskInfoIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_QueryTaskTestCasesVo_H_
