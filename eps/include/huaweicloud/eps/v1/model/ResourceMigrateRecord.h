
#ifndef HUAWEICLOUD_SDK_EPS_V1_MODEL_ResourceMigrateRecord_H_
#define HUAWEICLOUD_SDK_EPS_V1_MODEL_ResourceMigrateRecord_H_


#include <huaweicloud/eps/v1/EpsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Eps {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_EPS_V1_EXPORT  ResourceMigrateRecord
    : public ModelBase
{
public:
    ResourceMigrateRecord();
    virtual ~ResourceMigrateRecord();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ResourceMigrateRecord members

    /// <summary>
    /// 是否关联迁移
    /// </summary>

    bool isAssociated() const;
    bool associatedIsSet() const;
    void unsetassociated();
    void setAssociated(bool value);

    /// <summary>
    /// 响应码
    /// </summary>

    std::string getCode() const;
    bool codeIsSet() const;
    void unsetcode();
    void setCode(const std::string& value);

    /// <summary>
    /// 响应信息
    /// </summary>

    std::string getMessage() const;
    bool messageIsSet() const;
    void unsetmessage();
    void setMessage(const std::string& value);

    /// <summary>
    /// 项目ID
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 项目名称
    /// </summary>

    std::string getProjectName() const;
    bool projectNameIsSet() const;
    void unsetprojectName();
    void setProjectName(const std::string& value);

    /// <summary>
    /// 区域ID
    /// </summary>

    std::string getRegionId() const;
    bool regionIdIsSet() const;
    void unsetregionId();
    void setRegionId(const std::string& value);

    /// <summary>
    /// 事件时间
    /// </summary>

    std::string getEventTime() const;
    bool eventTimeIsSet() const;
    void unseteventTime();
    void setEventTime(const std::string& value);

    /// <summary>
    /// 用户名
    /// </summary>

    std::string getUserName() const;
    bool userNameIsSet() const;
    void unsetuserName();
    void setUserName(const std::string& value);

    /// <summary>
    /// 迁移类型
    /// </summary>

    std::string getOperateType() const;
    bool operateTypeIsSet() const;
    void unsetoperateType();
    void setOperateType(const std::string& value);

    /// <summary>
    /// 资源ID
    /// </summary>

    std::string getResourceId() const;
    bool resourceIdIsSet() const;
    void unsetresourceId();
    void setResourceId(const std::string& value);

    /// <summary>
    /// 资源名称
    /// </summary>

    std::string getResourceName() const;
    bool resourceNameIsSet() const;
    void unsetresourceName();
    void setResourceName(const std::string& value);

    /// <summary>
    /// 资源类型
    /// </summary>

    std::string getResourceType() const;
    bool resourceTypeIsSet() const;
    void unsetresourceType();
    void setResourceType(const std::string& value);

    /// <summary>
    /// 发起迁移的企业项目ID
    /// </summary>

    std::string getInitiateEpId() const;
    bool initiateEpIdIsSet() const;
    void unsetinitiateEpId();
    void setInitiateEpId(const std::string& value);

    /// <summary>
    /// 发起迁移的业项目名称
    /// </summary>

    std::string getInitiateEpName() const;
    bool initiateEpNameIsSet() const;
    void unsetinitiateEpName();
    void setInitiateEpName(const std::string& value);

    /// <summary>
    /// 源企业项目ID
    /// </summary>

    std::string getOriginEpId() const;
    bool originEpIdIsSet() const;
    void unsetoriginEpId();
    void setOriginEpId(const std::string& value);

    /// <summary>
    /// 源企业项目名称
    /// </summary>

    std::string getOriginEpName() const;
    bool originEpNameIsSet() const;
    void unsetoriginEpName();
    void setOriginEpName(const std::string& value);

    /// <summary>
    /// 目标企业项目ID
    /// </summary>

    std::string getTargetEpId() const;
    bool targetEpIdIsSet() const;
    void unsettargetEpId();
    void setTargetEpId(const std::string& value);

    /// <summary>
    /// 目标企业项目名称
    /// </summary>

    std::string getTargetEpName() const;
    bool targetEpNameIsSet() const;
    void unsettargetEpName();
    void setTargetEpName(const std::string& value);

    /// <summary>
    /// 是否存在失败
    /// </summary>

    std::string getExistFailed() const;
    bool existFailedIsSet() const;
    void unsetexistFailed();
    void setExistFailed(const std::string& value);


protected:
    bool associated_;
    bool associatedIsSet_;
    std::string code_;
    bool codeIsSet_;
    std::string message_;
    bool messageIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    std::string projectName_;
    bool projectNameIsSet_;
    std::string regionId_;
    bool regionIdIsSet_;
    std::string eventTime_;
    bool eventTimeIsSet_;
    std::string userName_;
    bool userNameIsSet_;
    std::string operateType_;
    bool operateTypeIsSet_;
    std::string resourceId_;
    bool resourceIdIsSet_;
    std::string resourceName_;
    bool resourceNameIsSet_;
    std::string resourceType_;
    bool resourceTypeIsSet_;
    std::string initiateEpId_;
    bool initiateEpIdIsSet_;
    std::string initiateEpName_;
    bool initiateEpNameIsSet_;
    std::string originEpId_;
    bool originEpIdIsSet_;
    std::string originEpName_;
    bool originEpNameIsSet_;
    std::string targetEpId_;
    bool targetEpIdIsSet_;
    std::string targetEpName_;
    bool targetEpNameIsSet_;
    std::string existFailed_;
    bool existFailedIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EPS_V1_MODEL_ResourceMigrateRecord_H_
