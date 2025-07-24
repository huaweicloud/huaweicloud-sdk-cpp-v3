
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ListTestcasesByProjectIssuesRelationRequest_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ListTestcasesByProjectIssuesRelationRequest_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cloudtest/v1/model/QueryProjectIssuesRelationTestCasesInfo.h>
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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  ListTestcasesByProjectIssuesRelationRequest
    : public ModelBase
{
public:
    ListTestcasesByProjectIssuesRelationRequest();
    virtual ~ListTestcasesByProjectIssuesRelationRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListTestcasesByProjectIssuesRelationRequest members

    /// <summary>
    /// 项目唯一标识，固定长度32位字符
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    QueryProjectIssuesRelationTestCasesInfo getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const QueryProjectIssuesRelationTestCasesInfo& value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    QueryProjectIssuesRelationTestCasesInfo body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListTestcasesByProjectIssuesRelationRequest& dereference_from_shared_ptr(std::shared_ptr<ListTestcasesByProjectIssuesRelationRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ListTestcasesByProjectIssuesRelationRequest_H_
