
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TaskAssignCaseDetailVo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TaskAssignCaseDetailVo_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <cpprest/details/basic_types.h>

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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  TaskAssignCaseDetailVo
    : public ModelBase
{
public:
    TaskAssignCaseDetailVo();
    virtual ~TaskAssignCaseDetailVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TaskAssignCaseDetailVo members

    /// <summary>
    /// 关联关系uri
    /// </summary>

    std::string getUri() const;
    bool uriIsSet() const;
    void unseturi();
    void setUri(const std::string& value);

    /// <summary>
    /// 排序顺序
    /// </summary>

    int32_t getSort() const;
    bool sortIsSet() const;
    void unsetsort();
    void setSort(int32_t value);

    /// <summary>
    /// 责任人id
    /// </summary>

    std::string getOwner() const;
    bool ownerIsSet() const;
    void unsetowner();
    void setOwner(const std::string& value);

    /// <summary>
    /// 测试阶段
    /// </summary>

    int32_t getStage() const;
    bool stageIsSet() const;
    void unsetstage();
    void setStage(int32_t value);

    /// <summary>
    /// 项目id
    /// </summary>

    std::string getProjectUuid() const;
    bool projectUuidIsSet() const;
    void unsetprojectUuid();
    void setProjectUuid(const std::string& value);

    /// <summary>
    /// 任务uri
    /// </summary>

    std::string getTaskUri() const;
    bool taskUriIsSet() const;
    void unsettaskUri();
    void setTaskUri(const std::string& value);

    /// <summary>
    /// 更新时间
    /// </summary>

    utility::datetime getUpdateTime() const;
    bool updateTimeIsSet() const;
    void unsetupdateTime();
    void setUpdateTime(const utility::datetime& value);

    /// <summary>
    /// 更新人
    /// </summary>

    std::string getUpdatorName() const;
    bool updatorNameIsSet() const;
    void unsetupdatorName();
    void setUpdatorName(const std::string& value);

    /// <summary>
    /// 更新人id
    /// </summary>

    std::string getUpdator() const;
    bool updatorIsSet() const;
    void unsetupdator();
    void setUpdator(const std::string& value);

    /// <summary>
    /// 用例uri
    /// </summary>

    std::string getCaseUri() const;
    bool caseUriIsSet() const;
    void unsetcaseUri();
    void setCaseUri(const std::string& value);

    /// <summary>
    /// 是否可用
    /// </summary>

    int32_t getIsAvailable() const;
    bool isAvailableIsSet() const;
    void unsetisAvailable();
    void setIsAvailable(int32_t value);

    /// <summary>
    /// 用例名称
    /// </summary>

    std::string getTestCaseName() const;
    bool testCaseNameIsSet() const;
    void unsettestCaseName();
    void setTestCaseName(const std::string& value);

    /// <summary>
    /// 用例目录Uri
    /// </summary>

    std::string getFeatureUri() const;
    bool featureUriIsSet() const;
    void unsetfeatureUri();
    void setFeatureUri(const std::string& value);

    /// <summary>
    /// 用例编号
    /// </summary>

    std::string getTestCaseNumber() const;
    bool testCaseNumberIsSet() const;
    void unsettestCaseNumber();
    void setTestCaseNumber(const std::string& value);

    /// <summary>
    /// 脚本路径
    /// </summary>

    std::string getSvnScriptPath() const;
    bool svnScriptPathIsSet() const;
    void unsetsvnScriptPath();
    void setSvnScriptPath(const std::string& value);

    /// <summary>
    /// 状态
    /// </summary>

    std::string getStatusCode() const;
    bool statusCodeIsSet() const;
    void unsetstatusCode();
    void setStatusCode(const std::string& value);

    /// <summary>
    /// 状态名称
    /// </summary>

    std::string getStatusName() const;
    bool statusNameIsSet() const;
    void unsetstatusName();
    void setStatusName(const std::string& value);

    /// <summary>
    /// 结果id
    /// </summary>

    std::string getResultCode() const;
    bool resultCodeIsSet() const;
    void unsetresultCode();
    void setResultCode(const std::string& value);

    /// <summary>
    /// 结果名称
    /// </summary>

    std::string getResultName() const;
    bool resultNameIsSet() const;
    void unsetresultName();
    void setResultName(const std::string& value);

    /// <summary>
    /// 责任人名称
    /// </summary>

    std::string getOwnerName() const;
    bool ownerNameIsSet() const;
    void unsetownerName();
    void setOwnerName(const std::string& value);

    /// <summary>
    /// 最新执行时间
    /// </summary>

    utility::datetime getExecuteLatestTime() const;
    bool executeLatestTimeIsSet() const;
    void unsetexecuteLatestTime();
    void setExecuteLatestTime(const utility::datetime& value);

    /// <summary>
    /// 执行时长
    /// </summary>

    std::string getExecuteDuration() const;
    bool executeDurationIsSet() const;
    void unsetexecuteDuration();
    void setExecuteDuration(const std::string& value);

    /// <summary>
    /// 是否是关键用例
    /// </summary>

    int32_t getIsKeyword() const;
    bool isKeywordIsSet() const;
    void unsetisKeyword();
    void setIsKeyword(int32_t value);

    /// <summary>
    /// 脚本名称
    /// </summary>

    std::string getNetWorkScriptName() const;
    bool netWorkScriptNameIsSet() const;
    void unsetnetWorkScriptName();
    void setNetWorkScriptName(const std::string& value);

    /// <summary>
    /// 用例等级
    /// </summary>

    int32_t getRankId() const;
    bool rankIdIsSet() const;
    void unsetrankId();
    void setRankId(int32_t value);


protected:
    std::string uri_;
    bool uriIsSet_;
    int32_t sort_;
    bool sortIsSet_;
    std::string owner_;
    bool ownerIsSet_;
    int32_t stage_;
    bool stageIsSet_;
    std::string projectUuid_;
    bool projectUuidIsSet_;
    std::string taskUri_;
    bool taskUriIsSet_;
    utility::datetime updateTime_;
    bool updateTimeIsSet_;
    std::string updatorName_;
    bool updatorNameIsSet_;
    std::string updator_;
    bool updatorIsSet_;
    std::string caseUri_;
    bool caseUriIsSet_;
    int32_t isAvailable_;
    bool isAvailableIsSet_;
    std::string testCaseName_;
    bool testCaseNameIsSet_;
    std::string featureUri_;
    bool featureUriIsSet_;
    std::string testCaseNumber_;
    bool testCaseNumberIsSet_;
    std::string svnScriptPath_;
    bool svnScriptPathIsSet_;
    std::string statusCode_;
    bool statusCodeIsSet_;
    std::string statusName_;
    bool statusNameIsSet_;
    std::string resultCode_;
    bool resultCodeIsSet_;
    std::string resultName_;
    bool resultNameIsSet_;
    std::string ownerName_;
    bool ownerNameIsSet_;
    utility::datetime executeLatestTime_;
    bool executeLatestTimeIsSet_;
    std::string executeDuration_;
    bool executeDurationIsSet_;
    int32_t isKeyword_;
    bool isKeywordIsSet_;
    std::string netWorkScriptName_;
    bool netWorkScriptNameIsSet_;
    int32_t rankId_;
    bool rankIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TaskAssignCaseDetailVo_H_
