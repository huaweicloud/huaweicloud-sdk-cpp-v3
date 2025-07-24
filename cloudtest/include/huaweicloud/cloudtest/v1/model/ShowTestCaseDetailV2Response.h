
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ShowTestCaseDetailV2Response_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ShowTestCaseDetailV2Response_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cloudtest/v1/model/ExtendInfo.h>
#include <string>
#include <huaweicloud/cloudtest/v1/model/AssignedUserInfo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  ShowTestCaseDetailV2Response
    : public ModelBase, public HttpResponse
{
public:
    ShowTestCaseDetailV2Response();
    virtual ~ShowTestCaseDetailV2Response();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowTestCaseDetailV2Response members

    /// <summary>
    /// 测试用例唯一标识
    /// </summary>

    std::string getTestcaseId() const;
    bool testcaseIdIsSet() const;
    void unsettestcaseId();
    void setTestcaseId(const std::string& value);

    /// <summary>
    /// 软开云项目唯一标识
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 注册测试类型服务接口返回的服务id
    /// </summary>

    int32_t getServiceId() const;
    bool serviceIdIsSet() const;
    void unsetserviceId();
    void setServiceId(int32_t value);

    /// <summary>
    /// 测试用例名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 测试用例编号
    /// </summary>

    std::string getTestcaseNumber() const;
    bool testcaseNumberIsSet() const;
    void unsettestcaseNumber();
    void setTestcaseNumber(const std::string& value);

    /// <summary>
    /// 测试用例等级
    /// </summary>

    int32_t getRankId() const;
    bool rankIdIsSet() const;
    void unsetrankId();
    void setRankId(int32_t value);

    /// <summary>
    /// 测试用例状态
    /// </summary>

    std::string getStatusId() const;
    bool statusIdIsSet() const;
    void unsetstatusId();
    void setStatusId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    AssignedUserInfo getAssignedUser() const;
    bool assignedUserIsSet() const;
    void unsetassignedUser();
    void setAssignedUser(const AssignedUserInfo& value);

    /// <summary>
    /// 测试用例执行次数
    /// </summary>

    int32_t getExecuteCount() const;
    bool executeCountIsSet() const;
    void unsetexecuteCount();
    void setExecuteCount(int32_t value);

    /// <summary>
    /// 测试用例执行结果
    /// </summary>

    std::string getResultId() const;
    bool resultIdIsSet() const;
    void unsetresultId();
    void setResultId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ExtendInfo getExtendInfo() const;
    bool extendInfoIsSet() const;
    void unsetextendInfo();
    void setExtendInfo(const ExtendInfo& value);

    /// <summary>
    /// 接口调用失败错误码
    /// </summary>

    std::string getErrorCode() const;
    bool errorCodeIsSet() const;
    void unseterrorCode();
    void setErrorCode(const std::string& value);

    /// <summary>
    /// 接口调用失败错误信息
    /// </summary>

    std::string getErrorMsg() const;
    bool errorMsgIsSet() const;
    void unseterrorMsg();
    void setErrorMsg(const std::string& value);


protected:
    std::string testcaseId_;
    bool testcaseIdIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    int32_t serviceId_;
    bool serviceIdIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string testcaseNumber_;
    bool testcaseNumberIsSet_;
    int32_t rankId_;
    bool rankIdIsSet_;
    std::string statusId_;
    bool statusIdIsSet_;
    AssignedUserInfo assignedUser_;
    bool assignedUserIsSet_;
    int32_t executeCount_;
    bool executeCountIsSet_;
    std::string resultId_;
    bool resultIdIsSet_;
    ExtendInfo extendInfo_;
    bool extendInfoIsSet_;
    std::string errorCode_;
    bool errorCodeIsSet_;
    std::string errorMsg_;
    bool errorMsgIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ShowTestCaseDetailV2Response_H_
