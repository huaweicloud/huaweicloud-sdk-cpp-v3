
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_BranchVersionInfo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_BranchVersionInfo_H_


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
/// 
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  BranchVersionInfo
    : public ModelBase
{
public:
    BranchVersionInfo();
    virtual ~BranchVersionInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BranchVersionInfo members

    /// <summary>
    /// 名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 开发分支名称
    /// </summary>

    std::string getNumber() const;
    bool numberIsSet() const;
    void unsetnumber();
    void setNumber(const std::string& value);

    /// <summary>
    /// 是否为Master分支
    /// </summary>

    std::string getIsMaster() const;
    bool isMasterIsSet() const;
    void unsetisMaster();
    void setIsMaster(const std::string& value);

    /// <summary>
    /// PBI ID
    /// </summary>

    std::string getPbiId() const;
    bool pbiIdIsSet() const;
    void unsetpbiId();
    void setPbiId(const std::string& value);

    /// <summary>
    /// PBI信息
    /// </summary>

    std::string getPbiName() const;
    bool pbiNameIsSet() const;
    void unsetpbiName();
    void setPbiName(const std::string& value);

    /// <summary>
    /// 开始时间
    /// </summary>

    std::string getPlanStartDate() const;
    bool planStartDateIsSet() const;
    void unsetplanStartDate();
    void setPlanStartDate(const std::string& value);

    /// <summary>
    /// 开始时间戳
    /// </summary>

    int64_t getPlanStartTimestamp() const;
    bool planStartTimestampIsSet() const;
    void unsetplanStartTimestamp();
    void setPlanStartTimestamp(int64_t value);

    /// <summary>
    /// 结束时间
    /// </summary>

    std::string getPlanEndDate() const;
    bool planEndDateIsSet() const;
    void unsetplanEndDate();
    void setPlanEndDate(const std::string& value);

    /// <summary>
    /// 结束时间戳
    /// </summary>

    int64_t getPlanEndTimestamp() const;
    bool planEndTimestampIsSet() const;
    void unsetplanEndTimestamp();
    void setPlanEndTimestamp(int64_t value);

    /// <summary>
    /// 是否同步git库
    /// </summary>

    std::string getAsynGit() const;
    bool asynGitIsSet() const;
    void unsetasynGit();
    void setAsynGit(const std::string& value);

    /// <summary>
    /// 项目ID（云龙场景，传入微服务ID）
    /// </summary>

    std::string getProjectUuid() const;
    bool projectUuidIsSet() const;
    void unsetprojectUuid();
    void setProjectUuid(const std::string& value);

    /// <summary>
    /// 项目名称（云龙场景，传入微服务名）
    /// </summary>

    std::string getProjectName() const;
    bool projectNameIsSet() const;
    void unsetprojectName();
    void setProjectName(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string number_;
    bool numberIsSet_;
    std::string isMaster_;
    bool isMasterIsSet_;
    std::string pbiId_;
    bool pbiIdIsSet_;
    std::string pbiName_;
    bool pbiNameIsSet_;
    std::string planStartDate_;
    bool planStartDateIsSet_;
    int64_t planStartTimestamp_;
    bool planStartTimestampIsSet_;
    std::string planEndDate_;
    bool planEndDateIsSet_;
    int64_t planEndTimestamp_;
    bool planEndTimestampIsSet_;
    std::string asynGit_;
    bool asynGitIsSet_;
    std::string projectUuid_;
    bool projectUuidIsSet_;
    std::string projectName_;
    bool projectNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_BranchVersionInfo_H_
