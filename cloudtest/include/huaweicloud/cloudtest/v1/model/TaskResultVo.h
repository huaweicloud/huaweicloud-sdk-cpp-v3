
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TaskResultVo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TaskResultVo_H_


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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  TaskResultVo
    : public ModelBase
{
public:
    TaskResultVo();
    virtual ~TaskResultVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TaskResultVo members

    /// <summary>
    /// 结果URI
    /// </summary>

    std::string getUri() const;
    bool uriIsSet() const;
    void unseturi();
    void setUri(const std::string& value);

    /// <summary>
    /// 测试套名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 任务uri
    /// </summary>

    std::string getTaskUri() const;
    bool taskUriIsSet() const;
    void unsettaskUri();
    void setTaskUri(const std::string& value);

    /// <summary>
    /// 描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 责任人
    /// </summary>

    std::string getOwner() const;
    bool ownerIsSet() const;
    void unsetowner();
    void setOwner(const std::string& value);

    /// <summary>
    /// 责任人名称
    /// </summary>

    std::string getOwnerName() const;
    bool ownerNameIsSet() const;
    void unsetownerName();
    void setOwnerName(const std::string& value);

    /// <summary>
    /// 发布版本号
    /// </summary>

    std::string getReleaseDev() const;
    bool releaseDevIsSet() const;
    void unsetreleaseDev();
    void setReleaseDev(const std::string& value);

    /// <summary>
    /// 分支/迭代uri
    /// </summary>

    std::string getVersionUri() const;
    bool versionUriIsSet() const;
    void unsetversionUri();
    void setVersionUri(const std::string& value);

    /// <summary>
    /// 创建人id
    /// </summary>

    std::string getCreator() const;
    bool creatorIsSet() const;
    void unsetcreator();
    void setCreator(const std::string& value);

    /// <summary>
    /// 创建人名称
    /// </summary>

    std::string getCreatorName() const;
    bool creatorNameIsSet() const;
    void unsetcreatorName();
    void setCreatorName(const std::string& value);

    /// <summary>
    /// 创建时间
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);

    /// <summary>
    /// 更新人
    /// </summary>

    std::string getUpdator() const;
    bool updatorIsSet() const;
    void unsetupdator();
    void setUpdator(const std::string& value);

    /// <summary>
    /// 更新人名称
    /// </summary>

    std::string getUpdatorName() const;
    bool updatorNameIsSet() const;
    void unsetupdatorName();
    void setUpdatorName(const std::string& value);

    /// <summary>
    /// 更新人名称
    /// </summary>

    std::string getUpdateTime() const;
    bool updateTimeIsSet() const;
    void unsetupdateTime();
    void setUpdateTime(const std::string& value);

    /// <summary>
    /// 开始时间
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// 结束时间
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);

    /// <summary>
    /// 测试结果名称
    /// </summary>

    std::string getResultName() const;
    bool resultNameIsSet() const;
    void unsetresultName();
    void setResultName(const std::string& value);

    /// <summary>
    /// 项目id
    /// </summary>

    std::string getProjectUuid() const;
    bool projectUuidIsSet() const;
    void unsetprojectUuid();
    void setProjectUuid(const std::string& value);


protected:
    std::string uri_;
    bool uriIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string taskUri_;
    bool taskUriIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string owner_;
    bool ownerIsSet_;
    std::string ownerName_;
    bool ownerNameIsSet_;
    std::string releaseDev_;
    bool releaseDevIsSet_;
    std::string versionUri_;
    bool versionUriIsSet_;
    std::string creator_;
    bool creatorIsSet_;
    std::string creatorName_;
    bool creatorNameIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;
    std::string updator_;
    bool updatorIsSet_;
    std::string updatorName_;
    bool updatorNameIsSet_;
    std::string updateTime_;
    bool updateTimeIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    std::string resultName_;
    bool resultNameIsSet_;
    std::string projectUuid_;
    bool projectUuidIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TaskResultVo_H_
