
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ListPublicationsResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ListPublicationsResponse_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/QueryPublicationInfo.h>
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
class HUAWEICLOUD_RDS_V3_EXPORT  ListPublicationsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListPublicationsResponse();
    virtual ~ListPublicationsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListPublicationsResponse members

    /// <summary>
    /// 实例发布列表。
    /// </summary>

    std::vector<QueryPublicationInfo>& getPublications();
    bool publicationsIsSet() const;
    void unsetpublications();
    void setPublications(const std::vector<QueryPublicationInfo>& value);

    /// <summary>
    /// 实例发布数。
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);


protected:
    std::vector<QueryPublicationInfo> publications_;
    bool publicationsIsSet_;
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

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ListPublicationsResponse_H_
