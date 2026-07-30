
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_InferDeploymentVersionItemResp_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_InferDeploymentVersionItemResp_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <cpprest/details/basic_types.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 部署版本概要信息
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  InferDeploymentVersionItemResp
    : public ModelBase
{
public:
    InferDeploymentVersionItemResp();
    virtual ~InferDeploymentVersionItemResp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// InferDeploymentVersionItemResp members

    /// <summary>
    /// **参数解释：** 部署id。 **取值范围：** 不涉及。
    /// </summary>

    std::string getInferName() const;
    bool inferNameIsSet() const;
    void unsetinferName();
    void setInferName(const std::string& value);

    /// <summary>
    /// **参数解释：** 部署版本 **取值范围：** 不涉及。
    /// </summary>

    std::string getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(const std::string& value);

    /// <summary>
    /// **参数解释：** 版本状态 **取值范围：** 不涉及。
    /// </summary>

    std::string getVersionStatus() const;
    bool versionStatusIsSet() const;
    void unsetversionStatus();
    void setVersionStatus(const std::string& value);

    /// <summary>
    /// **参数解释：** 版本描述 **取值范围：** 不涉及。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// **参数解释：** 创建时间 **取值范围：** 不涉及。
    /// </summary>

    utility::datetime getCreateAt() const;
    bool createAtIsSet() const;
    void unsetcreateAt();
    void setCreateAt(const utility::datetime& value);

    /// <summary>
    /// **参数解释：** 更新时间 **取值范围：** 不涉及。
    /// </summary>

    utility::datetime getUpdateAt() const;
    bool updateAtIsSet() const;
    void unsetupdateAt();
    void setUpdateAt(const utility::datetime& value);

    /// <summary>
    /// **参数解释：** 部署类型。 **取值范围：** - SINGLE：单机单卡。 - MULTI：多机多卡。
    /// </summary>

    std::string getDeployType() const;
    bool deployTypeIsSet() const;
    void unsetdeployType();
    void setDeployType(const std::string& value);


protected:
    std::string inferName_;
    bool inferNameIsSet_;
    std::string version_;
    bool versionIsSet_;
    std::string versionStatus_;
    bool versionStatusIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    utility::datetime createAt_;
    bool createAtIsSet_;
    utility::datetime updateAt_;
    bool updateAtIsSet_;
    std::string deployType_;
    bool deployTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_InferDeploymentVersionItemResp_H_
