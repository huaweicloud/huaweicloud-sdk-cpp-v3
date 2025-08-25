
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_NodeTemplate_login_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_NodeTemplate_login_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/NodeTemplate_login_userPassword.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  NodeTemplate_login
    : public ModelBase
{
public:
    NodeTemplate_login();
    virtual ~NodeTemplate_login();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NodeTemplate_login members

    /// <summary>
    /// 
    /// </summary>

    std::string getSshKey() const;
    bool sshKeyIsSet() const;
    void unsetsshKey();
    void setSshKey(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    NodeTemplate_login_userPassword getUserPassword() const;
    bool userPasswordIsSet() const;
    void unsetuserPassword();
    void setUserPassword(const NodeTemplate_login_userPassword& value);


protected:
    std::string sshKey_;
    bool sshKeyIsSet_;
    NodeTemplate_login_userPassword userPassword_;
    bool userPasswordIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_NodeTemplate_login_H_
