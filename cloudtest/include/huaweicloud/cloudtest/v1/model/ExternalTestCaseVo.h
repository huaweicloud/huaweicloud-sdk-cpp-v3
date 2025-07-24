
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ExternalTestCaseVo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ExternalTestCaseVo_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cloudtest/v1/model/AssociateDefectInfoVo.h>
#include <huaweicloud/cloudtest/v1/model/ExecuteInfoVo.h>
#include <huaweicloud/cloudtest/v1/model/IntegerIdAndNameVo.h>
#include <string>
#include <huaweicloud/cloudtest/v1/model/CreateInfoVo.h>
#include <huaweicloud/cloudtest/v1/model/AssociateIssueInfoVo.h>
#include <huaweicloud/cloudtest/v1/model/NameAndIdVo.h>

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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  ExternalTestCaseVo
    : public ModelBase
{
public:
    ExternalTestCaseVo();
    virtual ~ExternalTestCaseVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ExternalTestCaseVo members

    /// <summary>
    /// 用例名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    NameAndIdVo getOwner() const;
    bool ownerIsSet() const;
    void unsetowner();
    void setOwner(const NameAndIdVo& value);

    /// <summary>
    /// 
    /// </summary>

    NameAndIdVo getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const NameAndIdVo& value);

    /// <summary>
    /// 
    /// </summary>

    NameAndIdVo getResult() const;
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const NameAndIdVo& value);

    /// <summary>
    /// 
    /// </summary>

    NameAndIdVo getModule() const;
    bool moduleIsSet() const;
    void unsetmodule();
    void setModule(const NameAndIdVo& value);

    /// <summary>
    /// 
    /// </summary>

    NameAndIdVo getIteration() const;
    bool iterationIsSet() const;
    void unsetiteration();
    void setIteration(const NameAndIdVo& value);

    /// <summary>
    /// 用例ID
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 用例编号
    /// </summary>

    std::string getNumber() const;
    bool numberIsSet() const;
    void unsetnumber();
    void setNumber(const std::string& value);

    /// <summary>
    /// 用例描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 用例等级
    /// </summary>

    std::string getRankId() const;
    bool rankIdIsSet() const;
    void unsetrankId();
    void setRankId(const std::string& value);

    /// <summary>
    /// 项目ID
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    NameAndIdVo getExecutionType() const;
    bool executionTypeIsSet() const;
    void unsetexecutionType();
    void setExecutionType(const NameAndIdVo& value);

    /// <summary>
    /// 
    /// </summary>

    IntegerIdAndNameVo getTestType() const;
    bool testTypeIsSet() const;
    void unsettestType();
    void setTestType(const IntegerIdAndNameVo& value);

    /// <summary>
    /// 
    /// </summary>

    CreateInfoVo getCreateInfo() const;
    bool createInfoIsSet() const;
    void unsetcreateInfo();
    void setCreateInfo(const CreateInfoVo& value);

    /// <summary>
    /// 
    /// </summary>

    ExecuteInfoVo getExecuteInfo() const;
    bool executeInfoIsSet() const;
    void unsetexecuteInfo();
    void setExecuteInfo(const ExecuteInfoVo& value);

    /// <summary>
    /// 
    /// </summary>

    AssociateIssueInfoVo getAssociateIssueInfo() const;
    bool associateIssueInfoIsSet() const;
    void unsetassociateIssueInfo();
    void setAssociateIssueInfo(const AssociateIssueInfoVo& value);

    /// <summary>
    /// 
    /// </summary>

    AssociateDefectInfoVo getAssociateDefectInfo() const;
    bool associateDefectInfoIsSet() const;
    void unsetassociateDefectInfo();
    void setAssociateDefectInfo(const AssociateDefectInfoVo& value);


protected:
    std::string name_;
    bool nameIsSet_;
    NameAndIdVo owner_;
    bool ownerIsSet_;
    NameAndIdVo status_;
    bool statusIsSet_;
    NameAndIdVo result_;
    bool resultIsSet_;
    NameAndIdVo module_;
    bool moduleIsSet_;
    NameAndIdVo iteration_;
    bool iterationIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string number_;
    bool numberIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string rankId_;
    bool rankIdIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    NameAndIdVo executionType_;
    bool executionTypeIsSet_;
    IntegerIdAndNameVo testType_;
    bool testTypeIsSet_;
    CreateInfoVo createInfo_;
    bool createInfoIsSet_;
    ExecuteInfoVo executeInfo_;
    bool executeInfoIsSet_;
    AssociateIssueInfoVo associateIssueInfo_;
    bool associateIssueInfoIsSet_;
    AssociateDefectInfoVo associateDefectInfo_;
    bool associateDefectInfoIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ExternalTestCaseVo_H_
