
#ifndef HUAWEICLOUD_SDK_KMS_V2_MODEL_ListAccessPointResponse_H_
#define HUAWEICLOUD_SDK_KMS_V2_MODEL_ListAccessPointResponse_H_


#include <huaweicloud/kms/v2/KmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/kms/v2/model/ListAccessPointResponseBody_access_points.h>
#include <huaweicloud/kms/v2/model/ListAccessPointResponseBody_page_info.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_KMS_V2_EXPORT  ListAccessPointResponse
    : public ModelBase, public HttpResponse
{
public:
    ListAccessPointResponse();
    virtual ~ListAccessPointResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListAccessPointResponse members

    /// <summary>
    /// 
    /// </summary>

    ListAccessPointResponseBody_page_info getPageInfo() const;
    bool pageInfoIsSet() const;
    void unsetpageInfo();
    void setPageInfo(const ListAccessPointResponseBody_page_info& value);

    /// <summary>
    /// **参数解释：** 接入点列表 **取值范围：** 不涉及
    /// </summary>

    std::vector<ListAccessPointResponseBody_access_points>& getAccessPoints();
    bool accessPointsIsSet() const;
    void unsetaccessPoints();
    void setAccessPoints(const std::vector<ListAccessPointResponseBody_access_points>& value);


protected:
    ListAccessPointResponseBody_page_info pageInfo_;
    bool pageInfoIsSet_;
    std::vector<ListAccessPointResponseBody_access_points> accessPoints_;
    bool accessPointsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KMS_V2_MODEL_ListAccessPointResponse_H_
