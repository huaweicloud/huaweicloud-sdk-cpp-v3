
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_AddRdsNoAgentDatabaseRequest_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_AddRdsNoAgentDatabaseRequest_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/dbss/v1/model/RdsNoAgentDbRequest.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  AddRdsNoAgentDatabaseRequest
    : public ModelBase
{
public:
    AddRdsNoAgentDatabaseRequest();
    virtual ~AddRdsNoAgentDatabaseRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AddRdsNoAgentDatabaseRequest members

    /// <summary>
    /// 实例ID
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    RdsNoAgentDbRequest getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const RdsNoAgentDbRequest& value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;
    RdsNoAgentDbRequest body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    AddRdsNoAgentDatabaseRequest& dereference_from_shared_ptr(std::shared_ptr<AddRdsNoAgentDatabaseRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_AddRdsNoAgentDatabaseRequest_H_
