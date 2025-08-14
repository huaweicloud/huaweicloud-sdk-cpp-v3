
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_CreateAliasReqBody_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_CreateAliasReqBody_H_


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
/// 
/// </summary>
class HUAWEICLOUD_IDENTITYCENTER_V1_EXPORT  CreateAliasReqBody
    : public ModelBase
{
public:
    CreateAliasReqBody();
    virtual ~CreateAliasReqBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateAliasReqBody members

    /// <summary>
    /// 用户自定义的身份源ID对应的别名
    /// </summary>

    std::string getAlias() const;
    bool aliasIsSet() const;
    void unsetalias();
    void setAlias(const std::string& value);


protected:
    std::string alias_;
    bool aliasIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_CreateAliasReqBody_H_
