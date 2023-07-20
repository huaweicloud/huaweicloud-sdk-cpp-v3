
#ifndef HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ShowRestorableListResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ShowRestorableListResponse_H_

#include <huaweicloud/gaussdbfornosql/v3/GaussDBforNoSQLExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdbfornosql/v3/model/QueryRestoreList.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDBFORNOSQL_V3_EXPORT  ShowRestorableListResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowRestorableListResponse();
    virtual ~ShowRestorableListResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowRestorableListResponse members

    /// <summary>
    /// 可恢复的实例总数
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);

    /// <summary>
    /// 可恢复的实例信息
    /// </summary>

    std::vector<QueryRestoreList>& getRestorableInstances();
    bool restorableInstancesIsSet() const;
    void unsetrestorableInstances();
    void setRestorableInstances(const std::vector<QueryRestoreList>& value);


protected:
    int32_t totalCount_;
    bool totalCountIsSet_;
    std::vector<QueryRestoreList> restorableInstances_;
    bool restorableInstancesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ShowRestorableListResponse_H_
