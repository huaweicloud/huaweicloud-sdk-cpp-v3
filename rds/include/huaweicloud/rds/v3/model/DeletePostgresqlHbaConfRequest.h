
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_DeletePostgresqlHbaConfRequest_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_DeletePostgresqlHbaConfRequest_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/rds/v3/model/PostgresqlHbaConf.h>
#include <vector>

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
class HUAWEICLOUD_RDS_V3_EXPORT  DeletePostgresqlHbaConfRequest
    : public ModelBase
{
public:
    DeletePostgresqlHbaConfRequest();
    virtual ~DeletePostgresqlHbaConfRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeletePostgresqlHbaConfRequest members

    /// <summary>
    /// 实例id
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<PostgresqlHbaConf>& getBody();
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const std::vector<PostgresqlHbaConf>& value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::vector<PostgresqlHbaConf> body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DeletePostgresqlHbaConfRequest& dereference_from_shared_ptr(std::shared_ptr<DeletePostgresqlHbaConfRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_DeletePostgresqlHbaConfRequest_H_
