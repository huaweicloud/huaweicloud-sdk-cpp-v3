
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TestPoint_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TestPoint_H_


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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  TestPoint
    : public ModelBase
{
public:
    TestPoint();
    virtual ~TestPoint();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TestPoint members

    /// <summary>
    /// app
    /// </summary>

    std::string getApp() const;
    bool appIsSet() const;
    void unsetapp();
    void setApp(const std::string& value);

    /// <summary>
    /// 创建时间
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);

    /// <summary>
    /// 创建人名称
    /// </summary>

    std::string getCreatorName() const;
    bool creatorNameIsSet() const;
    void unsetcreatorName();
    void setCreatorName(const std::string& value);

    /// <summary>
    /// 创建人工号
    /// </summary>

    std::string getCreatorNum() const;
    bool creatorNumIsSet() const;
    void unsetcreatorNum();
    void setCreatorNum(const std::string& value);

    /// <summary>
    /// 删除时间
    /// </summary>

    std::string getDeleteTime() const;
    bool deleteTimeIsSet() const;
    void unsetdeleteTime();
    void setDeleteTime(const std::string& value);

    /// <summary>
    /// 逻辑删除字段
    /// </summary>

    std::string getDeleted() const;
    bool deletedIsSet() const;
    void unsetdeleted();
    void setDeleted(const std::string& value);

    /// <summary>
    /// 分组id
    /// </summary>

    std::string getGroupId() const;
    bool groupIdIsSet() const;
    void unsetgroupId();
    void setGroupId(const std::string& value);

    /// <summary>
    /// id 主键
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 脑图id
    /// </summary>

    std::string getMindmapId() const;
    bool mindmapIdIsSet() const;
    void unsetmindmapId();
    void setMindmapId(const std::string& value);

    /// <summary>
    /// 名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 节点id
    /// </summary>

    std::string getNodeId() const;
    bool nodeIdIsSet() const;
    void unsetnodeId();
    void setNodeId(const std::string& value);

    /// <summary>
    /// 需求id
    /// </summary>

    std::string getRequirementId() const;
    bool requirementIdIsSet() const;
    void unsetrequirementId();
    void setRequirementId(const std::string& value);

    /// <summary>
    /// 需求名称
    /// </summary>

    std::string getRequirementName() const;
    bool requirementNameIsSet() const;
    void unsetrequirementName();
    void setRequirementName(const std::string& value);

    /// <summary>
    /// 服务id
    /// </summary>

    std::string getServiceId() const;
    bool serviceIdIsSet() const;
    void unsetserviceId();
    void setServiceId(const std::string& value);

    /// <summary>
    /// 状态
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 状体类型
    /// </summary>

    std::string getStatusType() const;
    bool statusTypeIsSet() const;
    void unsetstatusType();
    void setStatusType(const std::string& value);

    /// <summary>
    /// tc数量
    /// </summary>

    std::string getTcCounts() const;
    bool tcCountsIsSet() const;
    void unsettcCounts();
    void setTcCounts(const std::string& value);

    /// <summary>
    /// 测试用例
    /// </summary>

    std::string getTestCases() const;
    bool testCasesIsSet() const;
    void unsettestCases();
    void setTestCases(const std::string& value);

    /// <summary>
    /// 更新人名称
    /// </summary>

    std::string getUpdateName() const;
    bool updateNameIsSet() const;
    void unsetupdateName();
    void setUpdateName(const std::string& value);

    /// <summary>
    /// 更新人工号
    /// </summary>

    std::string getUpdateNum() const;
    bool updateNumIsSet() const;
    void unsetupdateNum();
    void setUpdateNum(const std::string& value);

    /// <summary>
    /// 更新时间
    /// </summary>

    std::string getUpdateTime() const;
    bool updateTimeIsSet() const;
    void unsetupdateTime();
    void setUpdateTime(const std::string& value);

    /// <summary>
    /// 版本
    /// </summary>

    std::string getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(const std::string& value);


protected:
    std::string app_;
    bool appIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;
    std::string creatorName_;
    bool creatorNameIsSet_;
    std::string creatorNum_;
    bool creatorNumIsSet_;
    std::string deleteTime_;
    bool deleteTimeIsSet_;
    std::string deleted_;
    bool deletedIsSet_;
    std::string groupId_;
    bool groupIdIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string mindmapId_;
    bool mindmapIdIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string nodeId_;
    bool nodeIdIsSet_;
    std::string requirementId_;
    bool requirementIdIsSet_;
    std::string requirementName_;
    bool requirementNameIsSet_;
    std::string serviceId_;
    bool serviceIdIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string statusType_;
    bool statusTypeIsSet_;
    std::string tcCounts_;
    bool tcCountsIsSet_;
    std::string testCases_;
    bool testCasesIsSet_;
    std::string updateName_;
    bool updateNameIsSet_;
    std::string updateNum_;
    bool updateNumIsSet_;
    std::string updateTime_;
    bool updateTimeIsSet_;
    std::string version_;
    bool versionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TestPoint_H_
