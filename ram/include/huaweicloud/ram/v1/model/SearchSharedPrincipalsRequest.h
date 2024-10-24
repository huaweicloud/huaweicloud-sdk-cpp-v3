
#ifndef HUAWEICLOUD_SDK_RAM_V1_MODEL_SearchSharedPrincipalsRequest_H_
#define HUAWEICLOUD_SDK_RAM_V1_MODEL_SearchSharedPrincipalsRequest_H_


#include <huaweicloud/ram/v1/RamExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ram/v1/model/SearchSharedPrincipalsReqBody.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Ram {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_RAM_V1_EXPORT  SearchSharedPrincipalsRequest
    : public ModelBase
{
public:
    SearchSharedPrincipalsRequest();
    virtual ~SearchSharedPrincipalsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SearchSharedPrincipalsRequest members

    /// <summary>
    /// 如果正在使用临时安全凭据，则此header是必需的，该值是临时安全凭据的安全令牌（会话令牌）。
    /// </summary>

    std::string getXSecurityToken() const;
    bool xSecurityTokenIsSet() const;
    void unsetxSecurityToken();
    void setXSecurityToken(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    SearchSharedPrincipalsReqBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const SearchSharedPrincipalsReqBody& value);


protected:
    std::string xSecurityToken_;
    bool xSecurityTokenIsSet_;
    SearchSharedPrincipalsReqBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    SearchSharedPrincipalsRequest& dereference_from_shared_ptr(std::shared_ptr<SearchSharedPrincipalsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RAM_V1_MODEL_SearchSharedPrincipalsRequest_H_
