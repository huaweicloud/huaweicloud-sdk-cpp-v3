
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TaskInfo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TaskInfo_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cloudtest/v1/model/CaseOperationInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 测试套件信息
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  TaskInfo
    : public ModelBase
{
public:
    TaskInfo();
    virtual ~TaskInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TaskInfo members

    /// <summary>
    /// 指定创建任务的uri
    /// </summary>

    std::string getUri() const;
    bool uriIsSet() const;
    void unseturi();
    void setUri(const std::string& value);

    /// <summary>
    /// 分支/迭代uri
    /// </summary>

    std::string getVersionUri() const;
    bool versionUriIsSet() const;
    void unsetversionUri();
    void setVersionUri(const std::string& value);

    /// <summary>
    /// 名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 处理人/责任人id
    /// </summary>

    std::string getOwnerId() const;
    bool ownerIdIsSet() const;
    void unsetownerId();
    void setOwnerId(const std::string& value);

    /// <summary>
    /// 父任务uri
    /// </summary>

    std::string getParentUri() const;
    bool parentUriIsSet() const;
    void unsetparentUri();
    void setParentUri(const std::string& value);

    /// <summary>
    /// 动态任务用例过滤条件
    /// </summary>

    std::string getTestCaseCondition() const;
    bool testCaseConditionIsSet() const;
    void unsettestCaseCondition();
    void setTestCaseCondition(const std::string& value);

    /// <summary>
    /// 测试阶段
    /// </summary>

    std::string getStage() const;
    bool stageIsSet() const;
    void unsetstage();
    void setStage(const std::string& value);

    /// <summary>
    /// 服务类型0:功能测试 1:接口测试 11:性能测试
    /// </summary>

    int32_t getServiceType() const;
    bool serviceTypeIsSet() const;
    void unsetserviceType();
    void setServiceType(int32_t value);

    /// <summary>
    /// 编号
    /// </summary>

    std::string getNumber() const;
    bool numberIsSet() const;
    void unsetnumber();
    void setNumber(const std::string& value);

    /// <summary>
    /// 标记id
    /// </summary>

    std::vector<std::string>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<std::string>& value);

    /// <summary>
    /// 模块id
    /// </summary>

    std::string getModuleId() const;
    bool moduleIdIsSet() const;
    void unsetmoduleId();
    void setModuleId(const std::string& value);

    /// <summary>
    /// 模块名称
    /// </summary>

    std::string getModuleName() const;
    bool moduleNameIsSet() const;
    void unsetmoduleName();
    void setModuleName(const std::string& value);

    /// <summary>
    /// 发布版本号
    /// </summary>

    std::string getReleaseDev() const;
    bool releaseDevIsSet() const;
    void unsetreleaseDev();
    void setReleaseDev(const std::string& value);

    /// <summary>
    /// 状态code
    /// </summary>

    int32_t getStatusCode() const;
    bool statusCodeIsSet() const;
    void unsetstatusCode();
    void setStatusCode(int32_t value);

    /// <summary>
    /// 扩展参数
    /// </summary>

    std::string getExtParam() const;
    bool extParamIsSet() const;
    void unsetextParam();
    void setExtParam(const std::string& value);

    /// <summary>
    /// 执行方式 1：串行，2：并行
    /// </summary>

    int32_t getExecuteWay() const;
    bool executeWayIsSet() const;
    void unsetexecuteWay();
    void setExecuteWay(int32_t value);

    /// <summary>
    /// 执行类型（0：冒烟，1：定时）
    /// </summary>

    int32_t getExecuteType() const;
    bool executeTypeIsSet() const;
    void unsetexecuteType();
    void setExecuteType(int32_t value);

    /// <summary>
    /// 描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 计划开始时间戳，当传入-1时，时间置为空
    /// </summary>

    int64_t getPlanStartTimestamp() const;
    bool planStartTimestampIsSet() const;
    void unsetplanStartTimestamp();
    void setPlanStartTimestamp(int64_t value);

    /// <summary>
    /// 计划结束时间戳，当传入-1时，时间置为空
    /// </summary>

    int64_t getPlanEndTimestamp() const;
    bool planEndTimestampIsSet() const;
    void unsetplanEndTimestamp();
    void setPlanEndTimestamp(int64_t value);

    /// <summary>
    /// 区域
    /// </summary>

    std::string getRegion() const;
    bool regionIsSet() const;
    void unsetregion();
    void setRegion(const std::string& value);

    /// <summary>
    /// 任务关联用例uri数组，CloudDragon环境
    /// </summary>

    std::vector<std::string>& getAssignCaseUris();
    bool assignCaseUrisIsSet() const;
    void unsetassignCaseUris();
    void setAssignCaseUris(const std::vector<std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    CaseOperationInfo getCaseOperationInfo() const;
    bool caseOperationInfoIsSet() const;
    void unsetcaseOperationInfo();
    void setCaseOperationInfo(const CaseOperationInfo& value);

    /// <summary>
    /// 是否只需要修改测试套状态
    /// </summary>

    bool isOnlyUpdateStatus() const;
    bool onlyUpdateStatusIsSet() const;
    void unsetonlyUpdateStatus();
    void setOnlyUpdateStatus(bool value);

    /// <summary>
    /// 是否异步
    /// </summary>

    bool isIsAsync() const;
    bool isAsyncIsSet() const;
    void unsetisAsync();
    void setIsAsync(bool value);


protected:
    std::string uri_;
    bool uriIsSet_;
    std::string versionUri_;
    bool versionUriIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string ownerId_;
    bool ownerIdIsSet_;
    std::string parentUri_;
    bool parentUriIsSet_;
    std::string testCaseCondition_;
    bool testCaseConditionIsSet_;
    std::string stage_;
    bool stageIsSet_;
    int32_t serviceType_;
    bool serviceTypeIsSet_;
    std::string number_;
    bool numberIsSet_;
    std::vector<std::string> tags_;
    bool tagsIsSet_;
    std::string moduleId_;
    bool moduleIdIsSet_;
    std::string moduleName_;
    bool moduleNameIsSet_;
    std::string releaseDev_;
    bool releaseDevIsSet_;
    int32_t statusCode_;
    bool statusCodeIsSet_;
    std::string extParam_;
    bool extParamIsSet_;
    int32_t executeWay_;
    bool executeWayIsSet_;
    int32_t executeType_;
    bool executeTypeIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    int64_t planStartTimestamp_;
    bool planStartTimestampIsSet_;
    int64_t planEndTimestamp_;
    bool planEndTimestampIsSet_;
    std::string region_;
    bool regionIsSet_;
    std::vector<std::string> assignCaseUris_;
    bool assignCaseUrisIsSet_;
    CaseOperationInfo caseOperationInfo_;
    bool caseOperationInfoIsSet_;
    bool onlyUpdateStatus_;
    bool onlyUpdateStatusIsSet_;
    bool isAsync_;
    bool isAsyncIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TaskInfo_H_
