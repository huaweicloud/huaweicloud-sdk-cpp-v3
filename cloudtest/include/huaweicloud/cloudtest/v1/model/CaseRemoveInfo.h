
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_CaseRemoveInfo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_CaseRemoveInfo_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cloudtest/v1/model/CaseIdAndTypeInfo.h>
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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  CaseRemoveInfo
    : public ModelBase
{
public:
    CaseRemoveInfo();
    virtual ~CaseRemoveInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CaseRemoveInfo members

    /// <summary>
    /// 项目id
    /// </summary>

    std::string getProjectUuid() const;
    bool projectUuidIsSet() const;
    void unsetprojectUuid();
    void setProjectUuid(const std::string& value);

    /// <summary>
    /// 迭代Uri
    /// </summary>

    std::string getIteratorUri() const;
    bool iteratorUriIsSet() const;
    void unsetiteratorUri();
    void setIteratorUri(const std::string& value);

    /// <summary>
    /// 是否移除关联的issue
    /// </summary>

    bool isRemoveAssociateIssue() const;
    bool removeAssociateIssueIsSet() const;
    void unsetremoveAssociateIssue();
    void setRemoveAssociateIssue(bool value);

    /// <summary>
    /// 用例列表信息
    /// </summary>

    std::vector<CaseIdAndTypeInfo>& getCaseList();
    bool caseListIsSet() const;
    void unsetcaseList();
    void setCaseList(const std::vector<CaseIdAndTypeInfo>& value);


protected:
    std::string projectUuid_;
    bool projectUuidIsSet_;
    std::string iteratorUri_;
    bool iteratorUriIsSet_;
    bool removeAssociateIssue_;
    bool removeAssociateIssueIsSet_;
    std::vector<CaseIdAndTypeInfo> caseList_;
    bool caseListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_CaseRemoveInfo_H_
