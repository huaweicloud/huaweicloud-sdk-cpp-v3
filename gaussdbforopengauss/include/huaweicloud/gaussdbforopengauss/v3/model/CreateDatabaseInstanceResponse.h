
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_CreateDatabaseInstanceResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_CreateDatabaseInstanceResponse_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdbforopengauss/v3/model/CreateDatabaseInstanceResult.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  CreateDatabaseInstanceResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateDatabaseInstanceResponse();
    virtual ~CreateDatabaseInstanceResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateDatabaseInstanceResponse members

    /// <summary>
    /// 
    /// </summary>

    CreateDatabaseInstanceResult getInstance() const;
    bool instanceIsSet() const;
    void unsetinstance();
    void setInstance(const CreateDatabaseInstanceResult& value);

    /// <summary>
    /// 实例创建的任务id。  仅创建按需实例时会返回该参数。
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// 创建实例的订单ID。  仅创建包周期实例时会返回该参数。
    /// </summary>

    std::string getOrderId() const;
    bool orderIdIsSet() const;
    void unsetorderId();
    void setOrderId(const std::string& value);


protected:
    CreateDatabaseInstanceResult instance_;
    bool instanceIsSet_;
    std::string jobId_;
    bool jobIdIsSet_;
    std::string orderId_;
    bool orderIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_CreateDatabaseInstanceResponse_H_
