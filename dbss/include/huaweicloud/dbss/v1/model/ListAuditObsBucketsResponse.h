
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_ListAuditObsBucketsResponse_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_ListAuditObsBucketsResponse_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/dbss/v1/model/ObsBucketObject.h>

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
class HUAWEICLOUD_DBSS_V1_EXPORT  ListAuditObsBucketsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListAuditObsBucketsResponse();
    virtual ~ListAuditObsBucketsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListAuditObsBucketsResponse members

    /// <summary>
    /// OBS桶列表
    /// </summary>

    std::vector<ObsBucketObject>& getObsList();
    bool obsListIsSet() const;
    void unsetobsList();
    void setObsList(const std::vector<ObsBucketObject>& value);


protected:
    std::vector<ObsBucketObject> obsList_;
    bool obsListIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_ListAuditObsBucketsResponse_H_
