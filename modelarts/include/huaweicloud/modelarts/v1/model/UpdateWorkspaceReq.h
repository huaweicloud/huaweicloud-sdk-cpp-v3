
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_UpdateWorkspaceReq_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_UpdateWorkspaceReq_H_


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
/// 
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  UpdateWorkspaceReq
    : public ModelBase
{
public:
    UpdateWorkspaceReq();
    virtual ~UpdateWorkspaceReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateWorkspaceReq members

    /// <summary>
    /// 训练作业使用的数据集。不可与data_url或dataset_id/dataset_version_id同时使用。
    /// </summary>

    std::vector<ViewWorkspaceResponse_grants>& getGrants();
    bool grantsIsSet() const;
    void unsetgrants();
    void setGrants(const std::vector<ViewWorkspaceResponse_grants>& value);

    /// <summary>
    /// 授权类型。可选值有PUBLIC、PRIVATE、INTERNAL。默认值为PUBLIC。 - PUBLIC：租户内部公开访问。 - PRIVATE：仅创建者和主账号可访问。 - INTERNAL：创建者、主账号、指定IAM子账号可访问，需要与grants参数配合使用。
    /// </summary>

    std::string getAuthType() const;
    bool authTypeIsSet() const;
    void unsetauthType();
    void setAuthType(const std::string& value);

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


protected:
    std::vector<ViewWorkspaceResponse_grants> grants_;
    bool grantsIsSet_;
    std::string authType_;
    bool authTypeIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_UpdateWorkspaceReq_H_
