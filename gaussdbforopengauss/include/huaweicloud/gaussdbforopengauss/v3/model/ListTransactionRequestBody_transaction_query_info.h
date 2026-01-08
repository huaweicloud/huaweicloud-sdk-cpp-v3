
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListTransactionRequestBody_transaction_query_info_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListTransactionRequestBody_transaction_query_info_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**: 查询事务筛选条件。 **约束限制**: 不涉及。
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  ListTransactionRequestBody_transaction_query_info
    : public ModelBase
{
public:
    ListTransactionRequestBody_transaction_query_info();
    virtual ~ListTransactionRequestBody_transaction_query_info();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListTransactionRequestBody_transaction_query_info members

    /// <summary>
    /// **参数解释**: 事务执行时长，单位：秒。 **约束限制**: 不涉及。 **取值范围**: 非负整数。 **默认取值**: 0
    /// </summary>

    std::string getExecTime() const;
    bool execTimeIsSet() const;
    void unsetexecTime();
    void setExecTime(const std::string& value);

    /// <summary>
    /// **参数解释**: 事务xlog日志大小：单位byte。 **约束限制**: 不涉及。 **取值范围**: 非负整数。 **默认取值**: 0
    /// </summary>

    std::string getXlogQuantity() const;
    bool xlogQuantityIsSet() const;
    void unsetxlogQuantity();
    void setXlogQuantity(const std::string& value);

    /// <summary>
    /// **参数解释**: 数据库名。 **约束限制**: 不涉及。
    /// </summary>

    std::vector<std::string>& getDatnames();
    bool datnamesIsSet() const;
    void unsetdatnames();
    void setDatnames(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释**: 用户名。 **约束限制**: 不涉及。
    /// </summary>

    std::vector<std::string>& getUsenames();
    bool usenamesIsSet() const;
    void unsetusenames();
    void setUsenames(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释**: 用户发起事务请求的客户端地址。 **约束限制**: 不涉及。
    /// </summary>

    std::vector<std::string>& getClientAddrs();
    bool clientAddrsIsSet() const;
    void unsetclientAddrs();
    void setClientAddrs(const std::vector<std::string>& value);


protected:
    std::string execTime_;
    bool execTimeIsSet_;
    std::string xlogQuantity_;
    bool xlogQuantityIsSet_;
    std::vector<std::string> datnames_;
    bool datnamesIsSet_;
    std::vector<std::string> usenames_;
    bool usenamesIsSet_;
    std::vector<std::string> clientAddrs_;
    bool clientAddrsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListTransactionRequestBody_transaction_query_info_H_
