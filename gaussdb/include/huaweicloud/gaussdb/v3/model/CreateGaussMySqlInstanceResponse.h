
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CreateGaussMySqlInstanceResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CreateGaussMySqlInstanceResponse_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/gaussdb/v3/model/MysqlInstanceResponse.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  CreateGaussMySqlInstanceResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateGaussMySqlInstanceResponse();
    virtual ~CreateGaussMySqlInstanceResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateGaussMySqlInstanceResponse members

    /// <summary>
    /// 
    /// </summary>

    MysqlInstanceResponse getInstance() const;
    bool instanceIsSet() const;
    void unsetinstance();
    void setInstance(const MysqlInstanceResponse& value);

    /// <summary>
    /// 实例创建的任务ID。  仅创建按需实例时会返回该参数。
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
    MysqlInstanceResponse instance_;
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

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CreateGaussMySqlInstanceResponse_H_
