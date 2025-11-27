
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ListReplicationErrorsResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ListReplicationErrorsResponse_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/ListReplicationErrorsResult.h>
#include <vector>

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
class HUAWEICLOUD_RDS_V3_EXPORT  ListReplicationErrorsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListReplicationErrorsResponse();
    virtual ~ListReplicationErrorsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListReplicationErrorsResponse members

    /// <summary>
    /// 报错列表。
    /// </summary>

    std::vector<ListReplicationErrorsResult>& getErrors();
    bool errorsIsSet() const;
    void unseterrors();
    void setErrors(const std::vector<ListReplicationErrorsResult>& value);

    /// <summary>
    /// 报错总数。
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);


protected:
    std::vector<ListReplicationErrorsResult> errors_;
    bool errorsIsSet_;
    int32_t totalCount_;
    bool totalCountIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ListReplicationErrorsResponse_H_
