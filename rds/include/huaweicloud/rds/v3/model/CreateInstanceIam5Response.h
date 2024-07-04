
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_CreateInstanceIam5Response_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_CreateInstanceIam5Response_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/CreateInstanceRespItem.h>
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
class HUAWEICLOUD_RDS_V3_EXPORT  CreateInstanceIam5Response
    : public ModelBase, public HttpResponse
{
public:
    CreateInstanceIam5Response();
    virtual ~CreateInstanceIam5Response();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateInstanceIam5Response members

    /// <summary>
    /// 
    /// </summary>

    CreateInstanceRespItem getInstance() const;
    bool instanceIsSet() const;
    void unsetinstance();
    void setInstance(const CreateInstanceRespItem& value);

    /// <summary>
    /// 实例创建的任务id。  仅创建按需实例时会返回该参数。
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// 订单号，创建包年包月时返回该参数。
    /// </summary>

    std::string getOrderId() const;
    bool orderIdIsSet() const;
    void unsetorderId();
    void setOrderId(const std::string& value);


protected:
    CreateInstanceRespItem instance_;
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

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_CreateInstanceIam5Response_H_
