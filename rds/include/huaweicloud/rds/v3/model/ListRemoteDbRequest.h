
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ListRemoteDbRequest_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ListRemoteDbRequest_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/ListRemoteDbRequestBody.h>
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
class HUAWEICLOUD_RDS_V3_EXPORT  ListRemoteDbRequest
    : public ModelBase
{
public:
    ListRemoteDbRequest();
    virtual ~ListRemoteDbRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListRemoteDbRequest members

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

    ListRemoteDbRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const ListRemoteDbRequestBody& value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;
    ListRemoteDbRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListRemoteDbRequest& dereference_from_shared_ptr(std::shared_ptr<ListRemoteDbRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ListRemoteDbRequest_H_
