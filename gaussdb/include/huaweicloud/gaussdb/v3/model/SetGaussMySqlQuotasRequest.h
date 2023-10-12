
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_SetGaussMySqlQuotasRequest_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_SetGaussMySqlQuotasRequest_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/gaussdb/v3/model/SetQuotasRequestBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  SetGaussMySqlQuotasRequest
    : public ModelBase
{
public:
    SetGaussMySqlQuotasRequest();
    virtual ~SetGaussMySqlQuotasRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SetGaussMySqlQuotasRequest members

    /// <summary>
    /// 语言。
    /// </summary>

    std::string getXLanguage() const;
    bool xLanguageIsSet() const;
    void unsetxLanguage();
    void setXLanguage(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    SetQuotasRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const SetQuotasRequestBody& value);


protected:
    std::string xLanguage_;
    bool xLanguageIsSet_;
    SetQuotasRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    SetGaussMySqlQuotasRequest& dereference_from_shared_ptr(std::shared_ptr<SetGaussMySqlQuotasRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_SetGaussMySqlQuotasRequest_H_
