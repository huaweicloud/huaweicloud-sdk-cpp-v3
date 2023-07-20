
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_MigrateAzRequest_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_MigrateAzRequest_H_

#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/dds/v3/model/MigrateAzRequestBody.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  MigrateAzRequest
    : public ModelBase
{
public:
    MigrateAzRequest();
    virtual ~MigrateAzRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// MigrateAzRequest members

    /// <summary>
    /// 实例ID。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    MigrateAzRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const MigrateAzRequestBody& value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;
    MigrateAzRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    MigrateAzRequest& dereference_from_shared_ptr(std::shared_ptr<MigrateAzRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_MigrateAzRequest_H_
