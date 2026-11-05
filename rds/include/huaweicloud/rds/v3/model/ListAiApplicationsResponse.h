
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ListAiApplicationsResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ListAiApplicationsResponse_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/AIApplicationListItem.h>
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
class HUAWEICLOUD_RDS_V3_EXPORT  ListAiApplicationsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListAiApplicationsResponse();
    virtual ~ListAiApplicationsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListAiApplicationsResponse members

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

    std::vector<AIApplicationListItem>& getData();
    bool dataIsSet() const;
    void unsetdata();
    void setData(const std::vector<AIApplicationListItem>& value);


protected:
    int64_t totalCount_;
    bool totalCountIsSet_;
    std::vector<AIApplicationListItem> data_;
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

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ListAiApplicationsResponse_H_
