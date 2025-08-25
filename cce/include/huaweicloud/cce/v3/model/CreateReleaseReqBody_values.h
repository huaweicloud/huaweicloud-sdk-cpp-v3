
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_CreateReleaseReqBody_values_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_CreateReleaseReqBody_values_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 模板实例的值
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  CreateReleaseReqBody_values
    : public ModelBase
{
public:
    CreateReleaseReqBody_values();
    virtual ~CreateReleaseReqBody_values();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateReleaseReqBody_values members

    /// <summary>
    /// 镜像拉取策略
    /// </summary>

    std::string getImagePullPolicy() const;
    bool imagePullPolicyIsSet() const;
    void unsetimagePullPolicy();
    void setImagePullPolicy(const std::string& value);

    /// <summary>
    /// 镜像标签
    /// </summary>

    std::string getImageTag() const;
    bool imageTagIsSet() const;
    void unsetimageTag();
    void setImageTag(const std::string& value);


protected:
    std::string imagePullPolicy_;
    bool imagePullPolicyIsSet_;
    std::string imageTag_;
    bool imageTagIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_CreateReleaseReqBody_values_H_
