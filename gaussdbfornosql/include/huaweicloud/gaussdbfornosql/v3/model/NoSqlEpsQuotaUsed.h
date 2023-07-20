
#ifndef HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_NoSqlEpsQuotaUsed_H_
#define HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_NoSqlEpsQuotaUsed_H_

#include <huaweicloud/gaussdbfornosql/v3/GaussDBforNoSQLExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDBFORNOSQL_V3_EXPORT  NoSqlEpsQuotaUsed
    : public ModelBase
{
public:
    NoSqlEpsQuotaUsed();
    virtual ~NoSqlEpsQuotaUsed();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// NoSqlEpsQuotaUsed members

    /// <summary>
    /// 已使用实例配额。
    /// </summary>

    int32_t getInstance() const;
    bool instanceIsSet() const;
    void unsetinstance();
    void setInstance(int32_t value);

    /// <summary>
    /// 已使用vcpus配额。
    /// </summary>

    int32_t getVcpus() const;
    bool vcpusIsSet() const;
    void unsetvcpus();
    void setVcpus(int32_t value);

    /// <summary>
    /// 已使用ram配额。
    /// </summary>

    int32_t getRam() const;
    bool ramIsSet() const;
    void unsetram();
    void setRam(int32_t value);


protected:
    int32_t instance_;
    bool instanceIsSet_;
    int32_t vcpus_;
    bool vcpusIsSet_;
    int32_t ram_;
    bool ramIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_NoSqlEpsQuotaUsed_H_
