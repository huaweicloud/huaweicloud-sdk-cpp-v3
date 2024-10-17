
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_ListAuditSqlsResponse_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_ListAuditSqlsResponse_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/dbss/v1/model/AuditSqlResponse_sqls.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  ListAuditSqlsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListAuditSqlsResponse();
    virtual ~ListAuditSqlsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListAuditSqlsResponse members

    /// <summary>
    /// 总数
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);

    /// <summary>
    /// 总数
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);

    /// <summary>
    /// sql语句列表
    /// </summary>

    std::vector<AuditSqlResponse_sqls>& getSqls();
    bool sqlsIsSet() const;
    void unsetsqls();
    void setSqls(const std::vector<AuditSqlResponse_sqls>& value);


protected:
    int32_t total_;
    bool totalIsSet_;
    int32_t count_;
    bool countIsSet_;
    std::vector<AuditSqlResponse_sqls> sqls_;
    bool sqlsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_ListAuditSqlsResponse_H_
