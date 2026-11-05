
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_CreateSupabaseApplicationResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_CreateSupabaseApplicationResponse_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  CreateSupabaseApplicationResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateSupabaseApplicationResponse();
    virtual ~CreateSupabaseApplicationResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateSupabaseApplicationResponse members

    /// <summary>
    /// 订单ID（包周期时返回）。
    /// </summary>

    std::string getOrderId() const;
    bool orderIdIsSet() const;
    void unsetorderId();
    void setOrderId(const std::string& value);

    /// <summary>
    /// 应用创建任务ID。
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// Supabase应用ID。
    /// </summary>

    std::string getApplicationId() const;
    bool applicationIdIsSet() const;
    void unsetapplicationId();
    void setApplicationId(const std::string& value);

    /// <summary>
    /// 数据库实例ID。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 实例创建任务ID。
    /// </summary>

    std::string getInstanceJobId() const;
    bool instanceJobIdIsSet() const;
    void unsetinstanceJobId();
    void setInstanceJobId(const std::string& value);


protected:
    std::string orderId_;
    bool orderIdIsSet_;
    std::string jobId_;
    bool jobIdIsSet_;
    std::string applicationId_;
    bool applicationIdIsSet_;
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string instanceJobId_;
    bool instanceJobIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_CreateSupabaseApplicationResponse_H_
