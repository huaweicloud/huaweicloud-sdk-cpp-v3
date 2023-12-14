
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_LTSAccessConfigInfoRespon200_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_LTSAccessConfigInfoRespon200_H_


#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <string>
#include <huaweicloud/lts/v2/model/PreviewAgencyLogAccessReqBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  LTSAccessConfigInfoRespon200
    : public ModelBase
{
public:
    LTSAccessConfigInfoRespon200();
    virtual ~LTSAccessConfigInfoRespon200();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// LTSAccessConfigInfoRespon200 members

    /// <summary>
    /// 跨账号日志接入id
    /// </summary>

    std::string getAccessConfigId() const;
    bool accessConfigIdIsSet() const;
    void unsetaccessConfigId();
    void setAccessConfigId(const std::string& value);

    /// <summary>
    /// 项目ID
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 跨账号日志接入名称
    /// </summary>

    std::string getAccessConfigName() const;
    bool accessConfigNameIsSet() const;
    void unsetaccessConfigName();
    void setAccessConfigName(const std::string& value);

    /// <summary>
    /// 跨账号日志接入类型
    /// </summary>

    Object getAccessConfigType() const;
    bool accessConfigTypeIsSet() const;
    void unsetaccessConfigType();
    void setAccessConfigType(const Object& value);

    /// <summary>
    /// 日志组ID
    /// </summary>

    std::string getGroupId() const;
    bool groupIdIsSet() const;
    void unsetgroupId();
    void setGroupId(const std::string& value);

    /// <summary>
    /// 日志组名称
    /// </summary>

    std::string getLogGroupName() const;
    bool logGroupNameIsSet() const;
    void unsetlogGroupName();
    void setLogGroupName(const std::string& value);

    /// <summary>
    /// 日志流ID
    /// </summary>

    std::string getLogStreamId() const;
    bool logStreamIdIsSet() const;
    void unsetlogStreamId();
    void setLogStreamId(const std::string& value);

    /// <summary>
    /// 日志流名称
    /// </summary>

    std::string getLogStreamName() const;
    bool logStreamNameIsSet() const;
    void unsetlogStreamName();
    void setLogStreamName(const std::string& value);

    /// <summary>
    /// 创建时间
    /// </summary>

    int64_t getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(int64_t value);

    /// <summary>
    /// 
    /// </summary>

    PreviewAgencyLogAccessReqBody getAgencyLogAccess() const;
    bool agencyLogAccessIsSet() const;
    void unsetagencyLogAccess();
    void setAgencyLogAccess(const PreviewAgencyLogAccessReqBody& value);


protected:
    std::string accessConfigId_;
    bool accessConfigIdIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    std::string accessConfigName_;
    bool accessConfigNameIsSet_;
    Object accessConfigType_;
    bool accessConfigTypeIsSet_;
    std::string groupId_;
    bool groupIdIsSet_;
    std::string logGroupName_;
    bool logGroupNameIsSet_;
    std::string logStreamId_;
    bool logStreamIdIsSet_;
    std::string logStreamName_;
    bool logStreamNameIsSet_;
    int64_t createTime_;
    bool createTimeIsSet_;
    PreviewAgencyLogAccessReqBody agencyLogAccess_;
    bool agencyLogAccessIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_LTSAccessConfigInfoRespon200_H_
