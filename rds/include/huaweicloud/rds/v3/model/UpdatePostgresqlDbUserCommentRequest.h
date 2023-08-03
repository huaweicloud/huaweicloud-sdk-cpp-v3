
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_UpdatePostgresqlDbUserCommentRequest_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_UpdatePostgresqlDbUserCommentRequest_H_

#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/UpdateDbUserReq.h>
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
class HUAWEICLOUD_RDS_V3_EXPORT  UpdatePostgresqlDbUserCommentRequest
    : public ModelBase
{
public:
    UpdatePostgresqlDbUserCommentRequest();
    virtual ~UpdatePostgresqlDbUserCommentRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// UpdatePostgresqlDbUserCommentRequest members

    /// <summary>
    /// 实例ID。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 数据库用户名。
    /// </summary>

    std::string getUserName() const;
    bool userNameIsSet() const;
    void unsetuserName();
    void setUserName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UpdateDbUserReq getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const UpdateDbUserReq& value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string userName_;
    bool userNameIsSet_;
    UpdateDbUserReq body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdatePostgresqlDbUserCommentRequest& dereference_from_shared_ptr(std::shared_ptr<UpdatePostgresqlDbUserCommentRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_UpdatePostgresqlDbUserCommentRequest_H_
