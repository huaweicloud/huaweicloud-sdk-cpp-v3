
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_CreateApplicationInstanceReqBody_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_CreateApplicationInstanceReqBody_H_


#include <huaweicloud/identitycenter/v1/IdentityCenterExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// CreateApplicationInstance的请求体
/// </summary>
class HUAWEICLOUD_IDENTITYCENTER_V1_EXPORT  CreateApplicationInstanceReqBody
    : public ModelBase
{
public:
    CreateApplicationInstanceReqBody();
    virtual ~CreateApplicationInstanceReqBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateApplicationInstanceReqBody members

    /// <summary>
    /// 应用程序实例UUID
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 应用程序模板Id
    /// </summary>

    std::string getTemplateId() const;
    bool templateIdIsSet() const;
    void unsettemplateId();
    void setTemplateId(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string templateId_;
    bool templateIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_CreateApplicationInstanceReqBody_H_
