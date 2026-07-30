
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_DeleteInferApiKeyResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_DeleteInferApiKeyResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/modelarts/v1/model/ServiceIdName.h>
#include <vector>

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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  DeleteInferApiKeyResponse
    : public ModelBase, public HttpResponse
{
public:
    DeleteInferApiKeyResponse();
    virtual ~DeleteInferApiKeyResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteInferApiKeyResponse members

    /// <summary>
    /// **参数解释：** api-key的ID，在[创建API_KEY](CreateInferApiKey.xml)时即可在返回体中获取，也可通过[查询api-keys列表](ListInferApiKeys.xml)获取当前用户拥有的api-key，其中id字段即为api-key的ID。 **取值范围：** UUID格式。
    /// </summary>

    std::string getKeyId() const;
    bool keyIdIsSet() const;
    void unsetkeyId();
    void setKeyId(const std::string& value);

    /// <summary>
    /// **参数解释：** api-key的名称，在[创建API_KEY](CreateInferApiKey.xml)时自定义。 **取值范围：** 支持1-64个字符，可以包含字母、汉字、数字、连字符和下划线。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释：** api-key的描述，在[创建API_KEY](CreateInferApiKey.xml)时自定义。 **取值范围：** 支持1-256个字符，可以包含字母、汉字、数字、连字符和下划线。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// **参数解释：** api-key的创建时间，根据创建时的当前时间自动生成。 **取值范围：** 毫秒级时间戳，13位数字，如1609459200000。
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);

    /// <summary>
    /// **参数解释：** api-key生效范围。 **取值范围：** - USER：表示生效范围为用户级别，可以访问该用户创建的所有在线服务。 - SERVICE：表示生效范围为单个服务，可以访问绑定该api-key的在线服务。
    /// </summary>

    std::string getScope() const;
    bool scopeIsSet() const;
    void unsetscope();
    void setScope(const std::string& value);

    /// <summary>
    /// **参数解释：** 用户domain ID。获取方法请参见[获取账号名和账号ID](modelarts_03_0148.xml)。 **取值范围：** 账号ID。
    /// </summary>

    std::string getDomainId() const;
    bool domainIdIsSet() const;
    void unsetdomainId();
    void setDomainId(const std::string& value);

    /// <summary>
    /// **参数解释：** [用户项目ID](tag:hws,hws_hk,fcs,fcs_super)[资源空间ID](tag:hcs,hcs_sm)。获取方法请参见[[获取项目ID和名称](tag:hws,hws_hk,fcs,fcs_super)[获取资源空间ID和名称](tag:hcs,hcs_sm)](modelarts_03_0147.xml)。 **取值范围：** 账号的项目ID。
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// **参数解释：** 绑定此api-key的在线服务列表。
    /// </summary>

    std::vector<ServiceIdName>& getServices();
    bool servicesIsSet() const;
    void unsetservices();
    void setServices(const std::vector<ServiceIdName>& value);

    /// <summary>
    /// **参数解释：** 工作空间ID。 **取值范围：** 工作空间ID。
    /// </summary>

    std::string getWorkspaceId() const;
    bool workspaceIdIsSet() const;
    void unsetworkspaceId();
    void setWorkspaceId(const std::string& value);


protected:
    std::string keyId_;
    bool keyIdIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;
    std::string scope_;
    bool scopeIsSet_;
    std::string domainId_;
    bool domainIdIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    std::vector<ServiceIdName> services_;
    bool servicesIsSet_;
    std::string workspaceId_;
    bool workspaceIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_DeleteInferApiKeyResponse_H_
