
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_CreateSupabaseApplicationRequest_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_CreateSupabaseApplicationRequest_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/rds/v3/model/CreateSupabaseApplicationRequestBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  CreateSupabaseApplicationRequest
    : public ModelBase
{
public:
    CreateSupabaseApplicationRequest();
    virtual ~CreateSupabaseApplicationRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateSupabaseApplicationRequest members

    /// <summary>
    /// 语言
    /// </summary>

    std::string getXLanguage() const;
    bool xLanguageIsSet() const;
    void unsetxLanguage();
    void setXLanguage(const std::string& value);

    /// <summary>
    /// 保证客户端请求幂等性的标识。32位UUID格式，72小时内唯一。
    /// </summary>

    std::string getXClientToken() const;
    bool xClientTokenIsSet() const;
    void unsetxClientToken();
    void setXClientToken(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    CreateSupabaseApplicationRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CreateSupabaseApplicationRequestBody& value);


protected:
    std::string xLanguage_;
    bool xLanguageIsSet_;
    std::string xClientToken_;
    bool xClientTokenIsSet_;
    CreateSupabaseApplicationRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateSupabaseApplicationRequest& dereference_from_shared_ptr(std::shared_ptr<CreateSupabaseApplicationRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_CreateSupabaseApplicationRequest_H_
