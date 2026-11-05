
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ListSupabaseApplicationApiKeysResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ListSupabaseApplicationApiKeysResponse_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/SupabaseApplicationApiKeyRecord.h>
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
class HUAWEICLOUD_RDS_V3_EXPORT  ListSupabaseApplicationApiKeysResponse
    : public ModelBase, public HttpResponse
{
public:
    ListSupabaseApplicationApiKeysResponse();
    virtual ~ListSupabaseApplicationApiKeysResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListSupabaseApplicationApiKeysResponse members

    /// <summary>
    /// 
    /// </summary>

    int64_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int64_t value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<SupabaseApplicationApiKeyRecord>& getData();
    bool dataIsSet() const;
    void unsetdata();
    void setData(const std::vector<SupabaseApplicationApiKeyRecord>& value);


protected:
    int64_t totalCount_;
    bool totalCountIsSet_;
    std::vector<SupabaseApplicationApiKeyRecord> data_;
    bool dataIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ListSupabaseApplicationApiKeysResponse_H_
