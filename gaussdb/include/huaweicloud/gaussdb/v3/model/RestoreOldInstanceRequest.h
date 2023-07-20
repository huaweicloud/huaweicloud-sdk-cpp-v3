
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_RestoreOldInstanceRequest_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_RestoreOldInstanceRequest_H_

#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/RestoreRequest.h>
#include <string>

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
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  RestoreOldInstanceRequest
    : public ModelBase
{
public:
    RestoreOldInstanceRequest();
    virtual ~RestoreOldInstanceRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// RestoreOldInstanceRequest members

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

    RestoreRequest getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const RestoreRequest& value);


protected:
    std::string xLanguage_;
    bool xLanguageIsSet_;
    RestoreRequest body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    RestoreOldInstanceRequest& dereference_from_shared_ptr(std::shared_ptr<RestoreOldInstanceRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_RestoreOldInstanceRequest_H_
