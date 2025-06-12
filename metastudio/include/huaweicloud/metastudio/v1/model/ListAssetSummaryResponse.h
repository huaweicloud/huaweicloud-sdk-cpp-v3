
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ListAssetSummaryResponse_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ListAssetSummaryResponse_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/metastudio/v1/model/DigitalAssetSummary.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  ListAssetSummaryResponse
    : public ModelBase, public HttpResponse
{
public:
    ListAssetSummaryResponse();
    virtual ~ListAssetSummaryResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListAssetSummaryResponse members

    /// <summary>
    /// 资产列表。
    /// </summary>

    std::vector<DigitalAssetSummary>& getAssetList();
    bool assetListIsSet() const;
    void unsetassetList();
    void setAssetList(const std::vector<DigitalAssetSummary>& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXRequestId() const;
    bool xRequestIdIsSet() const;
    void unsetxRequestId();
    void setXRequestId(const std::string& value);


protected:
    std::vector<DigitalAssetSummary> assetList_;
    bool assetListIsSet_;
    std::string xRequestId_;
    bool xRequestIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ListAssetSummaryResponse_H_
