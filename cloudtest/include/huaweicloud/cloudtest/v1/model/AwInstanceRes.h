
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_AwInstanceRes_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_AwInstanceRes_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cloudtest/v1/model/AwVariable.h>
#include <huaweicloud/cloudtest/v1/model/AwParam.h>
#include <huaweicloud/cloudtest/v1/model/ExtraInfo.h>
#include <huaweicloud/cloudtest/v1/model/ErrorInfo.h>
#include <string>
#include <huaweicloud/cloudtest/v1/model/BasicAwRes.h>
#include <huaweicloud/cloudtest/v1/model/ArrayNode.h>
#include <huaweicloud/cloudtest/v1/model/AuthInfo.h>
#include <huaweicloud/cloudtest/v1/model/AwInstanceRes.h>
#include <huaweicloud/cloudtest/v1/model/CheckPoint.h>
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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  AwInstanceRes
    : public ModelBase
{
public:
    AwInstanceRes();
    virtual ~AwInstanceRes();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AwInstanceRes members

    /// <summary>
    /// AW内容描述字段
    /// </summary>

    std::string getAliasRunaw() const;
    bool aliasRunawIsSet() const;
    void unsetaliasRunaw();
    void setAliasRunaw(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    AuthInfo getAuthenticationInfo() const;
    bool authenticationInfoIsSet() const;
    void unsetauthenticationInfo();
    void setAuthenticationInfo(const AuthInfo& value);

    /// <summary>
    /// 认证类型,0-无认证;1-aksk认证
    /// </summary>

    std::string getAuthenticationType() const;
    bool authenticationTypeIsSet() const;
    void unsetauthenticationType();
    void setAuthenticationType(const std::string& value);

    /// <summary>
    /// 脚本模板描述信息，在用例更新时添加
    /// </summary>

    std::string getAwDescription() const;
    bool awDescriptionIsSet() const;
    void unsetawDescription();
    void setAwDescription(const std::string& value);

    /// <summary>
    /// aw id
    /// </summary>

    std::string getAwId() const;
    bool awIdIsSet() const;
    void unsetawId();
    void setAwId(const std::string& value);

    /// <summary>
    /// aw类型 0-setup;1-test;2-teardown
    /// </summary>

    int32_t getAwType() const;
    bool awTypeIsSet() const;
    void unsetawType();
    void setAwType(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    BasicAwRes getBasicAw() const;
    bool basicAwIsSet() const;
    void unsetbasicAw();
    void setBasicAw(const BasicAwRes& value);

    /// <summary>
    /// instance的参数body体类型：form/text
    /// </summary>

    std::string getBodyParamType() const;
    bool bodyParamTypeIsSet() const;
    void unsetbodyParamType();
    void setBodyParamType(const std::string& value);

    /// <summary>
    /// 顺序
    /// </summary>

    int32_t getByOrder() const;
    bool byOrderIsSet() const;
    void unsetbyOrder();
    void setByOrder(int32_t value);

    /// <summary>
    /// change sign
    /// </summary>

    int32_t getChangeSign() const;
    bool changeSignIsSet() const;
    void unsetchangeSign();
    void setChangeSign(int32_t value);

    /// <summary>
    /// 检查点List
    /// </summary>

    std::vector<CheckPoint>& getCheckPointList();
    bool checkPointListIsSet() const;
    void unsetcheckPointList();
    void setCheckPointList(const std::vector<CheckPoint>& value);

    /// <summary>
    /// aw实例
    /// </summary>

    std::vector<AwInstanceRes>& getChildren();
    bool childrenIsSet() const;
    void unsetchildren();
    void setChildren(const std::vector<AwInstanceRes>& value);

    /// <summary>
    /// 条件语句
    /// </summary>

    std::string getConditionStatement() const;
    bool conditionStatementIsSet() const;
    void unsetconditionStatement();
    void setConditionStatement(const std::string& value);

    /// <summary>
    /// 条件类型 0-not condition;1-if begin;2-if
    /// </summary>

    int32_t getConditionType() const;
    bool conditionTypeIsSet() const;
    void unsetconditionType();
    void setConditionType(int32_t value);

    /// <summary>
    /// 创建时间
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);

    /// <summary>
    /// 创建时间戳
    /// </summary>

    int64_t getCreateTimeStamp() const;
    bool createTimeStampIsSet() const;
    void unsetcreateTimeStamp();
    void setCreateTimeStamp(int64_t value);

    /// <summary>
    /// 创建时间字符串
    /// </summary>

    std::string getCreateTimeString() const;
    bool createTimeStringIsSet() const;
    void unsetcreateTimeString();
    void setCreateTimeString(const std::string& value);

    /// <summary>
    /// 创建人
    /// </summary>

    std::string getCreateUser() const;
    bool createUserIsSet() const;
    void unsetcreateUser();
    void setCreateUser(const std::string& value);

    /// <summary>
    /// 测试步骤自定义请求头List；后续自定义URL请求头不再使用该字段
    /// </summary>

    std::vector<AwParam>& getCustomHeader();
    bool customHeaderIsSet() const;
    void unsetcustomHeader();
    void setCustomHeader(const std::vector<AwParam>& value);

    /// <summary>
    /// 描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ErrorInfo getErrorInfo() const;
    bool errorInfoIsSet() const;
    void unseterrorInfo();
    void setErrorInfo(const ErrorInfo& value);

    /// <summary>
    /// 
    /// </summary>

    ExtraInfo getExtraInfo() const;
    bool extraInfoIsSet() const;
    void unsetextraInfo();
    void setExtraInfo(const ExtraInfo& value);

    /// <summary>
    /// 该aw是否来自外部工程 0-no;1-yes
    /// </summary>

    int32_t getFromOutside() const;
    bool fromOutsideIsSet() const;
    void unsetfromOutside();
    void setFromOutside(int32_t value);

    /// <summary>
    /// level
    /// </summary>

    int32_t getHasLevel() const;
    bool hasLevelIsSet() const;
    void unsethasLevel();
    void setHasLevel(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<ArrayNode>& getHeaderArray();
    bool headerArrayIsSet() const;
    void unsetheaderArray();
    void setHeaderArray(const std::vector<ArrayNode>& value);

    /// <summary>
    /// 值不为null表示老的IF判断语句；值为null表示新的IF判断语句
    /// </summary>

    std::string getHisScript() const;
    bool hisScriptIsSet() const;
    void unsethisScript();
    void setHisScript(const std::string& value);

    /// <summary>
    /// id
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 是否模板类型测试步骤 0：自定义URL配置类型；1：模板类型测试步骤
    /// </summary>

    int32_t getIsBasic() const;
    bool isBasicIsSet() const;
    void unsetisBasic();
    void setIsBasic(int32_t value);

    /// <summary>
    /// 是否是契约AW 0-否；1-yes
    /// </summary>

    int32_t getIsContractAw() const;
    bool isContractAwIsSet() const;
    void unsetisContractAw();
    void setIsContractAw(int32_t value);

    /// <summary>
    /// 是否被禁用 0-否；1-yes
    /// </summary>

    int32_t getIsDisabled() const;
    bool isDisabledIsSet() const;
    void unsetisDisabled();
    void setIsDisabled(int32_t value);

    /// <summary>
    /// 是否是安全测试aw
    /// </summary>

    int32_t getIsSectestAw() const;
    bool isSectestAwIsSet() const;
    void unsetisSectestAw();
    void setIsSectestAw(int32_t value);

    /// <summary>
    /// 用例级别
    /// </summary>

    int32_t getLevel() const;
    bool levelIsSet() const;
    void unsetlevel();
    void setLevel(int32_t value);

    /// <summary>
    /// 名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 参数依赖规则
    /// </summary>

    std::string getParamDependent() const;
    bool paramDependentIsSet() const;
    void unsetparamDependent();
    void setParamDependent(const std::string& value);

    /// <summary>
    /// 是否启用参数依赖
    /// </summary>

    int32_t getParamDependentEnabled() const;
    bool paramDependentEnabledIsSet() const;
    void unsetparamDependentEnabled();
    void setParamDependentEnabled(int32_t value);

    /// <summary>
    /// 参数类型和参数值对应List
    /// </summary>

    std::vector<AwParam>& getParamTypeAndValue();
    bool paramTypeAndValueIsSet() const;
    void unsetparamTypeAndValue();
    void setParamTypeAndValue(const std::vector<AwParam>& value);

    /// <summary>
    /// awinstance所在的用例\\逻辑用例\\组合aw所属项目,该字段是新增字段,因此部分awinstance是无值的,所以只可写该值,而不能读取该值
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 区域名称
    /// </summary>

    std::string getRegion() const;
    bool regionIsSet() const;
    void unsetregion();
    void setRegion(const std::string& value);

    /// <summary>
    /// awId层级关系
    /// </summary>

    std::string getRelation() const;
    bool relationIsSet() const;
    void unsetrelation();
    void setRelation(const std::string& value);

    /// <summary>
    /// relation id
    /// </summary>

    std::string getRelationId() const;
    bool relationIdIsSet() const;
    void unsetrelationId();
    void setRelationId(const std::string& value);

    /// <summary>
    /// 映射类型 1-反向删除映射;2-用例自动添加的方向删除步骤
    /// </summary>

    int32_t getRelationType() const;
    bool relationTypeIsSet() const;
    void unsetrelationType();
    void setRelationType(int32_t value);

    /// <summary>
    /// 重试间隔时间 (ms) 为空表示不等待
    /// </summary>

    std::string getRetryInterval() const;
    bool retryIntervalIsSet() const;
    void unsetretryInterval();
    void setRetryInterval(const std::string& value);

    /// <summary>
    /// 重试次数
    /// </summary>

    std::string getRetryTimes() const;
    bool retryTimesIsSet() const;
    void unsetretryTimes();
    void setRetryTimes(const std::string& value);

    /// <summary>
    /// 获取脚本生成时，要使用的步骤名称
    /// </summary>

    std::string getScriptName() const;
    bool scriptNameIsSet() const;
    void unsetscriptName();
    void setScriptName(const std::string& value);

    /// <summary>
    /// aw所来自工程的服务名和阶段名 fromOutside为1时该值有效
    /// </summary>

    std::string getServiceAndStage() const;
    bool serviceAndStageIsSet() const;
    void unsetserviceAndStage();
    void setServiceAndStage(const std::string& value);

    /// <summary>
    /// 测试步骤来源
    /// </summary>

    int32_t getSpecialType() const;
    bool specialTypeIsSet() const;
    void unsetspecialType();
    void setSpecialType(int32_t value);

    /// <summary>
    /// 更新时间
    /// </summary>

    std::string getUpdateTime() const;
    bool updateTimeIsSet() const;
    void unsetupdateTime();
    void setUpdateTime(const std::string& value);

    /// <summary>
    /// 更新时间戳
    /// </summary>

    int64_t getUpdateTimeStamp() const;
    bool updateTimeStampIsSet() const;
    void unsetupdateTimeStamp();
    void setUpdateTimeStamp(int64_t value);

    /// <summary>
    /// 更新时间字符串
    /// </summary>

    std::string getUpdateTimeString() const;
    bool updateTimeStringIsSet() const;
    void unsetupdateTimeString();
    void setUpdateTimeString(const std::string& value);

    /// <summary>
    /// 更新人
    /// </summary>

    std::string getUpdateUser() const;
    bool updateUserIsSet() const;
    void unsetupdateUser();
    void setUpdateUser(const std::string& value);

    /// <summary>
    /// user id
    /// </summary>

    std::string getUserId() const;
    bool userIdIsSet() const;
    void unsetuserId();
    void setUserId(const std::string& value);

    /// <summary>
    /// 定义的变量信息
    /// </summary>

    std::vector<AwVariable>& getVariableList();
    bool variableListIsSet() const;
    void unsetvariableList();
    void setVariableList(const std::vector<AwVariable>& value);


protected:
    std::string aliasRunaw_;
    bool aliasRunawIsSet_;
    AuthInfo authenticationInfo_;
    bool authenticationInfoIsSet_;
    std::string authenticationType_;
    bool authenticationTypeIsSet_;
    std::string awDescription_;
    bool awDescriptionIsSet_;
    std::string awId_;
    bool awIdIsSet_;
    int32_t awType_;
    bool awTypeIsSet_;
    BasicAwRes basicAw_;
    bool basicAwIsSet_;
    std::string bodyParamType_;
    bool bodyParamTypeIsSet_;
    int32_t byOrder_;
    bool byOrderIsSet_;
    int32_t changeSign_;
    bool changeSignIsSet_;
    std::vector<CheckPoint> checkPointList_;
    bool checkPointListIsSet_;
    std::vector<AwInstanceRes>* children_;
    bool childrenIsSet_;
    std::string conditionStatement_;
    bool conditionStatementIsSet_;
    int32_t conditionType_;
    bool conditionTypeIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;
    int64_t createTimeStamp_;
    bool createTimeStampIsSet_;
    std::string createTimeString_;
    bool createTimeStringIsSet_;
    std::string createUser_;
    bool createUserIsSet_;
    std::vector<AwParam> customHeader_;
    bool customHeaderIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    ErrorInfo errorInfo_;
    bool errorInfoIsSet_;
    ExtraInfo extraInfo_;
    bool extraInfoIsSet_;
    int32_t fromOutside_;
    bool fromOutsideIsSet_;
    int32_t hasLevel_;
    bool hasLevelIsSet_;
    std::vector<ArrayNode> headerArray_;
    bool headerArrayIsSet_;
    std::string hisScript_;
    bool hisScriptIsSet_;
    std::string id_;
    bool idIsSet_;
    int32_t isBasic_;
    bool isBasicIsSet_;
    int32_t isContractAw_;
    bool isContractAwIsSet_;
    int32_t isDisabled_;
    bool isDisabledIsSet_;
    int32_t isSectestAw_;
    bool isSectestAwIsSet_;
    int32_t level_;
    bool levelIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string paramDependent_;
    bool paramDependentIsSet_;
    int32_t paramDependentEnabled_;
    bool paramDependentEnabledIsSet_;
    std::vector<AwParam> paramTypeAndValue_;
    bool paramTypeAndValueIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    std::string region_;
    bool regionIsSet_;
    std::string relation_;
    bool relationIsSet_;
    std::string relationId_;
    bool relationIdIsSet_;
    int32_t relationType_;
    bool relationTypeIsSet_;
    std::string retryInterval_;
    bool retryIntervalIsSet_;
    std::string retryTimes_;
    bool retryTimesIsSet_;
    std::string scriptName_;
    bool scriptNameIsSet_;
    std::string serviceAndStage_;
    bool serviceAndStageIsSet_;
    int32_t specialType_;
    bool specialTypeIsSet_;
    std::string updateTime_;
    bool updateTimeIsSet_;
    int64_t updateTimeStamp_;
    bool updateTimeStampIsSet_;
    std::string updateTimeString_;
    bool updateTimeStringIsSet_;
    std::string updateUser_;
    bool updateUserIsSet_;
    std::string userId_;
    bool userIdIsSet_;
    std::vector<AwVariable> variableList_;
    bool variableListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_AwInstanceRes_H_
