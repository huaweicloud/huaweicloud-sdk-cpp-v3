
#ifndef HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_StopBackupRequest_H_
#define HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_StopBackupRequest_H_


#include <huaweicloud/gaussdbfornosql/v3/GaussDBforNoSQLExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/gaussdbfornosql/v3/model/StopBackupRequestBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_GAUSSDBFORNOSQL_V3_EXPORT  StopBackupRequest
    : public ModelBase
{
public:
    StopBackupRequest();
    virtual ~StopBackupRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// StopBackupRequest members

    /// <summary>
    /// 备份ID。
    /// </summary>

    std::string getBackupId() const;
    bool backupIdIsSet() const;
    void unsetbackupId();
    void setBackupId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    StopBackupRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const StopBackupRequestBody& value);


protected:
    std::string backupId_;
    bool backupIdIsSet_;
    StopBackupRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    StopBackupRequest& dereference_from_shared_ptr(std::shared_ptr<StopBackupRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_StopBackupRequest_H_
