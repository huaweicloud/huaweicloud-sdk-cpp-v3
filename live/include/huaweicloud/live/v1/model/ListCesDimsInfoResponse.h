
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_ListCesDimsInfoResponse_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_ListCesDimsInfoResponse_H_


#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/live/v1/model/CesQueryResp_query.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  ListCesDimsInfoResponse
    : public ModelBase, public HttpResponse
{
public:
    ListCesDimsInfoResponse();
    virtual ~ListCesDimsInfoResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListCesDimsInfoResponse members

    /// <summary>
    /// 
    /// </summary>

    CesQueryResp_query getQuery() const;
    bool queryIsSet() const;
    void unsetquery();
    void setQuery(const CesQueryResp_query& value);


protected:
    CesQueryResp_query query_;
    bool queryIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_ListCesDimsInfoResponse_H_
