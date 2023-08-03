
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_CreateInstanceRequest_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_CreateInstanceRequest_H_

#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/InstanceRequest.h>
#include <string>

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
class HUAWEICLOUD_RDS_V3_EXPORT  CreateInstanceRequest
    : public ModelBase
{
public:
    CreateInstanceRequest();
    virtual ~CreateInstanceRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateInstanceRequest members

    /// <summary>
    /// 语言
    /// </summary>

    std::string getXLanguage() const;
    bool xLanguageIsSet() const;
    void unsetxLanguage();
    void setXLanguage(const std::string& value);

    /// <summary>
    /// 保证客户端请求幂等性的标识。 该标识为32位UUID格式，由客户端生成，且需确保72小时内不同请求之间该标识具有唯一性。
    /// </summary>

    std::string getXClientToken() const;
    bool xClientTokenIsSet() const;
    void unsetxClientToken();
    void setXClientToken(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    InstanceRequest getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const InstanceRequest& value);


protected:
    std::string xLanguage_;
    bool xLanguageIsSet_;
    std::string xClientToken_;
    bool xClientTokenIsSet_;
    InstanceRequest body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateInstanceRequest& dereference_from_shared_ptr(std::shared_ptr<CreateInstanceRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_CreateInstanceRequest_H_
