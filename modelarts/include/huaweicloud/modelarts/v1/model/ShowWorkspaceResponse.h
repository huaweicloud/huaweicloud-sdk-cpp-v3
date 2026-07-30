
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowWorkspaceResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowWorkspaceResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>
#include <huaweicloud/modelarts/v1/model/ViewWorkspaceResponse_grants.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ShowWorkspaceResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowWorkspaceResponse();
    virtual ~ShowWorkspaceResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowWorkspaceResponse members

    /// <summary>
    /// 授权用户列表。默认为空。需要与“auth_type”参数配合使用，且仅当授权类型为“INTERNAL”时才会生效。
    /// </summary>

    std::vector<ViewWorkspaceResponse_grants>& getGrants();
    bool grantsIsSet() const;
    void unsetgrants();
    void setGrants(const std::vector<ViewWorkspaceResponse_grants>& value);

    /// <summary>
    /// 创建者名称。
    /// </summary>

    std::string getOwner() const;
    bool ownerIsSet() const;
    void unsetowner();
    void setOwner(const std::string& value);

    /// <summary>
    /// 授权类型。可选值有PUBLIC、PRIVATE、INTERNAL。默认值为PUBLIC。 - PUBLIC：租户内部公开访问。 - PRIVATE：仅创建者和主账号可访问。 - INTERNAL：创建者、主账号、指定IAM子账号可访问，需要与grants参数配合使用。
    /// </summary>

    std::string getAuthType() const;
    bool authTypeIsSet() const;
    void unsetauthType();
    void setAuthType(const std::string& value);

    /// <summary>
    /// 企业项目ID。
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// 最后修改时间，UTC。
    /// </summary>

    int64_t getUpdateTime() const;
    bool updateTimeIsSet() const;
    void unsetupdateTime();
    void setUpdateTime(int64_t value);

    /// <summary>
    /// 创建时间，UTC。
    /// </summary>

    int64_t getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(int64_t value);

    /// <summary>
    /// 企业项目名称。
    /// </summary>

    std::string getEnterpriseProjectName() const;
    bool enterpriseProjectNameIsSet() const;
    void unsetenterpriseProjectName();
    void setEnterpriseProjectName(const std::string& value);

    /// <summary>
    /// 工作空间名称。长度限制为4-64字符[，支持中文、大小写字母、数字、中划线和下划线](tag:hc,hk)。同时&#39;default&#39;为系统预留的默认工作空间名称，用户无法自己创建名为&#39;default&#39;的工作空间。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 工作空间描述，默认为空。长度限制为0-256字符。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 工作空间ID，系统生成的32位UUID，不带橫线。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 工作空间状态。 - CREATE_FAILED：创建失败。 - NORMAL：状态正常。 - DELETING：正在删除。 - DELETE_FAILED：删除失败。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 状态描述，默认为空。该字段会补充显示状态的详细信息。如删除失败时，可通过该字段查看删除失败的原因。
    /// </summary>

    std::string getStatusInfo() const;
    bool statusInfoIsSet() const;
    void unsetstatusInfo();
    void setStatusInfo(const std::string& value);


protected:
    std::vector<ViewWorkspaceResponse_grants> grants_;
    bool grantsIsSet_;
    std::string owner_;
    bool ownerIsSet_;
    std::string authType_;
    bool authTypeIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    int64_t updateTime_;
    bool updateTimeIsSet_;
    int64_t createTime_;
    bool createTimeIsSet_;
    std::string enterpriseProjectName_;
    bool enterpriseProjectNameIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string statusInfo_;
    bool statusInfoIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowWorkspaceResponse_H_
