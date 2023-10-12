
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_SetDatabaseUserPrivilegeRequest_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_SetDatabaseUserPrivilegeRequest_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/rds/v3/model/SetDatabaseUserPrivilegeReqV3.h>

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
class HUAWEICLOUD_RDS_V3_EXPORT  SetDatabaseUserPrivilegeRequest
    : public ModelBase
{
public:
    SetDatabaseUserPrivilegeRequest();
    virtual ~SetDatabaseUserPrivilegeRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SetDatabaseUserPrivilegeRequest members

    /// <summary>
    /// 实例ID
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

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

    SetDatabaseUserPrivilegeReqV3 getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const SetDatabaseUserPrivilegeReqV3& value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string xLanguage_;
    bool xLanguageIsSet_;
    SetDatabaseUserPrivilegeReqV3 body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    SetDatabaseUserPrivilegeRequest& dereference_from_shared_ptr(std::shared_ptr<SetDatabaseUserPrivilegeRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_SetDatabaseUserPrivilegeRequest_H_
