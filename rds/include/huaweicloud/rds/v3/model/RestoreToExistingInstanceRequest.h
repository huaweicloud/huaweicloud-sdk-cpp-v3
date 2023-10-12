
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_RestoreToExistingInstanceRequest_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_RestoreToExistingInstanceRequest_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/rds/v3/model/RestoreToExistingInstanceRequestBody.h>

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
class HUAWEICLOUD_RDS_V3_EXPORT  RestoreToExistingInstanceRequest
    : public ModelBase
{
public:
    RestoreToExistingInstanceRequest();
    virtual ~RestoreToExistingInstanceRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RestoreToExistingInstanceRequest members

    /// <summary>
    /// 语言
    /// </summary>

    std::string getXLanguage() const;
    bool xLanguageIsSet() const;
    void unsetxLanguage();
    void setXLanguage(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    RestoreToExistingInstanceRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const RestoreToExistingInstanceRequestBody& value);


protected:
    std::string xLanguage_;
    bool xLanguageIsSet_;
    RestoreToExistingInstanceRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    RestoreToExistingInstanceRequest& dereference_from_shared_ptr(std::shared_ptr<RestoreToExistingInstanceRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_RestoreToExistingInstanceRequest_H_
